#include<stdio.h>

int main()
{

    int m,n,c=0,x=0;

    printf("Enter size of row and column for sparse matrix: ");
    scanf("%d%d",&m,&n);

    int a[m][n];

    printf("Enter elements for the matrix: ");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
        scanf("%d",&a[i][j]);
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j] != 0)
            {
                c++;
            }
        }
    }

    int b[3][c];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j] != 0)
            {
                b[0][x]=i;
                b[1][x]=j;
                b[2][x]=a[i][j];
                x++;
            } 
           
        }
    }

    printf("\nSparse matrix in 3-tuple format: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;

}
