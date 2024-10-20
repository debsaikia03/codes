#include<stdio.h>

int main()
{

int s=0;
int m;

printf("Enter the value for m for mXm matrix: ");
scanf("%d",&m);

int a[m][m];

printf("Enter the elements of the matrix: \n");

for(int i=0; i<m;i++)
{
 for(int j=0;j<m;j++)
 {
  scanf("%d",&a[i][j]);
 }
}

for(int i=0; i<m; i++)
{
 for(int j=0;j<m;j++)
 {
  printf("%d ",a[i][j]);
 }
 printf("\n");
}



s = *(*(a+0)+0) + *(*(a+0)+(m-1)) + *(*(a+(m-1))+0) + *(*(a+(m-1))+(m-1));

printf("The sum of the diagonally cornered elements is: %d\n",s);

return 0;
}




