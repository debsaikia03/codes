#include<stdio.h>

int main()
{
int a[5], b, pos;

for(int i=0;i<5;i++)
{
printf("Input a number: ");
scanf("%d",&a[i]);
}

printf("Enter a number: ");
scanf("%d",&b);

for(int i=0; i<5; i++)
{
if(b == a[i])
{
pos=i;
printf("The no. %d is present",b);
printf("\n The position of the no. is %d",pos+1);
break;
}
}
return 0;
}






