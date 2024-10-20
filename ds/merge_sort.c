#include <stdio.h>

int main()
{

    int i = 0, j = 0, k = 0;

    int m = 3;
    int n = 3;
    
    int a[3] = {1, 2, 3};

    int b[3] = {2, 5, 6};

    int c[m+n];

    while (i < m+n && j < n)
    {

        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }

        else
        {
            c[k] = b[j];
            j++;
        }

        k++;
    }

    if (i == m)
    {
        while (k < m + n)
        {
            c[k] = b[j];
            k++;
            j++;
        }
    }

    else if (j == n)
    {
        while (k < m + n)
        {
            c[k] = a[i];
            k++;
            i++;
        }
    }

    for(int i=0;i<m+n;i++){
        printf("%d ",c[i]);
    }
}
