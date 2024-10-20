#include<stdio.h>

int main()
{
int a[4][4], b[4][4], c[4][4];

printf("Input elements of a 4x4 matrix");

for(int i=0;i<4;i++)
{
 for(int j=0;j<4;j++)
 {
  scanf("%d",&a[i][j]);
 }
}

printf("Input elements of another 4x4 matrix");

for(int i=0;i<4;i++)
{
 for(int j=0;j<4;j++)
 {
  scanf("%d",&b[i][j]);
 }
}

for(int i=0;i<4;i++)
{
 for(int j=0;j<4;j++)
 {
  c[i][j] = a[i][j]+b[i][j];
 }
}

printf("The addition of two matrices is:\n");

for(int i=0;i<3;i++)
{
 for(int j=0;j<4;j++)
 {
  printf("%d ",c[i][j]);
 }
 printf("\n");
}

return 0;
}





