#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of lines: ");
    scanf("%d",&n);

    int i = 0, j = 0;

    for (i = 0; i < n; i++)
    {
     for (j=0; j<n; j++)
     {
        if(i==0 || i==n-1 || j==0 || j==n-1)
        {
            printf("* ");
        }
        
        else
        {
            printf("  ");
        }
     }
     printf("\n");
    }
}