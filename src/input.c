#include <stdio.h>
#include <stdlib.h>
#include "input.h"

/*
    Validates values that must be >= 0
*/
void validateInput(int value,
                   const char *message)
{
    if(value < 0)
    {
        printf("Error: %s cannot be negative!\n",
            message);

        exit(1);
    }
}

/*
    Get all process information
*/
void getInput(Process processes[],
    int *n,
    int *quantum)
{
    printf("Enter number of processes: ");
    scanf("%d", n);

    if(*n <= 0 || *n > MAX_PROCESSES)
    {
        printf("Error: Number of processes must be between 1 and %d\n",
            MAX_PROCESSES);

        exit(1);
    }

    for(int i = 0; i < *n; i++)
    {
        processes[i].pid = i + 1;

        printf("\n===== Process P%d =====\n",
            processes[i].pid);

        printf("Arrival Time: ");
        scanf("%d",
            &processes[i].arrivalTime);

        validateInput(processes[i].arrivalTime,
            "Arrival Time");

        printf("Burst Time: ");
        scanf("%d",
            &processes[i].burstTime);

        if(processes[i].burstTime <= 0)
        {
            printf("Error: Burst Time must be greater than 0\n");
            exit(1);
        }

        printf("Priority: ");
        scanf("%d",
            &processes[i].priority);

        validateInput(processes[i].priority,
            "Priority");

        /*
            Initialize values
            needed later by scheduler
            and metrics modules
        */
        processes[i].remainingTime =
            processes[i].burstTime;

        processes[i].completionTime = 0;
        processes[i].turnaroundTime = 0;
        processes[i].waitingTime = 0;
        processes[i].responseTime = -1;
    }

    printf("\nEnter Time Quantum: ");
    scanf("%d", quantum);

    if(*quantum <= 0)
    {
        printf("Error: Time Quantum must be greater than 0\n");
        exit(1);
    }
}

/*
    Display all input data
*/
void displayInput(Process processes[],
    int n,
    int quantum)
{
    printf("\n");
    printf("============================================\n");
    printf("           PROCESS INFORMATION\n");
    printf("============================================\n");

    printf("%-8s %-8s %-8s %-8s\n",
        "PID",
        "AT",
        "BT",
        "PR");

    printf("--------------------------------------------\n");

    for(int i = 0; i < n; i++)
    {
        printf("P%-7d %-8d %-8d %-8d\n",
            processes[i].pid,
            processes[i].arrivalTime,
            processes[i].burstTime,
            processes[i].priority);
    }

    printf("--------------------------------------------\n");

    printf("Time Quantum = %d\n",
        quantum);

    printf("============================================\n");
}