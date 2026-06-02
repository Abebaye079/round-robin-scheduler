#ifndef DISPLAY_H
#define DISPLAY_H

#include "input.h"

// Gantt chart event (process execution segment)
typedef struct {
    int pid;
    int start;
    int end;
} GanttEvent;

// Prints process table
void printTable(Process processes[], int n);

// Prints Gantt chart
void printGanttChart(GanttEvent gantt[], int count);

// Prints performance summary metrics
void printSummary(float avgWT, float avgTAT, float avgRT, float cpuUtil, float throughput);

#endif
