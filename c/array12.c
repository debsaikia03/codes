#include<stdio.h>

int main()
{
int a[5],b[5],c[10],j=0;

printf("Enter 5 elements for first array: \n");

for(int i=0; i<5; i++)
{
 scanf("%d",&a[i]);
}

printf("Enter 5 elements for second array: \n");

for(int i=0; i<5; i++)
{
 scanf("%d",&b[i]);
}

for(int i=0; i<5; i++)
{
 c[i]=a[i];
}

for(int i=5; i<10; i++)
{
  c[i]=b[j];
  j++;
}

printf("The merged array is: \n");
for(int i=0; i<10; i++)
{
 printf("%d ",c[i]);
}

return 0;
}

