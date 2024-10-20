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

for(int i=0; i<m;i++)
{
 for(int j=0;j<n;j++)
 {
  if(j>=i)
  printf(" %d",a[i][j]);
  else
  printf("  ");
 }
 printf("\n");
}
  
return 0;
}





