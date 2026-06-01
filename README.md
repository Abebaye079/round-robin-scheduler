🚀 Round Robin CPU Scheduling Simulator
Operating Systems Course Project | C Programming Language
📖 Project Overview

The Round Robin CPU Scheduling Simulator is a C-based application that demonstrates how modern operating systems manage multiple processes using the Round Robin scheduling algorithm.

This project simulates CPU execution by allocating a fixed time quantum to each process, ensuring fair CPU access and preventing process starvation. It provides detailed scheduling results and performance metrics, helping users understand one of the most important concepts in Operating Systems.

🎯 Project Goals

The main objectives of this project are to:

Simulate the Round Robin Scheduling Algorithm
Model CPU process execution realistically
Calculate important scheduling metrics
Analyze scheduling performance
Strengthen understanding of Operating System concepts
Develop problem-solving and programming skills using C
🏗️ System Features
Process Management
Accepts multiple processes from the user
Stores process information efficiently
Supports arrival time and burst time handling
Round Robin Scheduling
Implements time-quantum-based scheduling
Simulates CPU allocation fairly
Handles process switching automatically
Performance Analysis
Calculates Completion Time (CT)
Calculates Turnaround Time (TAT)
Calculates Waiting Time (WT)
Computes Average Waiting Time
Computes Average Turnaround Time
User-Friendly Output
Organized tabular results
Clear execution sequence
Easy-to-read scheduling statistics
⚙️ Algorithm Explanation

Round Robin is a preemptive scheduling algorithm used in time-sharing systems.

The scheduler assigns a fixed time quantum to each process.

Scheduling Process
Processes enter the Ready Queue.
The CPU executes the first process for one time quantum.
If the process completes, it leaves the queue.
If unfinished, it returns to the end of the queue.
The next process receives CPU time.
The cycle continues until all processes finish execution.

This approach ensures that every process receives a fair share of CPU time.


Group Members : 

1. Abebaye Agumasie .................................................. UGR/9919/16
  
2. Hemen Solomon ..................................................... UGR/1728/16

3. Kaleab Lemma ........................................................ UGR/2941/16

4. Nanat Abeshu ......................................................... UGR/6300/16
   
5. Tsion Tibebe .......................................................... UGR/5794/16


Course:    Operating Systems

Project:  Round Robin CPU Scheduling Implementation (C Language)
