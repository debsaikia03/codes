#include<stdio.h>

// Function to swap two integers
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to maintain the min-heap property for a subtree rooted at index i
// arr[]: The array representation of the heap
// i: The index of the current root node of the subtree
// n: The size of the heap (or the array)
void min_heapify(int arr[], int i, int n){
    int smallest = i; // Initialize smallest as root
    int l = 2 * i + 1; // Left child index
    int r = 2 * i + 2; // Right child index

    // If the left child exists and is greater than the current smallest element
    if(l < n && arr[l] < arr[smallest]){
        smallest = l;
    }

    // If the right child exists and is greater than the current smallest element
    if(r < n && arr[r] < arr[smallest]){
        smallest = r;
    }

    // If the smallest element is not the root
    if(smallest != i){
        swap(&arr[i], &arr[smallest]); // Swap the root with the smallest element
        min_heapify(arr, smallest, n); // Recursively min-heapify the affected subtree
    }
}

// Function to build a min-heap from an unordered array
// arr[]: The array to be converted into a min-heap
// n: The size of the array
void build_minheap(int arr[], int n){
    // Start from the last non-leaf node and move upwards in the tree
    for(int i = n / 2 - 1; i >= 0; i--){
        min_heapify(arr, i, n); // Apply min-heapify to each node=['/9]
    }
}

int main(){
    int n;

    // Ask the user for the number of elements in the array
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Ask the user to input the elements of the array
    printf("Enter elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Build a min-heap from the given array
    build_minheap(arr, n);

    // Print the resulting min-heap
    printf("Min-Heap array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
