#include<stdio.h>

int prime(int n)
{
int flag=1;

for(int i=2;i<=n/2;i++)
{
 if(n%i==0)
   {
    flag=0;
    break;
   }
}
if(flag==1)
  printf("Prime number\n");
else
  printf("Not prime number\n");
}

int main()
{
  
int a;

printf("Enter a number: ");
scanf("%d",&a);

prime(a);

return 0;
}
