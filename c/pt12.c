#include<stdio.h>

void swap(int *x, int *y)
{
 *x = *x + *y;
 *y = *x - *y;
 *x = *x - *y;
}

int main()
{
int a[5];

printf("Enter 5 elements for an array: \n");

for(int i=0; i<5; i++)
{
scanf("%d",&a[i]);
}

printf("Before swapping: \n");

for(int i=0; i<5; i++)
{
printf("%d ",a[i]);
}

swap(&a[1],&a[4]);
swap(&a[2],&a[3]);

printf("\nAfter swapping: \n");

for(int i=0; i<5; i++)
{
printf("%d ",a[i]);
}

return 0;
}
