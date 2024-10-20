#include<stdio.h>

int main()
{
int a[5];
int *ptr;

for(int i=0;i<5;i++)
{
printf("Input a number: ");
scanf("%d",&a[i]);
}

ptr = a;

for(int i=0;i<5;i++)
{
int t=0;

t=*(ptr+i);

if(t%2==0)
{
printf("%d\n",t);
}
}

return 0;
}


