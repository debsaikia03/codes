#include <stdio.h>

void swap(int *m, int *n)
{
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int temp, n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nGiven array elements:\n");
    print(a, n);

    for(int i=0; i<n; i++)
    {
      temp= a[i];
      int j=i-1;
      
      while(j>=0 && a[j]>temp)
      {
        a[j+1] = a[j];
        j--;
      }
      
      a[j+1] = temp;
      
    }

    printf("\nSorted array elements:\n");
    print(a, n);
}