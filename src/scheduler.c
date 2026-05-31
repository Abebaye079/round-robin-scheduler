#include <stdio.h>
#include <limits.h>
#include "scheduler.h"
#include "display.h"

/*
    Execute a process for one time quantum or until it finishes
*/
void executeProcess(Process *process,
                    int quantum,
                    int *currentTime)
{
    int executionTime;

    if(process->remainingTime > quantum)
    {
        executionTime = quantum;
    }
    else
    {
        executionTime = process->remainingTime;
    }

    process->remainingTime -= executionTime;
    *currentTime += executionTime;
}

/*
    Add newly arrived processes into the ready queue
*/
void updateQueue(Process processes[],
                 int n,
                 int currentTime,
                 int queue[],
                 int *rear,
                 int inQueue[])
{
    for(int i = 0; i < n; i++)
    {
        if(processes[i].arrivalTime <= currentTime &&
           processes[i].remainingTime > 0 &&
           !inQueue[i])
        {
            queue[++(*rear)] = i;
            inQueue[i] = 1;
        }
    }
}

/*
    Round Robin Scheduling Algorithm
*/
void roundRobin(Process processes[], int n, int quantum, GanttEvent gantt[], int *ganttCount)
{
    int queue[1000];
    int front = 0;
    int rear = -1;
    int inQueue[MAX_PROCESSES] = {0};
    int currentTime = 0;
    int completed = 0;
    *ganttCount = 0;

    printf("\n============================================\n");
    printf("        ROUND ROBIN EXECUTION\n");
    printf("============================================\n");

    updateQueue(processes, n, currentTime, queue, &rear, inQueue);

    while(completed < n)
    {
        if(front > rear)
        {
            int nextArrival = INT_MAX;
            for(int i = 0; i < n; i++)
            {
                if(processes[i].remainingTime > 0 && processes[i].arrivalTime < nextArrival)
                {
                    nextArrival = processes[i].arrivalTime;
                }
            }
            printf("Time %d -> %d : IDLE\n", currentTime, nextArrival);
            currentTime = nextArrival;
            updateQueue(processes, n, currentTime, queue, &rear, inQueue);
            continue;
        }

        int index = queue[front++];
        int startTime = currentTime;

        if(processes[index].responseTime == -1)
        {
            processes[index].responseTime = currentTime - processes[index].arrivalTime;
        }

        executeProcess(&processes[index], quantum, &currentTime);
        int endTime = currentTime;

        printf("Time %d -> %d : P%d\n", startTime, endTime, processes[index].pid);

        gantt[*ganttCount].pid = processes[index].pid;
        gantt[*ganttCount].start = startTime;
        gantt[*ganttCount].end = endTime;
        (*ganttCount)++;

        updateQueue(processes, n, currentTime, queue, &rear, inQueue);

        if(processes[index].remainingTime > 0)
        {
            queue[++rear] = index;
        }
        else
        {
            processes[index].completionTime = currentTime;
            inQueue[index] = 0;
            completed++;
        }
    }

    printf("============================================\n");
    printf("All Processes Completed at Time %d\n", currentTime);
    printf("============================================\n");
}