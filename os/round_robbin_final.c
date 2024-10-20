#include <stdio.h>

// Structure to represent a process
struct Process {
    int id;        // Process ID
    int burst_time; // Burst time of the process
    int waiting_time; // Waiting time of the process
    int turnaround_time; // Turnaround time of the process
};

// Function to find the waiting time for all processes
void findWaitingTime(struct Process processes[], int n, int quantum) {
    int remaining_burst_time[n];
    for (int i = 0; i < n; i++)
        remaining_burst_time[i] = processes[i].burst_time;

    int t = 0; // Current time

    while (1) {
        int done = 1;

        for (int i = 0; i < n; i++) {
            if (remaining_burst_time[i] > 0) {
                done = 0;

                if (remaining_burst_time[i] > quantum) {
                    t += quantum;
                    remaining_burst_time[i] -= quantum;
                } else {
                    t += remaining_burst_time[i];
                    processes[i].waiting_time = t - processes[i].burst_time;
                    remaining_burst_time[i] = 0;
                }
            }
        }

        if (done == 1)
            break;
    }
}

// Function to calculate turnaround time
void findTurnAroundTime(struct Process processes[], int n) {
    for (int i = 0; i < n; i++)
        processes[i].turnaround_time = processes[i].burst_time + processes[i].waiting_time;
}

// Function to calculate average time
void findAvgTime(struct Process processes[], int n, int quantum) {
    findWaitingTime(processes, n, quantum);
    findTurnAroundTime(processes, n);

    int total_waiting_time = 0, total_turnaround_time = 0;

    printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\n", processes[i].id, processes[i].burst_time,
               processes[i].waiting_time, processes[i].turnaround_time);
        total_waiting_time += processes[i].waiting_time;
        total_turnaround_time += processes[i].turnaround_time;
    }

    printf("Average Waiting Time = %.2f\n", (float)total_waiting_time / n);
    printf("Average Turnaround Time = %.2f\n", (float)total_turnaround_time / n);
}

int main() {
    // Array of processes
    struct Process processes[] = {
        {1, 10, 0, 0},
        {2, 5, 0, 0},
        {3, 8, 0, 0}
    };
    int n = sizeof(processes) / sizeof(processes[0]);
    int quantum = 2;
    
    findAvgTime(processes, n, quantum);
    
    return 0;
}