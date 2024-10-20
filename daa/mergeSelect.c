#include <stdio.h>
#include <stdlib.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function used in QuickSelect
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[high]);
    return i;
}

// QuickSelect function to find the K-th smallest element
int quickSelect(int arr[], int low, int high, int k) {
    if (low <= high) {
        int pi = partition(arr, low, high);
        if (pi == k - 1) {
            return arr[pi];
        } else if (pi > k - 1) {
            return quickSelect(arr, low, pi - 1, k);
        } else {
            return quickSelect(arr, pi + 1, high, k);
        }
    }
    return -1;
}

// Function to find the K-th smallest and largest elements
void findKthSmallestAndLargest(int arr[], int n, int k) {
    int kth_smallest = quickSelect(arr, 0, n - 1, k);
    int kth_largest = quickSelect(arr, 0, n - 1, n - k + 1);

    printf("The %d-th smallest element is %d\n", k, kth_smallest);
    printf("The %d-th largest element is %d\n", k, kth_largest);
}

int main() {
    int arr[] = {12, 3, 5, 7, 19, 26};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    findKthSmallestAndLargest(arr, n, k);

    return 0;
}
