#include<stdio.h>

int main(){

    int n, first = 0, second = 1, next;

    printf("Enter the nth range of fibbonacci series: ");
    scanf("%d",&n);

    if(n == 1){
        printf("The 1st term is: 0");
    }

    else if(n == 2){
        printf("The 2nd term is: 1");
    }

    else{

        for(int i=3; i<=n; i++){

            next = first + second;
            first = second;
            second = next;
        }
    

        printf("The nth term is: %d",second);
    }

}