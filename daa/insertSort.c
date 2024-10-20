#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {

        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {

            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
}

int main()
{

    int n;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);
}
