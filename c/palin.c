#include<stdio.h>

int main()
{

int n, r=0, o;

printf("Enter a number: ");
scanf("%d",&n);

o=n;

do
{ 
r = r*10+n%10;
n = n/10;
}while(n!=0);

printf("%d",r);

if(r==o)
printf(" is a palindrome");

else
printf(" is not a palindrome");

return 0;
}
  
