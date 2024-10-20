#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

struct process{
    char pid[5];
    int arrival_time;
    int burst_time;
    int waiting_time;
    int turn_around_time;
    int response_time;
    int remaining_time;
    bool execution_started;
};
void main() {
    char scheduling_algo[]="FCFS";
    
    int N;
    // printf("How many processes? ");
    // scanf("%d",&N);
    N=5;
    
    struct process INPUTS[N];
    // for(int i=0;i<N;i++){
    //     printf("input-%d: Enter process id, arrival time, burst time : ",i+1);
    //     scanf("%s%d%d",INPUTS[i].pid,&INPUTS[i].arrival_time,&INPUTS[i].burst_time);
    // }
    strcpy(INPUTS[0].pid,"a"); INPUTS[0].arrival_time=8; INPUTS[0].burst_time=4;
    strcpy(INPUTS[1].pid,"b"); INPUTS[1].arrival_time=9; INPUTS[1].burst_time=3;
    strcpy(INPUTS[2].pid,"c"); INPUTS[2].arrival_time=3; INPUTS[2].burst_time=2;
    strcpy(INPUTS[3].pid,"d"); INPUTS[3].arrival_time=7; INPUTS[3].burst_time=5;
    strcpy(INPUTS[4].pid,"e"); INPUTS[4].arrival_time=10; INPUTS[4].burst_time=2; 
    
    // sort the inputs wrt arrival times
    for (int i=0;i<N-1;i++){
        for(int j=0;j<N-1-i;j++){
            if (INPUTS[j].arrival_time>INPUTS[j+1].arrival_time){
                struct process temp=INPUTS[j];
                INPUTS[j]=INPUTS[j+1];
                INPUTS[j+1]=temp;
            }
        }
    }
    printf("process id\tarrival time\tburst time\n");
    for(int i=0;i<N;i++){
        printf("%s\t\t\t%d\t\t\t\t%d\n",INPUTS[i].pid,INPUTS[i].arrival_time,INPUTS[i].burst_time);
    }

    // define a process queue, initially empty
    struct process process_queue[N];
    int front=-1; // incremented for popping
    int rear=-1; // incremented for pushing
    
    struct process completed_processes[N]; // completed processes are saved in this array
    int completed_count=0; // the while(1) loop is stopped when completed_count is N
    int next_process_in_INPUTS=0;
    struct process running_process;
    
    // t (time) is started at 0 and in each iteration is increamented by 1
    int t=0;
    bool cpu_busy=false;
    bool load_process_from_queue=false;
    while(1){
        printf("\nt-%d\n",t);
        for (int i=front+1;i<=rear;i++){
            process_queue[i].waiting_time+=1;
        }
        
        while (t==INPUTS[next_process_in_INPUTS].arrival_time){
            INPUTS[next_process_in_INPUTS].execution_started=false;
            INPUTS[next_process_in_INPUTS].waiting_time=0;
            printf("process %s being loaded in process queue\n",INPUTS[next_process_in_INPUTS].pid);
            
            if (strcmp(scheduling_algo,"FCFS")==0){
                process_queue[++rear]=INPUTS[next_process_in_INPUTS];
            }
            else{
                printf("%s Scheduling algorithm UNKNOWN",scheduling_algo);
                exit(0);
            }
            next_process_in_INPUTS++;
            //printf("front %d, rear %d\n",front,rear);
            //for (int i=front+1;i<=rear;i++){
            //    printf("process queue - %d, pid - %s\n",i,process_queue[i].pid);
            //}
        }
        
        if (!cpu_busy){
            load_process_from_queue=true;
        }
        else{
            running_process.remaining_time--;
            if (running_process.remaining_time==0){
                printf("process %s ends\n",running_process.pid);
                running_process.turn_around_time=t-running_process.arrival_time;
                completed_processes[completed_count++]=running_process;
                cpu_busy=false;
                load_process_from_queue=true;
            }
        }
        
        if(load_process_from_queue){
            if (rear!=-1){
                running_process=process_queue[++front];
                printf("process %s loaded in CPU\n",running_process.pid);
                if (!running_process.execution_started){
                    running_process.execution_started=true;
                    running_process.remaining_time=running_process.burst_time;
                    running_process.response_time=t-running_process.arrival_time;
                }
                cpu_busy=true;
                if (front==rear){
                    front=-1;rear=-1;
                }
                load_process_from_queue=false;
            }
        }
        
        if (completed_count==N) 
            break;
        t++;
        //if (t==100) break;
    }
    printf("\n\nt %d, completed_count %d\n\n",t, completed_count);
    
    //calculate the average waiting, response and turn-around times
    float sum_response_times=0, sum_waiting_times=0, sum_turnaround_times=0;
    printf("pid\tarrival_time\tburst_time\tresponse_time\twaiting_time\tturnaround_time\n");
    for(int i=0;i<N;i++){
        printf("%s\t%d\t\t\t\t%d\t\t\t%d\t\t\t\t%d\t\t\t\t%d\n",
        completed_processes[i].pid,
        completed_processes[i].arrival_time,
        completed_processes[i].burst_time,
        completed_processes[i].response_time,
        completed_processes[i].waiting_time,
        completed_processes[i].turn_around_time);
        sum_response_times+=completed_processes[i].response_time;
        sum_waiting_times+=completed_processes[i].waiting_time;
        sum_turnaround_times+=completed_processes[i].turn_around_time;
    }
    printf("Average Response Time : %f sec\n",sum_response_times/N);
    printf("Average Waiting Time : %f sec\n",sum_waiting_times/N);
    printf("Average Turn-around Time : %f sec\n",sum_turnaround_times/N);
}