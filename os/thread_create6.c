#include<stdio.h>
#include<pthread.h>

int arr[10];
int arr1[5];
int var1 =0;
int var2 =0

void *f1(){
    for(int i=0; i<10; i++){
        var1 = arr[i];
    }
}

void *f2(){
    for(int i=10;i>0;i--){
        var2= arr[i];
    }

}

void main(){
    pthread_t th1,th2;

    pthread_create(&th1,NULL,f,10);
    pthread_create(&th2,NULL,f,10);

    pthread_join(th1,NULL);
    pthread_join(th1,NULL);

    printf(int i=0;i<5;i++){
        arr1[i]=var1+var2;
    }
}