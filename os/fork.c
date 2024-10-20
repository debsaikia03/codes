#include<stdio.h>
#include<unistd.h>


void main(){
    fork();
    
    printf("process id %d\n",getpid());
}

