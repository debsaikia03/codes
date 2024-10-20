#include<stdio.h>
#include<stdlib.h>

int linearSearch(int arr[], int l, int r, int k){

    if(l<=r){

        if(k == arr[r]){

            return r;
        }

        else{

            linearSearch(arr, l, r-1, k);
        }
    }

    else{

        return -1;
    }


}

int main(){

    int arr[] = {1, 3, 4, 21, 7, 22, 8, 9, 16};

    int k = 10;

    int n = linearSearch(arr, 0, 7, k);

    if(n == -1){
        printf("Element not found!");
        return 0;
    }

    printf("%d",n+1);
}