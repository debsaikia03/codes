#include <stdio.h>

struct Process {
	char Pid[10];
	int arrival_time;
	int burst_time;
	int waiting_time;
	int response_time;
	int turn_around_time;
	int remaining_time;
};


int main(){
	int no;
	printf("Enter the number of processes: ");
	scanf("%d",&no);
	struct Process p[no];
	//initialize of process
	for(int i=0;i<no;i++){
		printf("Enter the name, a.t, b.t of process %d: ",(i+1));
		scanf("%s",p[i].Pid);
		scanf("%d",&p[i].arrival_time);
		scanf("%d",&p[i].burst_time);
		p[i].remaining_time = p[i].burst_time;
		printf("\n");
	}
	//sort of process 
	for(int i=0;i<no;i++){
	for(int j=0;j<no;j++){
		if(p[j].arrival_time >= p[j+1].arrival_time){
			struct Process temp = p[j];
			p[j] = p[j+1];
			p[j+1] = temp;
		}
	}
	}
	//fcfs scheduling algorithm
	int remaining_process=no, p_index=0, t=0;
	while(1){
		if( t >= p[p_index].arrival_time)
			p[p_index].remaining_time--;
		t++;
		if( p[p_index].remaining_time == 0)
		{
			p[p_index].turn_around_time = t - p[p_index].arrival_time;
			p[p_index].waiting_time = p[p_index].turn_around_time - p[p_index].burst_time;
			p[p_index].response_time = p[p_index].turn_around_time - p[p_index].arrival_time;
			p_index++;
			remaining_process--;
		}
		if(remaining_process == 0)
			break;
	}
	printf("Process\tTAT\tW.T\tR.T");
	for(int i=0;i<no;i++){
		printf("%s\t%d\t%d\t%d\n",p[i].Pid,p[i].turn_around_time, p[i].waiting_time, p[i].response_time);
	}
}