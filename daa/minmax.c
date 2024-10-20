#include<stdio.h>

int findMax(int arr[], int l, int u){

    //Base case: only 1 element
    if(l == u){

        return arr[l];
    }

    //Base element: only 2 elements
    if(u == l + 1){
        
        return (arr[l] < arr[u]? arr[u] : arr[l]);
    }

    int mid = (l + u)/2;

    int leftMax = findMax(arr, l, mid);
    int rightMax = findMax(arr, mid + 1, u);

    return (leftMax > rightMax ? leftMax : rightMax);
}

int findMin(int arr[], int l, int u){

    //Base case: only 1 element
    if(l == u){

        return arr[l];
    }

    //Base element: only 2 elements
    if(u == l + 1){
        
        return (arr[l] > arr[u]? arr[u] : arr[l]);
    }

    int mid = (l + u)/2;

    int leftMax = findMin(arr, l, mid);
    int rightMax = findMin(arr, mid + 1, u);

    return (leftMax < rightMax ? leftMax : rightMax);
}

int main(){

    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, 0, n-1);
    int min = findMin(arr, 0, n-1);

    printf("Max element: %d\n",max);
    printf("Min element: %d\n",min);

}