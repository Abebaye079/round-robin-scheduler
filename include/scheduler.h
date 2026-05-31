#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "input.h"
#include "display.h" 

void roundRobin(Process processes[], int n, int quantum, GanttEvent gantt[], int *ganttCount);
void executeProcess(Process *process, int quantum, int *currentTime);
void updateQueue(Process processes[], int n, int currentTime, int queue[], int *rear, int inQueue[]);

#endif