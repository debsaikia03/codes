#include<stdio.h>
int main()
{
int a, b, c, s, t;


printf("Enter the three sides: ");
scanf("%d%d%d",&a,&b,&c);

t=(((a+b)>c)+((b+c)>a)+((c+a)>b))/3;
printf("%d",t);

s=t*(a+b+c);

printf("If the sides doesn't make a triangle, it displays 0, else it shows the sum of the sides of triangle: %d \n",s);

return 0;
}










