#include<stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Insufficient Array!\n");
    }

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Given array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int max1, max2, min1, min2;

    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
        min1 = arr[1];
        min2 = arr[0];
    } else {
        max1 = arr[1];
        max2 = arr[0];
        min1 = arr[0];
        min2 = arr[1];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } 
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }

        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } 
        else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }

    printf("\nThe second largest number in the array is: %d", max2);
    printf("\nThe second smallest number in the array is: %d", min2);

}
