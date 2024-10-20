#include<stdio.h>
#include<pthread.h>

void *f1(){
        for(int i=0; i<20000; i++){
            x+=1;
        }
}

void main(){
        pthread_t th1, th2;
        pthread_create(&th1, NULL, f1, NULL);
        pthread_create(&th2, NULL, f1, NULL);
        pthread_join(th1,NULL);
        pthread_join(th2,NULL);

        printf("x %d",x)
}
