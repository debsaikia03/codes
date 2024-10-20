#include<stdio.h>
int main()
{
int a, b, c, d, e;
float f;

printf("Enter two integrs: ");
scanf("%d%d",&a,&b);

c = a + b;
d = a - b;
e = a * b;
f =(float)a/b;

printf("The sum is=%d\n",c);
printf("The substraction is=%d\n",d);
printf("The multiplication is=%d\n",e);
printf("The division is=%f\n",f);

return 0;
}
