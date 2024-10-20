for (int i = 0; i < n; i++) {
        if (current_time < processes[i].arrival_time) {
            current_time = processes[i].arrival_time;
        }
        processes[i].completion_time = current_time + processes[i].burst_time;
        processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
        processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;
        current_time = processes[i].completion_time;
    }

for (int i = 0; i < n; i++) {
        if (current_time < processes[i].arrival_time) {
            current_time = processes[i].arrival_time;
        }
        processes[i].completion_time = current_time + processes[i].burst_time;
        processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
        processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;
        current_time = processes[i].completion_time;
}


void waitingTime(struct processes[n], int n){
    int remaining_burst_time[n];

    for(int i=0; i<n; i++){
        remaining_burst_time[n] = process[i].burst_time;
    }

    int t =0;

    while(1){
    int done =0;
    for(int i=0; i<n; i++){
        int done =1;
        if(remaining_burst_time[i] > 0){
            if(remaining_burst_time[i] > quantum){
                t += quantum;
                remaining_burst_time[i] -= quantum;
            }
            else{
                t += remaining_burst_time[i];
                process[i].waiting_time = t - process[i].burst_time;
                remaining_burst_time[i] = 0;
            }
        }
    }
    if(done == 1){
        break;
    }
}
}

void turnAroundtime(struct processes[n], int n){
    for(int i=0; i<n; i++){
        processes[n].turnAroundtime = processes[n].burst_time + processes[n].waiting_time;
    }
}