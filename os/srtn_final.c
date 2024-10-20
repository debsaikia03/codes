#include <stdio.h>

#define MAX_PROCESSES 100

struct Process {
    int pid; // Process ID
    int bt; // Burst Time
    int art; // Arrival Time
    int completed; // Flag to indicate if the process is completed
};

void findWaitingTime(struct Process proc[], int n, int wt[]) {
    int currentTime = 0;
    int remainingProcesses = n;

    while (remainingProcesses > 0) {
        int shortest = -1;
        int shortestBurst = 999999;

        for (int i = 0; i < n; i++) {
            if (proc[i].art <= currentTime && !proc[i].completed && proc[i].bt < shortestBurst) {
                shortestBurst = proc[i].bt;
                shortest = i;
            }
        }

        if (shortest == -1) {
            currentTime++;
            continue;
        }

        proc[shortest].bt--;
        currentTime++;

        if (proc[shortest].bt == 0) {
            proc[shortest].completed = 1;
            remainingProcesses--;
            wt[shortest] = currentTime - proc[shortest].art - proc[shortest].bt;
        }
    }
}

void findTurnAroundTime(struct Process proc[], int n, int wt[], int tat[]) {
    for (int i = 0; i < n; i++) {
        tat[i] = proc[i].bt + wt[i];
    }
}

void findAverageTime(struct Process proc[], int n) {
    int wt[MAX_PROCESSES], tat[MAX_PROCESSES];
    int total_wt = 0, total_tat = 0;

    findWaitingTime(proc, n, wt);
    findTurnAroundTime(proc, n, wt, tat);

    printf("Process ID\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        printf("%d\t\t%d\t\t%d\t\t%d\n", proc[i].pid, proc[i].bt, wt[i], tat[i]);
    }

    printf("\nAverage Waiting Time: %.2f\n", (float)total_wt / n);
    printf("Average Turnaround Time: %.2f\n", (float)total_tat / n);
}

int main() {
    struct Process proc[] = { { 1, 6, 2, 0 }, { 2, 2, 5, 0 },
                    { 3, 8, 1, 0 }, { 4, 3, 0, 0 }, { 5, 4, 4, 0 } };
    int n = sizeof(proc) / sizeof(proc[0]);

    findAverageTime(proc, n);

    return 0;
}