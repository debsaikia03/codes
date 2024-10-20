#include<stdio.h>
int main()
{
int n, r=0, s=0;

printf("Enter a three digit number: ");
scanf("%d",&n);

int m=n;

while(n>0)
{
r=n%10;
s=s+r*r*r;
n/=10;
}
printf("%d",s);

if(s==m)
printf("Armstrong");
else
printf("Not Armstrong");

return 0;
}

