#include<stdio.h>
#include<math.h>
int main()
{
int a1, a2, a3, b1, b2, b3, d, p, q, r;

printf("Enter the first vector (ai,bj,ck): ");
scanf("%d%d%d",&a1,&a2,&a3);

printf("Enter the second vector (di,ej,fk): ");
scanf("%d%d%d",&b1,&b2,&b3);

d=(a1*b1)+(a2*b2)+(a3*b3);
p=(a2*b3)-(a3*b2);
q=(a3*b1)-(a1*b3);
r=(a1*b2)-(a2*b1);

printf("Dot product is: %d\n",d);
printf("Cross product is %di + %dj + %dk\n",p,q,r);

return 0;
}
