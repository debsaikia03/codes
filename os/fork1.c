#include<stdio.h>
#include<unistd.h>


void main(){
   int x= fork();
    if(x==0)
    fork();
    printf("Hello\n");
}