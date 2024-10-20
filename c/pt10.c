#include<stdio.h>

int main()
{
int a[6], b[6]={0,0,0,0,0,0};

printf("Enter 6 elements: \n");

for(int i =0; i<6; i++)
{
scanf("%d",&a[i]);
}

for(int i=0; i<=5; i=i+2)
{
a[i]=a[i]+a[i+1];
b[i]=a[i]-a[i+1];
b[i+1]=a[i]-b[i];
}

for(int i =0; i<6; i++)
{
printf("%d ",b[i]);
}

return 0;
}
