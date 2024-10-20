#include<stdio.h>

int count(int n)
{
int c=1, s;
if(n/10==0)
{
 return(c);
}

else
{
 s =c +count(n/10);
 return(s);
}
}

int main()
{
int a;

printf("Enter a number: ");
scanf("%d",&a);

printf("\nThe no. of digits are: %d",count(a));

return 0;
}





