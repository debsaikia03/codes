#include <stdio.h>
#include <stdlib.h>

struct MinMax {
    int min;
    int max;
};

struct MinMax findMinMax(int arr[], int l, int r) {
    
    struct MinMax result;

    // Base case: only 1 element
    if (l == r) {
        result.min = arr[l];
        result.max = arr[l];
        return result;
    }

    // Base case: only 2 elements
    if (r == l + 1) {
        if (arr[l] < arr[r]) {
            result.min = arr[l];
            result.max = arr[r];
        } else {
            result.min = arr[r];
            result.max = arr[l];
        }
        return result;
    }

    int mid = (l + r) / 2;

    struct MinMax leftMinMax = findMinMax(arr, l, mid);
    struct MinMax rightMinMax = findMinMax(arr, mid + 1, r);

    result.min = (leftMinMax.min < rightMinMax.min) ? leftMinMax.min : rightMinMax.min;
    result.max = (leftMinMax.max > rightMinMax.max) ? leftMinMax.max : rightMinMax.max;

    return result;
}

int main() {
    // Declare file pointers
    FILE *filePointer, *filePointer1;

    // File names
    char ch1[256], ch2[256];  // Increase buffer size for file names

    // Get file names from the user
    printf("Enter source text file name: ");
    scanf("%s", ch1);
    printf("Enter destination text file name: ");
    scanf("%s", ch2);

    // Open the input file for reading
    filePointer = fopen(ch1, "r");
    if (filePointer == NULL) {
        perror("Error opening source file");
        return 1; // Indicate an error
    }
    printf("The file %s is now opened.\n", ch1);

    // Open the output file for writing
    filePointer1 = fopen(ch2, "w");
    if (filePointer1 == NULL) {
        perror("Error opening destination file");
        fclose(filePointer); // Close the input file
        return 1; // Indicate an error
    }

    // Dynamically allocate memory for the array
    int *arr = malloc(1000 * sizeof(int));
    if (arr == NULL) {
        perror("Memory allocation failed");
        fclose(filePointer);
        fclose(filePointer1);
        return 1; // Indicate an error
    }

    // Read integers from the file into the array
    int i = 0;
    while (fscanf(filePointer, "%d", &arr[i]) != EOF) {
        i++;
        if (i % 1000 == 0) {
            // Reallocate more memory if needed
            arr = realloc(arr, (i + 1000) * sizeof(int));
            if (arr == NULL) {
                perror("Memory reallocation failed");
                fclose(filePointer);
                fclose(filePointer1);
                return 1; // Indicate an error
            }
        }
    }

    int n = i;

    struct MinMax result = findMinMax(arr, 0, n - 1);

    fprintf(filePointer1, "Minimum number: %d\n", result.min);
    fprintf(filePointer1, "Maximum number: %d\n", result.max);

    // Free allocated memory
    free(arr);

    // Close the files
    fclose(filePointer);
    fclose(filePointer1);

    printf("Data written to %s successfully.\n", ch2);

    return 0;
}
