#include<stdio.h>

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int i, int j){

    int p = arr[i];
    int k = i;

    for(int q = i+1; q <= j; q++){

        if(p >= arr[q]){

            k++;
            swap(&arr[k], &arr[q]);
        }
    }

    swap(&arr[k], &arr[i]);

    return k;
}

void quickSort(int arr[], int i, int j){

    if(i >= j){
        return;
    }

    int m = partition(arr, i, j);

    quickSort(arr, i, m-1);
    quickSort(arr, m+1, j);
}

int main(){

    int n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements: ");
    for(int i=0; i<n; i++){
       
       scanf("%d",&arr[i]);
    }

    quickSort(arr, 0, n-1);

    printf("Sorted array: ");
    for(int i=0; i<n; i++){
       
       printf("%d ",arr[i]);
    }

}