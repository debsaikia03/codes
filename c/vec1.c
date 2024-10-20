#include<stdio.h>
#include<math.h>

int main()
{
float a, b, c, u, v, w;
double m1, m2, dot, cross, *ang, ang1, ang2, rad;

printf("Enter three coordinates for vector a, (xi+yj+kz): ");
scanf("%f%f%f",&a,&b,&c);

printf("Enter three coordinates for vector b, (ui+vj+wz): ");
scanf("%f%f%f",&u,&v,&w);

printf("Enter the value of angle in degrees: ");
scanf("%lf",ang);

m1=sqrt(a*a+b*b+c*c);
m2=sqrt(u*u+v*v+w*w);

rad= *ang * 3.14/180;
ang1= cos(rad);
ang2= sin(rad);

dot= m1*m2*ang1;
cross= m1*m2*ang2;

printf("The dot product of the two vectors is= %.2f\n",dot);
printf("The cross product of the two vectors is= %.2f\n",cross);

return 0;
}










