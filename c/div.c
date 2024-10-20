#include<stdio.h>
int main()
{
int sum=0, n, count=0, i;

for(i=0;i<=100;i++)
{

if(i%3==0)
{
sum+=i;
}
}

printf("The sum of all numbers from 0 to 100 which are divisible by 3 is: %d\n",sum);

return 0;
}
