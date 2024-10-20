#include<stdio.h>
int main()
{

int a, b, c;

printf("Enter two integers \n");
scanf("%d%d",&a,&b);

c = a;
a = b;
b = c;

printf("The swap integers are=%d\n%d",a,b);

return 0;

}

 
