#include<stdio.h>

int main()
{
int m;
int s=0;

printf("Enter the value for m for mxm matrix: ");
scanf("%d",&m);

int a[m][m];

printf("Enter the elements of matrix: \n");

for(int i=0; i<m;i++)
{
 for(int j=0;j<m;j++)
 {
  scanf("%d",&a[i][j]);
 }
}

for(int i=0; i<m;i++)
{
 for(int j=0;j<m;j++)
 {
  if(i==j)
  {
  s+=a[i][j];
  }
 }
}


printf("The sum of diagonal elements is: %d",s);

return 0;
}







































  






