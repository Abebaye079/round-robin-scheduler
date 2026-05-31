#ifndef INPUT_H
#define INPUT_H

#define MAX_PROCESSES 100

typedef struct
{
    int pid;

    int arrivalTime;
    int burstTime;
    int remainingTime;

    int priority;

    int completionTime;
    int turnaroundTime;
    int waitingTime;
    int responseTime;

} Process;

/* Input Functions */

void getInput(Process processes[],
    int *n,
    int *quantum);

void validateInput(int value,
    const char *message);

void displayInput(Process processes[],
    int n,
    int quantum);

#endif