#include<stdio.h>

void EXCHANGE(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

void ROTATE_RIGHT(int *p1, int p2){

    int i = p2-1;

    while(i>0){
        EXCHANGE(&p1[i], &p1[i-1]);
        i--;
    }
}

int main(){

    int n, m;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements: ");
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Given array: \n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter the no. of first elements to be rotated: ");
    scanf("%d",&m);

    if(m > n || m == 0 || m == 1){
        printf("Invalid no. of elements targeted!");
        return 0;
    }

    ROTATE_RIGHT(arr, m);

    printf("\nModified array: \n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }    

}