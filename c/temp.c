#include<stdio.h>
float convert(float m)
{

float k;

k=1.8*m+32;

return(k);
}


int main()
{
float g,a;
printf("Enter temperature in celsius: ");
scanf("%f",&g);

a=convert(g);

printf("%.3f\n",a);

return(0);
}
