#include<stdio.h>
float convert(float m)
{

float k;

k=m/1000;

return(k);
}


int main()
{
float g,a;
printf("Enter the weight in gram: ");
scanf("%f",&g);

a=convert(g);

printf("%.2f\n",a);

return(0);
}
