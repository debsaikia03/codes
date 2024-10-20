#include<stdio.h>

int gcd(int n1, int n2)
{
int t;

if(n1%n2==0)
return(n2);

else
return(t=gcd(n2,n1%n2));
}

int main()
{
int a,b;

printf("Enter two numbers: ");
scanf("%d%d",&a,&b);

printf("\nThe gcd of two numbers is: %d",gcd(a,b));

return 0;
}
