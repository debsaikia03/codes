#include<stdio.h>
int main()
{
int r1, r2, r3, rs;
float is, vol, t, rp, ip;

printf("Enter the value of three resistors: ");
scanf("%d%d%d",&r1,&r2,&r3);

printf("Enter the required voltage: ");
scanf("%f",&vol);

rs= r1+r2+r3;
printf("The total value of resistance in series is= %d\n",rs);

t= (1.0/r1)+(1.0/r2)+(1.0/r3);
rp=1.0/t;

printf("The total value of resistance in parallel is= %f\n",rp);

is= vol/rs;
printf("The total current in series is= %f\n",is);

ip= vol/rp;
printf("The total current in parallel is= %f\n",ip);

return 0;
}


