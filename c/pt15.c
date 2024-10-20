#include<stdio.h>

int main()
{
int i, j, a[4][5], b[4]={0,0,0,0};
int *z;
int (*y)[4][5];

z=&b;
y=&a; 

printf("Enter the elements of an 4x5 matrix:\n");

for(i=0;i<4;i++)
{
 for(j=0;j<5;j++)
 {
  scanf("%d",&y);
}}

printf("The array is: \n");

for(i=0;i<4;i++)
{
 for(j=0;j<5;j++)
 {
  printf("%d",a[i][j]);
 }
 printf("\n");
}

for(i=0;i<4;i++)
{
 for(j=0;j<5;j++)
 {
  *(z+i)=*(z+i)+ *(*(y+i)+j);
 }
}
  
printf("The sum of elements of every row:\n ");

for(i=0;i<4;i++)
{
  printf("%d \n",b[i]);
}


return 0;
}

