#include<stdio.h>
int main()
{
int a, b, c, d;
float e;
char f;

printf("Enter an integer \n");
scanf("%d",&a);

printf("Enter a float \n");
scanf("%f",&e);

printf("Enter a character \n");
scanf(" %c",&f);

b = sizeof(a);
c = sizeof(e);
d = sizeof(f);

printf("The size of int is=%d \n",b);
printf("The address of int is=%u \n",&a);

printf("The size of float is=%d \n",c);
printf("The address of float is=%u \n",&e);

printf("The size of char is=%d \n",d);
printf("The address of char is=%u \n",&f);

return 0;
}




