#include<stdio.h>

int main()
{
int a[20], c=0, d=0, e=0;

for(int i=0;i<20;i++)
{
printf("Input a number: ");
scanf("%d",&a[i]);
}

for(int i=0;i<20;i++)
{
 if(a[i]<0)
 c++;
}

printf("The negative nos. are: %d\n",c);

for(int i=0;i<20;i++)
{
 if(a[i]%2 == 0)
 d++; 
 
 else
 e++;
}

printf("The even nos. are: %d\n",d);
printf("The odd nos. are: %d",e);

return 0;
}
 
 

