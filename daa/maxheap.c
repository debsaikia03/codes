#include<stdio.h>

// Function to swap two integers
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to maintain the max-heap property for a subtree rooted at index i
// arr[]: The array representation of the heap
// i: The index of the current root node of the subtree
// n: The size of the heap (or the array)
void max_heapify(int arr[], int i, int n){
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // Left child index
    int r = 2 * i + 2; // Right child index

    // If the left child exists and is greater than the current largest element
    if(l < n && arr[l] > arr[largest]){
        largest = l;
    }

    // If the right child exists and is greater than the current largest element
    if(r < n && arr[r] > arr[largest]){
        largest = r;
    }

    // If the largest element is not the root
    if(largest != i){
        swap(&arr[i], &arr[largest]); // Swap the root with the largest element
        max_heapify(arr, largest, n); // Recursively heapify the affected subtree
    }
}

// Function to build a max-heap from an unordered array
// arr[]: The array to be converted into a max-heap
// n: The size of the array
void build_maxheap(int arr[], int n){
    // Start from the last non-leaf node and move upwards in the tree
    for(int i = n / 2 - 1; i >= 0; i--){
        max_heapify(arr, i, n); // Apply max-heapify to each node
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

    // Build a max-heap from the given array
    build_maxheap(arr, n);

    // Print the resulting max-heap
    printf("Max-Heap array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
