#include<stdio.h>
int main()
{
int a, b, c, d;

printf("Enter a three digit number: ");
scanf("%d",&a);

b=a/100;
c=(a/10)%10;
d=a%10;

printf("%d\n",b);
printf("%d\n",c);
printf("%d\n",d);

return 0;
}



