#include<stdio.h>
int main()
{
float v, d, s, g;
int u, t;

u=0;
g=9.8;

t =0;
v=u+(g*t*t);
s=u*t+(0.5*g*t*t);

printf("At time t=0, the velocity and distance covered by the stone is= %f %f\n",v,s);

t =1;
v=u+(g*t*t);
s=u*t+(0.5*g*t*t);

printf("At time t=1, the velocity and distance covered by the stone is= %f %f\n",v,s);

t =2;
v=u+(g*t*t);
s=u*t+(0.5*g*t*t);

printf("At time t=2, the velocity and distance covered by the stone is= %f %f\n",v,s);

t =3;
v=u+(g*t*t);
s=u*t+(0.5*g*t*t);

printf("At time t=3, the velocity and distance covered by the stone is= %f %f\n",v,s);

t =4;
v=u+(g*t*t);
s=u*t+(0.5*g*t*t);

printf("At time t=4, the velocity and distance covered by the stone is= %f %f\n",v,s);

t =5;
v=u+(g*t*t);
s=u*t+(0.5*g*t*t);

printf("At time t=5, the velocity and distance covered by the stone is= %f %f\n",v,s);

return 0;
}


