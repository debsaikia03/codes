#include<stdio.h>

int main()
{
int m,n;

printf("Enter the no. of rows: ");
scanf("%d",&m);
printf("Enter the no. of columns: ");
scanf("%d",&n);

int a[m][n];

printf("Enter the elements of matrix: \n");

for(int i=0; i<m;i++)
{
 for(int j=0;j<n;j++)
 {
  scanf("%d",&a[i][j]);
 }
}

printf("The lower triangular matrix is: \n");

for(int i=0; i<m;i++)
{
 for(int j=0;j<n;j++)
 {
  if(i>=j)
  printf("%d ",a[i][j]);
 }
 printf("\n");
}
  
return 0;
}





