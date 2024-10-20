#include<stdio.h>
#include<math.h>

int main()
{
float t, v, l, pi = 3.14, g = 9.8;

l=10.0;
v=l/g;
t= 2.0 * pi * sqrt(v);

printf("At length=10m, the time period of simple pendulum is found to be= %.2f\n",t);
	
l=20.0;
v=l/g;
t= 2.0 * pi * sqrt(v);

printf("At length=20m, the time period of simple pendulum is found to be= %.2f\n",t);

l=30.0;
v=l/g;
t= 2.0 * pi * sqrt(v);

printf("At length=30m, the time period of simple pendulum is found to be= %.2f\n",t);

l=40.0;
v=l/g;
t= 2.0 * pi * sqrt(v);

printf("At length=40m, the time period of simple pendulum is found to be= %.2f\n",t);

l=50.0;
v=l/g;
t= 2.0 * pi * sqrt(v);

printf("At length=50m, the time period of simple pendulum is found to be= %.2f\n",t);

return 0;
}	







