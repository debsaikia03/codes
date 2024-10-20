#include<stdio.h>
#include<pthread.h>  

int *f1(){
        printf("HELLO");
}

void main(){
        pthread_t th1, th2;
        pthread_create(&th1, NULL, f1, NULL);
        pthread_create(&th2, NULL, f1, NULL);
        pthread_join(th1,NULL);
        pthread_join(th2,NULL);    
}                                                                                                       }  