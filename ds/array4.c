#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, temp;

    printf("Enter no. of elements: ");
    scanf("%d", &m);

    int a[m];

    printf("Enter array elements:\n");

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = i+1; j < m; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Array in ascending order:\n");

    for (int i = 0; i < m; i++)
    {
        printf("%d ", a[i]);
    }
}