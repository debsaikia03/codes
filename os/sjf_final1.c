#include <stdio.h>

// Structure to represent a process
typedef struct {
    int process_id;         // Process ID
    int arrival_time;       // Arrival time
    int burst_time;         // CPU burst time
    int completion_time;    // Completion time
    int waiting_time;       // Waiting time
    int turnaround_time;    // Turnaround time
} Process;

// Function to sort the processes based on their arrival time
void sortProcessesByArrivalTime(Process processes[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (processes[j].arrival_time > processes[j + 1].arrival_time) {
                Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }
}

// Function to implement the Non-Preemptive Shortest Job First (SJF) scheduling algorithm
void SJF(Process processes[], int n) {
    // Sort the processes by arrival time
    sortProcessesByArrivalTime(processes, n);

    int current_time = 0; // Current time

    // Calculate completion time, waiting time, and turnaround time for each process
    for (int i = 0; i < n; i++) {
        if (current_time < processes[i].arrival_time) {
            current_time = processes[i].arrival_time;
        }
        processes[i].completion_time = current_time + processes[i].burst_time;
        processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
        processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;
        current_time = processes[i].completion_time;
    }
}

int main() {
    // Array to store the processes
    Process processes[] = {
        {0, 0, 5, 0, 0, 0},
        {1, 1, 6, 0, 0, 0},
        {2, 2, 3, 0, 0, 0},
        {3, 4, 9, 0, 0, 0},
        {4, 6, 4, 0, 0, 0}
    };

    int n = sizeof(processes) / sizeof(processes[0]);

    // Perform SJF scheduling
    SJF(processes, n);

    // Display process details
    printf("Process\tArrival Time\tCPU Burst Time\tCompletion Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", processes[i].process_id, processes[i].arrival_time,
               processes[i].burst_time, processes[i].completion_time, processes[i].waiting_time,
               processes[i].turnaround_time);
    }

    return 0;
}