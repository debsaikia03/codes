#include<stdio.h>
#include<stdlib.h>
#include<string.h>
   
void merge(int arr[], int left, int mid, int right){
       
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    for(int i = 0; i < n1; i++){

        L[i] =  arr[left + i];
    }

    for(int i = 0; i < n2; i++){

        R[i] =  arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while(i < n1 && j < n2){

        if(L[i] <= R[j]){

            arr[k] = L[i];
            i++;
        }

        else{
            arr[k] = R[j];
            j++;
        }
         
        k++;
    }

    while(i < n1){

        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2){

        arr[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);

}

void mergeSort(int arr[], int left, int right){

    if(left < right){

        int mid = (left + right)/2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
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
    mergeSort(arr, 0, n-1);


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

    


 

