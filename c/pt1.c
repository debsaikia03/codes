#include<stdio.h>

int main()
{
int *ptr, sum=0, a[5];

for(int i=0;i<5;i++)
{
printf("Input a number: ");
scanf("%d",&a[i]);
}

ptr= a;

for(int i=0;i<5;i++)
{
sum+=*(ptr+i);
}

printf("Sum= %d",sum);

return 0;
}


