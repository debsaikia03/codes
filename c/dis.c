#include<stdio.h>
int main()
{
int a, b, c, d;

printf("Enter the values of a, b, c in the quadratic equation: ax^2 + bx + c = 0 \n");
scanf("%d%d%d",&a,&b,&c);

d = (b*b)-4*a*c;

printf("The discriminant of the quadratic equation is=%d ",d);

return 0;
}
