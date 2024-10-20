#include<stdio.h>
#include<unistd.h>


void main(){
     int x = fork();
     
     if(x<0){
         printf("Child not created!");
     }
     
      else{
         for(int i=0; i<10;i++){
            sleep(1);
           printf("pid: %d, i: %d\n", getpid(),i);  
             }
         }
      }