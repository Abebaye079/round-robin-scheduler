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


🔍 Example Scenario

<img width="716" height="143" alt="Screenshot 2026-06-01 095109" src="https://github.com/user-attachments/assets/916dce21-0aaf-485b-be6f-28315adc098f" />


Execution Sequence

<img width="687" height="21" alt="Screenshot 2026-06-01 095204" src="https://github.com/user-attachments/assets/9d821ae3-7d94-4ebe-aeec-6fbae6921ce2" />


Sample Output


<img width="703" height="196" alt="Screenshot 2026-06-01 095251" src="https://github.com/user-attachments/assets/b50570d1-ddc3-492a-a607-4dabef1f495a" />


🧪 Testing Strategy

The system was tested under various conditions to ensure reliability.

Test Cases

1. Small Inputs

2. Edge Cases
   
3. Large Inputs

                                     
⚡ Advantages of Round Robin Scheduling


Fair CPU allocation 

Eliminates starvation

Good response time 

Suitable for interactive systems

to understand and implement


🌍 Real-World Applications

Round Robin scheduling is widely used in:


Operating Systems                                                                        

Time-Sharing Environments

Embedded Systems                                                                           

Process Management Systems

CPU Task Scheduling



🎓 Learning Outcomes

Through this project, we gained practical experience in:

CPU Scheduling Algorithms

Process Management

Queue Data Structures

Performance Analysis

C Programming

Software Testing and Debugging

🏁 Conclusion

The Round Robin CPU Scheduling Simulator successfully demonstrates how operating systems manage multiple processes in a fair and efficient manner.

The project combines theoretical Operating System concepts with practical programming implementation, providing valuable insight into process scheduling, CPU utilization, and performance evaluation.



Course: Operating Systems

Project: Round Robin CPU Scheduling Simulator

Language: C Programming



Group Members : 

1. Abebaye Agumasie .................................................. UGR/9919/16
  
2. Hemen Solomon ..................................................... UGR/1728/16

3. Kaleab Lemma ........................................................ UGR/2941/16

4. Nanat Abeshu ......................................................... UGR/6300/16
   
5. Tsion Tibebe .......................................................... UGR/5794/16


Course:    Operating Systems

Project:  Round Robin CPU Scheduling Implementation (C Language)
