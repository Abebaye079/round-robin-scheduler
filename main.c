#include <stdio.h>
#include "include/input.h"
#include "include/scheduler.h"
#include "include/metrics.h"
#include "include/display.h"

int main()
{
    Process processes[MAX_PROCESSES];
    int n;
    int quantum;
    GanttEvent gantt[1000];
    int ganttCount;

    getInput(processes, &n, &quantum);
    displayInput(processes, n, quantum);
    roundRobin(processes, n, quantum, gantt, &ganttCount);

    calculateTurnaroundTime(processes, n);
    calculateWaitingTime(processes, n);

    float avgWT, avgTAT, avgRT;
    calculateAverages(processes, n, &avgWT, &avgTAT, &avgRT);

    int totalExecutionTime = getTotalExecutionTime(processes, n);
    float cpuUtil = calculateCPUUtilization(processes, n, totalExecutionTime);
    float throughput = calculateThroughput(n, totalExecutionTime);

    printTable(processes, n);
    printGanttChart(gantt, ganttCount);
    printSummary(avgWT, avgTAT, avgRT, cpuUtil, throughput);

    return 0;
}