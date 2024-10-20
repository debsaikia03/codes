#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    int id;
    char name[50];
    int age;
    int h;
    int w;
};

void swap(struct person *a, struct person *b)
{
    struct person temp = *a;
    *a = *b;
    *b = temp;
}

void minHeapify(struct person arr[], int n, int i)
{
    int smallest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l].age < arr[smallest].age)
        smallest = l;

    if (r < n && arr[r].age < arr[smallest].age)
        smallest = r;

    if (smallest != i)
    {
        swap(&arr[i], &arr[smallest]);
        minHeapify(arr, n, smallest);
    }
}

void maxHeapify(struct person arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l].w > arr[largest].w)
        largest = l;

    if (r < n && arr[r].w > arr[largest].w)
        largest = r;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void buildMinHeap(struct person arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        minHeapify(arr, n, i);
    }

    FILE *outputFile = fopen("output.txt", "a");
    fprintf(outputFile, "Min-heap created based on age:\n");

    for (int i = 0; i < n; i++)
    {
        fprintf(outputFile, "%d %s %d %d %d\n", arr[i].id, arr[i].name, arr[i].age, arr[i].h, arr[i].w);
    }
    fclose(outputFile);
    printf("Min-heap created and saved to output.txt\n\n");
}

void buildMaxHeap(struct person arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        maxHeapify(arr, n, i);
    }

    FILE *outputFile = fopen("output.txt", "a");
    fprintf(outputFile, "Max-heap created based on weight:\n");

    for (int i = 0; i < n; i++)
    {
        fprintf(outputFile, "%d %s %d %d %d\n", arr[i].id, arr[i].name, arr[i].age, arr[i].h, arr[i].w);
    }
    fclose(outputFile);
    printf("Max-heap created and saved to output.txt\n\n");
}

void insertMinHeap(struct person **arr, int *n, struct person newPerson)
{
    (*n)++;
    *arr = (struct person *)realloc(*arr, (*n) * sizeof(struct person));
    int i = (*n) - 1;
    (*arr)[i] = newPerson;

    while (i != 0 && (*arr)[(i - 1) / 2].age > (*arr)[i].age)
    {
        swap(&(*arr)[i], &(*arr)[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void deleteOldestPerson(struct person arr[], int *n)
{
    if (*n == 0)
        return;

    arr[0] = arr[*n - 1];
    (*n)--;
    minHeapify(arr, *n, 0);
}

void readData(struct person **arr, int *n)
{
    FILE *file = fopen("input.txt", "r");
    if (!file)
    {
        printf("File not found!\n");
        return;
    }

    fscanf(file, "%d", n);
    *arr = (struct person *)malloc(*n * sizeof(struct person));

    for (int i = 0; i < *n; i++)
    {
        fscanf(file, "%d %s %d %d %d", &(*arr)[i].id, (*arr)[i].name, &(*arr)[i].age, &(*arr)[i].h, &(*arr)[i].w);
    }

    fclose(file);

    FILE *outputFile = fopen("output.txt", "w");
    fprintf(outputFile, "Data loaded from file:\n");
    for (int i = 0; i < *n; i++)
    {
        fprintf(outputFile, "%d %s %d %d %d\n", (*arr)[i].id, (*arr)[i].name, (*arr)[i].age, (*arr)[i].h, (*arr)[i].w);
    }
    fclose(outputFile);
    printf("Data has been read and saved to output.txt\n\n");
}

int main()
{
    struct person *arr = NULL; // initialize a pointer to point to any allocated memory
    int n = 0;
    int s;

    do
    {
        printf("\nMAIN MENU\n");
        printf("1. Read Data\n");
        printf("2. Create a Min-heap based on the age\n");
        printf("3. Create a Max-heap based on the weight\n");
        printf("4. Display weight of the youngest person\n");
        printf("5. Insert a new person into the Min-heap\n");
        printf("6. Delete the oldest person\n");
        printf("7. Exit\n");

        printf("Enter option: ");
        scanf("%d", &s);

        switch (s)
        {
        case 1:
            readData(&arr, &n);
            break;
        case 2:
            buildMinHeap(arr, n);
            break;
        case 3:
            buildMaxHeap(arr, n);
            break;
        case 4:
            if (n > 0)
            {
                buildMinHeap(arr, n);
                printf("Weight of youngest person: %d pounds\n", arr[0].w);
            }
            else
            {
                printf("Heap is empty!\n");
            }
            break;
        case 5:
        {
            struct person newPerson;
            printf("Enter id, name, age, height, weight: ");
            scanf("%d %s %d %d %d", &newPerson.id, newPerson.name, &newPerson.age, &newPerson.h, &newPerson.w);
            insertMinHeap(&arr, &n, newPerson);
            printf("Person inserted into Min-heap.\n");
            break;
        }
        case 6:
            deleteOldestPerson(arr, &n);
            printf("Oldest person deleted from Min-heap.\n");
            break;
        case 7:
            printf("Exiting\n");
            break;
        default:
            printf("Invalid option!\n");
        }
    } while (s != 7);

    free(arr);
    return 0;
}
