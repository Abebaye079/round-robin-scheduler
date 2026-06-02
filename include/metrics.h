#ifndef METRICS_H
#define METRICS_H

#include "input.h"

void calculateTurnaroundTime(Process processes[], int n);
void calculateWaitingTime(Process processes[], int n);

int getTotalExecutionTime(Process processes[], int n);

float calculateCPUUtilization(Process processes[], int n, int totalExecutionTime);
float calculateThroughput(int n, int totalExecutionTime);

void calculateAverages(Process processes[], int n,
                       float *avgWT,
                       float *avgTAT,
                       float *avgRT);

#endif