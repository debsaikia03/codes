#include<stdio.h>
#include<string.h>

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int i, int j){

    int p = arr[i];
    int k = i;

    for(int q = i+1; q <= j; q++){

        if(p >= arr[q]){

            k++;
            swap(&arr[k], &arr[q]);
        }
    }

    swap(&arr[k], &arr[i]);

    return k;
}

void quickSort(int arr[], int i, int j){

    if(i >= j){
        return;
    }

    int m = partition(arr, i, j);

    quickSort(arr, i, m-1);
    quickSort(arr, m+1, j);
}

int main(){

    // Declare file pointers
    FILE *filePointer, *filePointer1;

    // File names
    char ch1[20], ch2[20];

    int m;

    printf("Enter 1 to read the Ascending data.\n");
    printf("Enter 2 to read the Descending data.\n");
    printf("Enter 3 to read the Random data.\n");
    printf("Enter 4 to exit.\n");
    printf("Enter option: ");
    scanf("%d",&m);

    switch(m){
        case 1:
            strcpy(ch1, "inAsce.txt"); 
            strcpy(ch2, "outAsce.txt");
            break;
        
        case 2:
            strcpy(ch1, "inDesc.txt"); 
            strcpy(ch2, "outDesc.txt");
            break;

        case 3:
            strcpy(ch1, "inRand.txt"); 
            strcpy(ch2, "outRand.txt");
            break;

        default:
            printf("Error!");
            return 1;
            
    }

    // Open the input file for reading
    filePointer = fopen(ch1, "r");
    if (filePointer == NULL) {
        printf("Error opening %s\n", ch1);
        return 1; // Indicate an error
    }
    printf("The file %s is now opened.\n", ch1);

    // Open the output file for writing
    filePointer1 = fopen(ch2, "w");
    if (filePointer1 == NULL) {
        printf("Error opening %s\n", ch2);
        fclose(filePointer); // Close the input file
        return 1; // Indicate an error
    }

    // Array to hold file contents
    int arr[1000];
    int i = 0;

    // Read integers from the file into the array
    while (fscanf(filePointer, "%d", &arr[i]) != EOF) {
        i++;
    }
    int n = i; // Total number of elements read

    // Perform merge sort on the array
    quickSort(arr, 0, n-1);


    // Write the sorted (and possibly reversed) array to the output file
    for (i = 0; i < n; i++) {
        fprintf(filePointer1, "%d ", arr[i]);
    }

    // Close the files
    fclose(filePointer);
    fclose(filePointer1);

    printf("Data sorted and written to %s successfully.\n", ch2);

    return 0;
}