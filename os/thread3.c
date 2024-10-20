#include<stdio.h>
#include<pthread.h>

int var = 0;

void *f(){
    for(int i=0; i<100000; i++){
        var+=1;
    }
}

void main(){
    pthread_t th1,th2;

    pthread_create(&th1,NULL,f,NULL);
    pthread_create(&th2,NULL,f,NULL);

    pthread_join(th1,NULL);
    pthread_join(th1,NULL);

    printf("var = %d",var)
}