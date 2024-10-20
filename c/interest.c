#include<stdio.h>
int main()
{

float p, r, t, s;

printf("Enter principal amount, rate, time \n");
scanf("%f%f%f",&p,&r,&t);

s = (p*r*t)/100;

printf("The simple interest is=%f ",s);

return 0;

}


