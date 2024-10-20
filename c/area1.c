#include<stdio.h>
int main()
{

float r, a, b, c, d, e, f;
float pi=3.14;

printf("Input radius of the circle \n");
scanf("%f",&r);

printf("Input length and breadth of the rectangle \n");
scanf("%f%f",&a,&b);

printf("Input length of the square \n");
scanf("%f",&c);

d = pi*(r*r);
e = a*b;
f = c*c;

printf("The area of the circle is=%f \n",d);
printf("The area of the rectangle is%f \n",e);
printf("The area of the square is%f \n",f);

return 0;

}
