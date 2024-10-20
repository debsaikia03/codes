#include<stdio.h>
#include<math.h>

int main()
{
float t, v, l, pi = 3.14, g = 9.8;

for(int i=10;i<=100;i+=10)
{
v=(float)i/g;
t= 2.0 * pi * sqrt(v);

printf("The time period of a simple pendulum for length %d is: %.2f\n",i,t);
}

return 0;
}

