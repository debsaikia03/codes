#include<stdio.h>

int binSearch(int arr[], int lower, int upper, int x) {

    if (lower > upper) {
        printf("Element not found!\n");
        return -1; // Indicating not found
    }

    int mid = (lower + upper) / 2;

    if (arr[mid] == x) {
        printf("Element found at position %d.\n", mid + 1);
        return mid;
    }

    else if (arr[mid] < x) {
        return binSearch(arr, mid + 1, upper, x);
    } 

    else {
        return binSearch(arr, lower, mid - 1, x);
    }
}

int main() {

    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements in sorted manner: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;

    printf("Enter element to be searched: ");
    scanf("%d", &x);

    binSearch(arr, 0, n - 1, x);

    return 0;
}
