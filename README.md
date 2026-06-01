📊 ROUND ROBIN CPU SCHEDULING

Operating System Group Project (C Language)


🏫 Project Title

Implementation of Round Robin CPU Scheduling Algorithm using C



👨‍💻 Project Overview

This project simulates the working of a CPU scheduling algorithm used in modern operating systems — Round Robin Scheduling.

The system is designed to allocate CPU time fairly among multiple processes using a fixed time quantum, ensuring efficient time-sharing and responsiveness.


🎯 Objectives


Implement Round Robin Scheduling algorithm in C

Simulate process execution in a time-sharing system

Accept dynamic user input for processes

Calculate performance metrics:

Waiting Time

Turnaround Time

Completion Time

Display execution order clearly



🧠 What is Round Robin Scheduling?

Round Robin (RR) is a preemptive CPU scheduling algorithm where:

Each process is assigned a fixed time quantum

Processes are executed in a circular queue

If a process is not completed within its time quantum, it is moved to the back of the queue


This continues until all processes are completed

✔ Ensures fairness

✔ Prevents starvation

✔ Ideal for time-sharing systems



⚙️ Key Features of the System

Dynamic process input

Time quantum-based execution

Queue-based scheduling simulation

Real-time process tracking

Accurate performance calculation



📥 Input Requirements

The system accepts the following inputs:

Number of processes

Process ID (PID)

Arrival Time (AT)

Burst Time (BT)

Time Quantum (TQ)


🔄 Algorithm Working Steps

Input all process details

Initialize remaining burst time for each process

Maintain a ready queue

Execute processes based on time quantum

If process is not finished → reinsert into queue

Update completion time when process finishes

Repeat until all processes are completed



📊 Scheduling Formulas


⏱ Turnaround Time (TAT)

TAT = Completion Time - Arrival Time



⏳ Waiting Time (WT)

WT = Turnaround Time - Burst Time


📈 Output Generated

The system displays:

Execution order of processes

Process completion timeline

Waiting time for each process

Turnaround time for each process

Average waiting time

Average turnaround time


👥 Team Contribution


👨‍💻 Abebaye (Module Lead)

Input handling system

Data structure design

Process storage logic


👨‍💻 Other Members

Scheduling algorithm implementation

Output formatting

Performance calculations

Testing and debugging


🧪 Testing Strategy

To ensure correctness, the system was tested using:

✔ Small datasets (2–3 processes)

✔ Large datasets (10+ processes)

✔ Same arrival time scenarios

✔ Different burst times

✔ Edge cases (zero/short burst times)


⚠️ Challenges Faced

Managing circular queue behavior

Handling process re-entry correctly

Synchronizing arrival and execution times

Preventing calculation errors in waiting time


💡 Solutions Implemented

Used array-based queue simulation

Carefully tracked remaining burst time

Added conditional checks for arrival time

Verified results using step-by-step execution tracing


🚀 Advantages of Round Robin

Fair CPU allocation among processes

No process starvation

Good response time for users

Simple and easy to implement

Suitable for time-sharing systems


📌 Real-World Applications

Round Robin scheduling is used in:

Operating systems (Windows, Linux variants)
Time-sharing environments
CPU task scheduling systems
Multitasking systems


📊 Conclusion

The Round Robin Scheduling simulation successfully demonstrates how operating systems manage multiple processes efficiently.


This project helped us understand:

CPU scheduling concepts

Process management

Real-time system simulation

Algorithm implementation in C


🙏 Thank You


Group Members : 

1. Abebaye Agumasie .................................................. UGR/9919/16
  
2. Hemen Solomon ..................................................... UGR/1728/16

3. Kaleab Lemma ........................................................ UGR/2941/16

4. Nanat Abeshu ......................................................... UGR/6300/16
   
5. Tsion Tibebe .......................................................... UGR/5794/16


Course:    Operating Systems

Project:  Round Robin CPU Scheduling Implementation (C Language)
