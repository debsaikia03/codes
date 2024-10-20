#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>

#define size 5

int arr[size];

void *produce(){
    int in;
    for(int i=0;i<20;i++){
        pthread_mutex_lock(&l)
        arr[in]=i;
        in=(in+1)%size;
        pthread_mutex_unlock(&l);
    }
}

void *consumer(){
    int out;

    for(int i=0; i<20; i++){
        pthread_mutex_lock(&l);
        int item = arr[out];
        out = (out+1)%size;
        pthread_mutex_unlock(&l);
    }
}

void main(){
    pthread_t prod, cons;
    pthread_mutex_init(&l,NULL);
    
    pthread_create(&prod, NULL, producer, NULL);
    pthread_create(&cons, NULL, consumer, NULL);

    pthread_join(&prod, NULL);
    pthread_join(&cons,NULL);
}