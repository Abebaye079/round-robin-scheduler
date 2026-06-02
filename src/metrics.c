#include "metrics.h"

void calculateTurnaroundTime(Process processes[], int n)
{
    for(int i = 0; i < n; i++)
    {
        processes[i].turnaroundTime =
            processes[i].completionTime -
            processes[i].arrivalTime;
    }
}

void calculateWaitingTime(Process processes[], int n)
{
    for(int i = 0; i < n; i++)
    {
        processes[i].waitingTime =
            processes[i].turnaroundTime -
            processes[i].burstTime;
    }
}

int getTotalExecutionTime(Process processes[], int n)
{
    int max = 0;

    for(int i = 0; i < n; i++)
    {
        if(processes[i].completionTime > max)
        {
            max = processes[i].completionTime;
        }
    }

    return max;
}

float calculateCPUUtilization(Process processes[], int n, int totalExecutionTime)
{
    int totalBusy = 0;

    for(int i = 0; i < n; i++)
    {
        totalBusy += processes[i].burstTime;
    }

    if(totalExecutionTime <= 0)
    {
        return 0.0f;
    }

    return (totalBusy / (float)totalExecutionTime) * 100.0f;
}

float calculateThroughput(int n, int totalExecutionTime)
{
    if(totalExecutionTime <= 0)
    {
        return 0.0f;
    }

    return n / (float)totalExecutionTime;
}

void calculateAverages(Process processes[], int n,
                       float *avgWT,
                       float *avgTAT,
                       float *avgRT)
{
    float sumWT = 0;
    float sumTAT = 0;
    float sumRT = 0;

    for(int i = 0; i < n; i++)
    {
        sumWT += processes[i].waitingTime;
        sumTAT += processes[i].turnaroundTime;
        sumRT += processes[i].responseTime;
    }

    *avgWT = sumWT / n;
    *avgTAT = sumTAT / n;
    *avgRT = sumRT / n;
}