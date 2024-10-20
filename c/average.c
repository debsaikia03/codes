#include<stdio.h>
int main()
{
int a, b, c, d;

printf("Input the marks of three subjects:\n");
scanf("%d%d%d",&a,&b,&c);

d = (a+b+c)/3;

printf("The average of three subjects are: %d\n",d);

return 0;
}


