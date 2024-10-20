#include<stdio.h>

struct process{
    int pid;
    int arr_time;
    int bur_time;
    int wait_time;
    int resp_time;
    int turn_ar_time;
    int remain_time;
};

int main(){

    int n;

    printf("Enter no. of processes: ");
    scanf("%d",&n);

    struct process p[n];

    for(int i=0; i<n; i++){
        printf("Enter process id #%d: ",i+1);
        scanf("%d",&p[i].pid);

        printf("Enter arrival time #%d: ",i+1);
        scanf("%d",&p[i].arr_time);

        printf("Enter burst time #%d: ",i+1);
        scanf("%d",&p[i].bur_time);

        printf("\n");
    }

    struct process temp;
    for(int i=0; i<n; i++)
    {
      temp= p[i];
      int j=i-1;
      
      while(j>=0 && p[j].arr_time>temp.arr_time)
      {
        p[j+1] = p[j];
        j--;
      }
      
      p[j+1] = temp;
    }

    /*for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(p[j].arr_time >= p[j+1].arr_time){
                struct process temp = p[j];
                p[j]=p[j+1];
                p[j+1]= temp;
            }
        }
    }*/

    printf("Sorted processes according to FCFS: ");

    for(int i=0; i<n; i++)
    {
        printf("%d ", p[i].pid);
    }

    int remain_process=n;
    int t=0, p_index=0;
    while(1)
    {
        p[p_index].remain_time--;
        t++;
        if(remain_process==0)
        break;
    
    if(p[p_index].remain_time==0)
    {
        remain_process--;
        p[p_index].turn_ar_time = t - p[p_index].arr_time;
        p_index++;
    }
    }

    for(int i=0; i<n; i++){
        
    }
}