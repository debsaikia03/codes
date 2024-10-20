#include<stdio.h>

int fact(int n)
{
  if(n==1)
  return 1;
  
  else
  return(n*fact(n-1));
}

int main()
{
int a, facto;

printf("\n Enter a number: ");
scanf("%d",&a);

facto=fact(a);

printf("Factorial= %d",facto);

return 0;
}

