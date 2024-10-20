#include<stdio.h>
int main()
{
float a;

printf("Enter acceleration: ");
scanf("%fs",&a);

if(a==0)
 printf("The vehicle is at constant velocity");
else if(a>0)
 printf("The vehicle is accelerating");
else
 printf("The vehicle is deaccelerating");
return 0;
}
