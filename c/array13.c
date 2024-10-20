#include<stdio.h>

int main()
{
int a[6],m,n,t,b;

printf("Enter 5 elements: \n");

for(int i=0; i<5; i++)
{
scanf("%d",&a[i]);
}

printf("Enter an element: ");
scanf("%d",&n);

printf("Enter the position where the element should be added: ");
scanf("%d",&t);

b=t-1;

for(int i=5; i>b; i--)
{
 
 a[i]=a[i-1];
}

a[t-1]=n;

printf("The new array is: ");

for(int i=0; i<6; i++)
{
printf("%d ",a[i]);
}

return 0;
}








