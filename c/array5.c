#include<stdio.h>

int main()
{
int a[5][5], t=0;

for(int i=0; i<4; i++)
{
 for(int j=0;j<4;j++)
 {
  scanf("%d",&a[i][j]);
 }
}


for(int i=0;i<4;++i)
{
 for(int j=i+1;j<5;j++)
 {
  t=a[i][j];
  a[i][j]=a[j][i];;
  a[j][i]=t;
 }
}

for(int i=0;i<4;++i)
{
 for(int j=0;j<4;j++)
 {
  printf("%d ",a[i][j]);
 }
 printf("\n");
}



return 0;

}


