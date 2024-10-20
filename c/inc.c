#include<stdio.h>
int main()
{
int p, a;

printf("Enter an integer: ");
scanf("%d",&a);

p = ++a + a++ + --a;

printf("\nThe answer is: %d\n",p);

return 0;
}


