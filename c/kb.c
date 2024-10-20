#include<stdio.h>
int main()
{
int sum=0, n, count=0, i;

for(i=0;i<10;i++)
{
printf("Enter the next no.: \n");
scanf("%d",&n);

if(n%2==1)
{
count++;
sum+=n;
}
}
printf("There are %d odd numbers & the sum is %d\n",count,sum);

return 0;
}
