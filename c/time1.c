#include<stdio.h>
#include<math.h>

int main()
{
float t1, t2, t3, t4, t5, v, l, pi = 3.14, g = 9.8;

l=10.0;
v=l/g;
t1= 2.0 * pi * sqrt(v);

l=20.0;
v=l/g;
t2= 2.0 * pi * sqrt(v);

l=30.0;
v=l/g;
t3= 2.0 * pi * sqrt(v);

l=40.0;
v=l/g;
t4= 2.0 * pi * sqrt(v);

l=50.0;
v=l/g;
t5= 2.0 * pi * sqrt(v);

printf("Length(m)\tTime Period(sec)\n");
printf(" 10.0\t\t %.2f\n",t1);
printf(" 20.0\t\t %.2f\n",t2);
printf(" 30.0\t\t %.2f\n",t3);
printf(" 40.0\t\t %.2f\n",t4);
printf(" 50.0\t\t %.2f\n",t5);

return 0;
}	







