#include <stdio.h>

void prefixArr(int arr[], int n)
{

    int prefixArr[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        prefixArr[i] = sum;
    }

    printf("\nPrefix array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", prefixArr[i]);
    }
}

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Given array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    prefixArr(arr, n);
}