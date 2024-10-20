#include<stdio.h>
int main()
{
int num, flag=0;

printf("Enter a number: ");
scanf("%d",&num);

for(int i=2;i<=num/2;i++)
{
 if(num%i==0)
   {
    flag=1;
    break;
   }
}
if(flag==0)
  printf("Prime number\n");
else
  printf("Not prime number\n");

return 0;
}
