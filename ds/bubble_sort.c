#include<stdio.h>
#include<stdlib.h>


void swap(int *m, int *n)
{
  int temp;
  temp = *m;
  *m = *n;
  *n = temp;
}

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements: ");
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nGiven array elements:\n");

    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    int flag;

    for(int i=0; i<n-1; i++)
    {
        flag = 0;

        for(int j=0; j<n-i-1; j++)
        {
          if(a[j]>a[j+1])
          {
            swap(&a[j],&a[j+1]);
            flag=1;
          }
        }

        if(flag == 0)
        {
            break;
        }
    }

    printf("\nSorted array elements:\n");

    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
   
}