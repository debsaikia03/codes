#include<stdio.h>
int main()
{
int q, p, x, a;

a = 2;
q = (2*(a*a))-(5*a)+1;

printf("The value of p(2) is= %d",q);

x = 3;
p = (2*(x*x))-(5*x)+1;

printf("\nThe value of p(3) is= %d\n",p);

printf("The value of p(2)*p(3) is= %d\n", q*p);

return 0;
} 


