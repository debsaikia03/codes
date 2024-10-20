#include<stdio.h>
#include<stdlib.h>

void merge(int arr[], int left, int mid, int right){
       
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    for(int i = 0; i < n1; i++){

        L[i] =  arr[left + i];
    }

    for(int i=0; i< n2; i++){

        R[i] =  arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while(i < n1 && j < n2){

        if(L[i] <= R[j]){

            arr[k] = L[i];
            i++;
        }

        else{
            arr[k] = R[j];
            j++;
        }
         
        k++;
    }

    while(i < n1){

        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2){

        arr[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);

}

void mergeSort(int arr[], int left, int right){

    if(left < right){

        int mid = (left + right)/2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArray(int arr[], int left, int right){

    if(left >= right){

        return;
    }

    swap(&arr[left], &arr[right]);

    reverseArray(arr, ++left, --right);
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

    mergeSort(arr, 0, n-1);

    printf("Sorted array: ");
    for(int i=0; i<n; i++){
       
       printf("%d ",arr[i]);
    }

    reverseArray(arr, 0, n-1);

    printf("\nReversed sorted array: ");
    for(int i=0; i<n; i++){
       
       printf("%d ",arr[i]);
    }
}