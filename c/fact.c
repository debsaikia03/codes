#include<stdio.h>
int main()
{
int s=1, n;

printf("Enter a number: ");
scanf("%d",&n);

if(n==0)
{
  printf("Factorial number is= 1\n");
}

else
{

for(int i=1;i<=n;i++)
{
  s*=i;
}

printf("Factorial number is= %d\n",s);
}

return 0;
}
