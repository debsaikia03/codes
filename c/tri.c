#include<stdio.h>
int main()
{
int a, b, c, t;

printf("Enter the three sides: ");
scanf("%d%d%d",&a,&b,&c);

t=((a+b)>c)&&((b+c)>a)&&((c+a)>b);

printf("Do the sides make a triangle? 1 for yes 0 for no: %d \n",t);

return 0;
}


