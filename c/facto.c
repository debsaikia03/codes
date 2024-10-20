#include<stdio.h>

int facto(int n)
{
  if(n==1)
  return 1;
  
  else
  return(n*facto(n-1));
}

int main()
{
int a, fact;

printf("\n Enter a number: ");
scanf("%d",&a);

printf("Factorial= %d",facto(a));

return 0;
}

