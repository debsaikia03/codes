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

    int b[c][3];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j] != 0)
            {
                b[x][0]=i;
                b[x][1]=j;
                b[x][2]=a[i][j];
                x++;
            } 
           
        }
    }

    printf("\nSparse matrix in 3-tuple format:");
    printf("\nR C Element\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;

}
