#include<stdio.h>
int main()
{
int a, m, k;

printf("Input distance in metre ");
scanf("%d",&a);

k = a/1000;
m = a%1000;

printf("The corresponding km conversion is=%d\n",k);
printf("The corresponding m conversion is=%d\n",m);

return 0;
}









