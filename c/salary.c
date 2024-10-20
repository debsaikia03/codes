#include<stdio.h>
int main()
{
int bs; 
float gs;

printf("Enter the basic salary: ");
scanf("%d",&bs);

if(bs<1500)
{
  gs=bs+bs*(float)(10.0/100)+bs*(float)(40.0/100);
}
else
{
  gs=bs+500+bs*(float)(50.0/100);
}
  
printf("The gross salary is= %.2f",gs);

return 0;
}

  


