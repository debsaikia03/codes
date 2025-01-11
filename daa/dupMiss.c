#include <stdio.h>

int main() {

    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int duplicateCount = 0;
    int isDuplicate[n];
    
    for (i = 0; i < n; i++) {
        isDuplicate[i] = 0;
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j] && isDuplicate[j] == 0) {
                duplicateCount++;
                isDuplicate[j] = 1; 
            }
        }
    }

    printf("\nTotal number of duplicate elements: %d\n", duplicateCount);

    int maxCount = 0;
    int mostRepeatingElement;
    
    printf("\nMost repeating element(s): ");
    for (i = 0; i < n; i++) {

        int count = 1; 

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }

    for(int i = 0; i < n; i++){

        int count = 1; 

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == maxCount) {
            printf("\n%d (repeats %d times)", arr[i], maxCount);
        }
    }
}
