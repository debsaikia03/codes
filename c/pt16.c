#include<stdio.h>

int main()
{
int a[5],t;

printf("Enter 5 elements for an array: \n");

for(int i=0; i<5; i++)
{
scanf("%d",&a[i]);
}

for(int i=0; i<3; i++)
{
t=0;
t=a[i];
a[i]=a[4-i];
a[4-i]=t;
}

printf("The reverse of the array is: \n");

for(int i=0; i<5; i++)
{
printf("%d ",a[i]);
}

return 0;
}

