#include<stdio.h>

int power(int n1,int n2)
{

if(n1==1 || n2==0)

return 1;

else
return(n1*power(n1,n2-1));
}

int main()
{
int a, b;

printf("Enter a number with its power: ");
scanf("%d%d",&a,&b);

printf("The value is: %d",power(a,b));

return 0;
}

