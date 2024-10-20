#include<stdio.h>

int fibb(int n)
{
if(n == 1)
return 0;

else if(n == 2)
return 1;

else
return(fibb(n-1)+fibb(n-2));
}

int main()
{
int a, sum;

printf("Enter the nth range of fibbonaci series: ");
scanf("%d",&a);

sum=fibb(a);

printf("The nth term is: %d",sum);

return 0;
}

