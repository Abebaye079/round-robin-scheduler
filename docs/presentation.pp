# ROUND ROBIN CPU SCHEDULING

## Introduction

Round Robin CPU Scheduling**, one of the most important scheduling algorithms used in Operating Systems.

CPU scheduling is responsible for deciding which process gets access to the CPU and for how long. Among the various scheduling algorithms, Round Robin is widely used because it provides fairness and prevents starvation.

In this project, we implemented the Round Robin Scheduling Algorithm using the C programming language and analyzed its performance through different test cases.

---

## Project Objectives

The main objective of this project is to simulate the behavior of the Round Robin Scheduling Algorithm.

Specifically, the project aims to:

* Accept process information from the user.
* Execute processes using a fixed time quantum.
* Calculate Completion Time, Waiting Time, and Turnaround Time.
* Display scheduling results clearly.
* Demonstrate how operating systems share CPU resources among multiple processes.

---

## How Round Robin Works

Round Robin Scheduling is a preemptive scheduling algorithm.

Each process is assigned a fixed amount of CPU time called a **time quantum**.

When a process receives the CPU, it executes for the given time quantum. If the process finishes within that time, it leaves the system. Otherwise, it is placed at the end of the ready queue and waits for its next turn.

This cycle continues until all processes complete their execution.

The major advantage of this algorithm is that every process gets a fair opportunity to use the CPU.

---

## System Design

Our system consists of three major components:

### Input Module

This module accepts:

* Number of processes
* Process IDs
* Arrival Times
* Burst Times
* Time Quantum

### Scheduling Module

This module implements the Round Robin algorithm and controls the execution sequence of processes.

### Output Module

This module displays:

* Completion Time
* Waiting Time
* Turnaround Time
* Average Waiting Time
* Average Turnaround Time

---

## Performance Metrics

To evaluate the efficiency of the scheduling process, we used the following metrics:

### Turnaround Time

Turnaround Time measures the total time taken by a process from arrival to completion.

### Waiting Time

Waiting Time represents the amount of time a process spends waiting in the ready queue before execution.

These metrics help determine the effectiveness of the scheduling algorithm.

---

## Testing

The program was tested using different scenarios.

First, we tested with a small number of processes to verify the correctness of the algorithm.

Second, we tested with a larger number of processes to evaluate performance.

Finally, we tested edge cases such as identical arrival times and different burst times to ensure reliability.

The program produced accurate results in all test cases.

---

## Advantages of Round Robin Scheduling

The Round Robin Scheduling Algorithm offers several advantages:

* Fair CPU allocation among processes.
* No process starvation.
* Good response time.
* Suitable for time-sharing systems.
* Easy to implement and understand.

Because of these benefits, it is commonly used in modern operating systems.

---

## Challenges Faced

During development, we encountered several challenges.

The main challenge was managing the process queue correctly while updating the remaining burst times.

Another challenge was ensuring that waiting time and turnaround time calculations were accurate.

These challenges were overcome through careful algorithm design, testing, and debugging.

---

## Conclusion

In conclusion, this project successfully demonstrates the implementation of the Round Robin CPU Scheduling Algorithm using C.

Through this project, we gained practical knowledge of CPU scheduling, process management, queue handling, and performance evaluation.

The project helped us understand how operating systems efficiently manage multiple processes while ensuring fairness and responsiveness.


