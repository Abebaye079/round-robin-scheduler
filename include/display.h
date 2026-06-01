#ifndef DISPLAY_H
#define DISPLAY_H

#include "input.h"

typedef struct {
    int pid;
    int start;
    int end;
} GanttEvent;

void printTable(Process processes[], int n);
void printGanttChart(GanttEvent gantt[], int count);
void printSummary(float avgWT, float avgTAT, float avgRT, float cpuUtil, float throughput);

#endif
