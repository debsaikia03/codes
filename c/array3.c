#include<stdio.h>

int main()
{
int a[5], min, max;

for(int i=0;i<5;i++)
{
printf("Input a number: ");
scanf("%d",&a[i]);
}

min=a[0];
max=a[0];

for(int i=1;i<5;i++)
{
if(min>a[i])
min=a[i];
}

for(int i=1;i<5;i++)
{
if(max<a[i])
max=a[i];
}

printf("The two elements from an array whose different is largest is %d & %d & the difference is %d",min,max,max-min);


return 0;
}




