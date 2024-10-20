#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,n,i,j,s=0;
    int(*a)[5];
    
    printf("Enter no. of elements: ");
    scanf("%d",&n);

    a=(int(*)[5])malloc(n*5*2);
  
    m=n*5;

    printf("Enter %d elements: \n",m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            s+=a[i][j];
        }
    }
    
    printf("The sum of elememts: %d",s);
    
    return 0;
}