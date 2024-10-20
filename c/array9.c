#include<stdio.h>

int main()
{
int a[5][5], b[5][5], t=0, f=0;

for(int i=0; i<4; i++)
{
 for(int j=0;j<4;j++)
 {
  printf("Input  a number: ");
  scanf("%d",&a[i][j]);
 }
}

for(int i=0; i<4; i++)
{
 for(int j=i+1;j<4;j++)
 {
  b[i][j]=a[i][j];
 }
}

for(int i=0;i<4;++i)
{
 for(int j=0;j<4;j++)
 {
  t=a[i][j];
  a[i][j]=a[j][i];
  a[j][i]=t;
 }
}

for(int i=0;i<4;i++)
{
 for(int j=0;j<4;j++)
 {
  if(a[i][j]!=b[i][j])
  {
  f=1;
  break;
  }
 }
}

if(f==0)
printf("The matrix is symmetric");

else
printf("The matrix is not symmetric");

return 0;
}
