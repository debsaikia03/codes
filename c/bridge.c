#include<stdio.h>
int main()
{
int p, q, r, s;

printf("Enter the value of four resistors: ");
scanf("%d%d%d%d",&p,&q,&r,&s);

if(p*q==r*s)
{
  printf("The wheatstone bridge is balanced");
  
  return 0;
}
printf("The wheatstone bridge is not balanced\n");

s = r * q/p;

printf("Choose s= %d, to make the wheatstone bridge balanced",s);

return 0;
}
