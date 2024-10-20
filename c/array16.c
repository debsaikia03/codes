#include<stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], prefixArr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Given array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n; i++) {
        
        int sum = 0;

        for(int j = 0; j <= i; j++){
            sum += arr[j];
        }

        prefixArr[i] = sum;
    }

    printf("\nPrefix array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", prefixArr[i]);
    }

    
}