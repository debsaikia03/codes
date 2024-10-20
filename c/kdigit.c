#include<stdio.h>

int sum(int n)
{
 if(n/10 == 0)
 return (n);
 
 else
 return(n%10 + sum(n/10));
}

int main()
{
int a, sod;

printf("Enter a number: ");
scanf("%d",&a);

sod= sum(a);

printf("Sum of digits= %d",sod);

return 0;
}









