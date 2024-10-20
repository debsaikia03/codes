#include<stdio.h>

int binary(int n)
{

for(int i=2; i<=n;)
{
  if(n%2==0)
  {
   printf("0");
  }
  else
  {
   printf("1");
  }
 n=n/2;
}

}

int main()
{
int a;

printf("Enter a number: ");
scanf("%d",&a);

binary(a);

return 0;
}

