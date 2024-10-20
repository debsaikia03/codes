#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    int id;
    char name[50];
    int age;
    int height;
    int weight;
};

void readData(struct person **arr, int *n) {
    FILE *file = fopen("data.txt", "r");
    if (!file) {
        printf("File not found!\n");
        return;
    }

    fscanf(file, "%d", n);
    *arr = (struct person *)malloc(*n * sizeof(struct person));

    for (int i = 0; i < *n; i++) {
        fscanf(file, "%d %s %d %d %d", &(*arr)[i].id, (*arr)[i].name, &(*arr)[i].age, &(*arr)[i].height, &(*arr)[i].weight);
    }

    fclose(file);

    FILE *outputFile = fopen("output.txt", "w");
    fprintf(outputFile, "Data loaded from file:\n");
    for (int i = 0; i < *n; i++) {
        fprintf(outputFile, "%d %s %d %d %d\n", (*arr)[i].id, (*arr)[i].name, (*arr)[i].age, (*arr)[i].height, (*arr)[i].weight);
    }
    fclose(outputFile);
    printf("Data has been read and saved to output.txt\n");
}

void createMinHeap(struct person *arr, int n) {
    // Implement your min-heap creation logic based on age
    // Example code can be added here

    FILE *outputFile = fopen("output.txt", "a");
    fprintf(outputFile, "Min-heap created based on age:\n");
    // Save min-heap to file (example)
    for (int i = 0; i < n; i++) {
        fprintf(outputFile, "%d %s %d %d %d\n", arr[i].id, arr[i].name, arr[i].age, arr[i].height, arr[i].weight);
    }
    fclose(outputFile);
    printf("Min-heap created and saved to output.txt\n");
}

void createMaxHeap(struct person *arr, int n) {
    // Implement your max-heap creation logic based on weight
    // Example code can be added here

    FILE *outputFile = fopen("output.txt", "a");
    fprintf(outputFile, "Max-heap created based on weight:\n");
    // Save max-heap to file (example)
    for (int i = 0; i < n; i++) {
        fprintf(outputFile, "%d %s %d %d %d\n", arr[i].id, arr[i].name, arr[i].age, arr[i].height, arr[i].weight);
    }
    fclose(outputFile);
    printf("Max-heap created and saved to output.txt\n");
}

void displayWeightOfYoungest(struct person *arr, int n) {
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].age < arr[minIndex].age) {
            minIndex = i;
        }
    }

    FILE *outputFile = fopen("output.txt", "a");
    fprintf(outputFile, "Weight of the youngest person (%s): %d pounds\n", arr[minIndex].name, arr[minIndex].weight);
    fclose(outputFile);
    printf("Weight of the youngest person saved to output.txt\n");
}

void insertNewPerson(struct person **arr, int *n, struct person newPerson) {
    *arr = (struct person *)realloc(*arr, (*n + 1) * sizeof(struct person));
    (*arr)[*n] = newPerson;
    (*n)++;

    FILE *outputFile = fopen("output.txt", "a");
    fprintf(outputFile, "New person inserted:\n");
    fprintf(outputFile, "%d %s %d %d %d\n", newPerson.id, newPerson.name, newPerson.age, newPerson.height, newPerson.weight);
    fclose(outputFile);
    printf("New person inserted and saved to output.txt\n");
}

void deleteOldestPerson(struct person **arr, int *n) {
    if (*n == 0) {
        printf("Heap is empty.\n");
        return;
    }

    int maxIndex = 0;
    for (int i = 1; i < *n; i++) {
        if ((*arr)[i].age > (*arr)[maxIndex].age) {
            maxIndex = i;
        }
    }

    struct person oldest = (*arr)[maxIndex];
    for (int i = maxIndex; i < *n - 1; i++) {
        (*arr)[i] = (*arr)[i + 1];
    }
    (*arr) = (struct person *)realloc(*arr, (*n - 1) * sizeof(struct person));
    (*n)--;

    FILE *outputFile = fopen("output.txt", "a");
    fprintf(outputFile, "Oldest person deleted:\n");
    fprintf(outputFile, "%d %s %d %d %d\n", oldest.id, oldest.name, oldest.age, oldest.height, oldest.weight);
    fclose(outputFile);
    printf("Oldest person deleted and saved to output.txt\n");
}

int main() {
    struct person *arr = NULL;
    int n = 0;
    int choice;
    struct person newPerson;

    do {
        printf("MAIN MENU (HEAP)\n");
        printf("1. Read Data\n");
        printf("2. Create a Min-heap based on the age\n");
        printf("3. Create a Max-heap based on the weight\n");
        printf("4. Display weight of the youngest person\n");
        printf("5. Insert a new person into the Min-heap\n");
        printf("6. Delete the oldest person\n");
        printf("7. Exit\n");
        printf("Enter option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                readData(&arr, &n);
                break;
            case 2:
                createMinHeap(arr, n);
                break;
            case 3:
                createMaxHeap(arr, n);
                break;
            case 4:
                displayWeightOfYoungest(arr, n);
                break;
            case 5:
                printf("Enter new person data (id name age height weight): ");
                scanf("%d %s %d %d %d", &newPerson.id, newPerson.name, &newPerson.age, &newPerson.height, &newPerson.weight);
                insertNewPerson(&arr, &n, newPerson);
                break;
            case 6:
                deleteOldestPerson(&arr, &n);
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
    } while (choice != 7);

    free(arr); // Free the dynamically allocated array

    return 0;
}
