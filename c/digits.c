#include<stdio.h>
int main()
{
int n, r=0, s=0, m=0, p=0;

printf("Enter a number: ");
scanf("%d",&n);

while(n>0)
{
r=n%10;
s+=r;
if(r%2==0)
m+=r;
else
p+=r;
n/=10;
}
printf("Sum of all digits is %d",s);
printf("Sum of odd digits is %d",p);
printf("Sum of even digits is %d",m);

return 0;
}




