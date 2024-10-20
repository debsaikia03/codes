#include<stdio.h>

int main()
{
int a[3][4];
int s;

for(int i=0;i<3;i++)
{
 for(int j=0;j<4;j++)
 {
  printf("Input a number: ");
  scanf("%d",&a[i][j]);
 }
}

printf("Enter a scalar number: ");
scanf("%d",&s);

for(int i=0;i<3;i++)
{
 for(int j=0;j<4;j++)
 {
  a[i][j]= s*a[i][j];
 }
}

for(int i=0;i<3;i++)
{
 for(int j=0;j<4;j++)
 {
  printf("%d ",a[i][j]);
 }
 printf("\n");
}

return 0;
}







