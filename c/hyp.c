#include<stdio.h>
int main()
{
int a, b, c, t;

printf("Enter the three sides of the triangle: ");
scanf("%d%d%d",&a,&b,&c);

t=(((a*a+b*b)==(c*c))||((b*b+c*c)==(a*a))||((c*c+a*a)==(b*b)));

printf("Displays 0 if it is not a right angled triangle, else displays 1 if it is is right angled triangle: %d\n",t);

return 0;
}

