### Processes vs Threads 

Proccess:
Program in execution and will loaded into memory and managed by opearting system.
Process address space is generally organized into code, data (static/global), heap and stack segments.
 _________
|   heap  |
|_________|         
|  stack  | -----> stack pointer
|_________|         
|  Data   |
|_________|
|  code   | ----> Program Counter
|_________|

Process State:

State                   Description

If Main Memory avaible,
New                     In this step, the process is about to be created but not yet created, it is the program which is present in                                  secondary memory that will be picked up by OS to create the process.
Ready                   New -> Ready to run. After the creation of a process, the process enters the ready state i.e. the process is loaded                          into the main memory. The process here is ready to run and is waiting to get the CPU time for its execution.                                 Processes that are ready for execution by the CPU are maintained in a queue for ready processes.
Running                 The process is chosen by CPU for execution and the instructions within the process are executed by any one of the                            available CPU cores.
Waiting/Blocked         Waiting for Resources. ie. I/O read.
Terminated              Process is killed as well as PCB is deleted.

else secondary Memory
Suspend ready           Process that was initially in the ready state but were swapped out of main memory(refer Virtual Memory topic) and                            placed onto external storage by scheduler are said to be in suspend ready state. The process will transition back to                         ready state whenever the process is again brought onto the main memory.
Suspend wait/           Similar to suspend ready but uses the process which was performing I/O operation and lack of main memory caused them suspend blocked         to move to secondary memory. When work is finished it may go to suspend ready.

Process Creation:
When Process is created it has own address space and when parent proces execute the child process if there is then the child process own its own memory. So, Parent and child has own address space.

Process Management:
OS maintain a data structure for each process called PCB:

Process Control Block:
The process control block (PCB) is used to track the process’s execution status. Each block of memory contains information about the process state, program counter, stack pointer, status of opened files, scheduling algorithms, etc.

It holds the below information:
1. The process scheduling state - ie. new, ready..
2. Process ID
3. IPC Information
4. Process Privileges 
5. Program counter - A pointer to the address of the next instruction to be executed for this process.
6. CPU Register
7. CPU Scheduling information
8. Memory Mangement information
9. I/O Status information

Ready Queue:
Process are put in a main memory and that in ready state are kept in ready queue. Unless the process is termintaed put back into a
ready queue.

Process Scheduling:
Process scheduling helps system for multiprocessing and determine which process should be next in line for the cpu.

Non-Preemptive vs Preemptive:
A Process can give up CPU in two ways.

Non-Preemptive: 
A Process voluntarily gives up CPU.
1. Process termination.
2. I/O Reuest block.

Preemptive:
A Process is forced to give up the CPU.
1. Interrupted due to high priority process.
2. Each process has fixed time slice to use CPU.

Multithreading:
With single process do more than one thing at a time. Suppose there is a process, that receiving real time inputs and corresponding to each input it has to produce a certain output. Now, if the process is not multi-threaded ie if the process does not involve multiple threads, then the whole processing in the process becomes synchronous. This means that the process takes an input processes it and produces an output.

The limitation in the above design is that the process cannot accept an input until its done processing the earlier one and in case processing an input takes longer than expected then accepting further inputs goes on hold.

This shows that synchronous model of execution cannot be applied everywhere and hence was the requirement of asynchronous model of execution felt which is implemented by using threads.


Why do Multithreading:
When we create a process it include many thing like an address space, PCB Block. So, Creating a another process very costly opeartion.
Communication between two process is very costly operation.

Memory space shared between thread and process:
Threads belong to a process usually share a few other key resource as well as, Such as working dir, env variable, files, code seg, data seg and heap seg. But, Each thread has its own private stack, register and program counter.

What is thread:
A thread is a single sequence stream within in a process. Because threads have some of the properties of processes, they are sometimes called lightweight processes.

LWP - Light wight process:
Linux kernel does not see them as a threads and each thread is viewed as a process inside kernel. These process are known as light weight process because threads share few memory space with process.











