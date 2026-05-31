#include <stdio.h>
#include "display.h"

void printTable(Process processes[], int n)
{
    printf("\n");
    printf("================================================================================\n");
    printf("PID  Arrival  Burst  Priority  Completion  Turnaround  Waiting  Response\n");
    printf("================================================================================\n");
    for(int i = 0; i < n; i++)
    {
        printf("P%-2d  %-7d  %-5d  %-8d  %-10d  %-9d  %-7d  %-7d\n",
               processes[i].pid,
               processes[i].arrivalTime,
               processes[i].burstTime,
               processes[i].priority,
               processes[i].completionTime,
               processes[i].turnaroundTime,
               processes[i].waitingTime,
               processes[i].responseTime);
    }
    printf("================================================================================\n");
}

void printGanttChart(GanttEvent gantt[], int count)
{
    printf("\nGantt Chart:\n");
    printf(" ");
    for(int i = 0; i < count; i++)
    {
        printf("--------");
    }
    printf("\n|");
    for(int i = 0; i < count; i++)
    {
        printf(" P%-2d |", gantt[i].pid);
    }
    printf("\n ");
    for(int i = 0; i < count; i++)
    {
        printf("--------");
    }
    printf("\n%d", gantt[0].start);
    for(int i = 0; i < count; i++)
    {
        printf("     %d", gantt[i].end);
    }
    printf("\n");
}

void printSummary(float avgWT, float avgTAT, float avgRT, float cpuUtil, float throughput)
{
    printf("\n========== PERFORMANCE SUMMARY ==========\n");
    printf("Average Waiting Time   : %.2f\n", avgWT);
    printf("Average Turnaround Time: %.2f\n", avgTAT);
    printf("Average Response Time  : %.2f\n", avgRT);
    printf("CPU Utilization        : %.2f%%\n", cpuUtil);
    printf("Throughput             : %.3f processes/unit time\n", throughput);
    printf("==========================================\n");
}