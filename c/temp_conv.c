#include<stdio.h>
int main()
{
float c, f;

printf("Input temperature in celsius: ");
scanf("%f",&c);

f = (1.8*c)+32;

printf("The temperature in fahrenheit is: %f",f);

return 0;
}
