#include <stdio.h>


typedef struct {
    int process_id;         
    int arrival_time;       
    int burst_time;     
    int completion_time;    
    int waiting_time;       
    int turnaround_time;    
} Process;

int main() {
    // Array to store the processes
    Process processes[] = {
        {1, 0, 2, 0, 0, 0},
        {2, 1, 5, 0, 0, 0},
        {3, 2, 7, 0, 0, 0},
        {4, 4, 12, 0, 0, 0},
        {5, 3, 6, 0, 0, 0}
    };

    int n = sizeof(processes) / sizeof(processes[0]);

    int current_time = 0; 

    for (int i = 0; i < n; i++) {
        if (current_time < processes[i].arrival_time) {
            current_time = processes[i].arrival_time;
        }
        processes[i].completion_time = current_time + processes[i].burst_time;
        processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
        processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;
        current_time = processes[i].completion_time;
    }

    // Display process details
    printf("Process\tArrival Time\tCPU Burst Time\tCompletion Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", processes[i].process_id, processes[i].arrival_time,
               processes[i].burst_time, processes[i].completion_time, processes[i].waiting_time,
               processes[i].turnaround_time);
    }

    // Calculate average waiting time and turnaround time
    float avg_waiting_time = 0, avg_turnaround_time = 0;
    for (int i = 0; i < n; i++) {
        avg_waiting_time += processes[i].waiting_time;
        avg_turnaround_time += processes[i].turnaround_time;
    }
    avg_waiting_time /= n;
    avg_turnaround_time /= n;

    printf("\nAverage Waiting Time: %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);

    return 0;
}