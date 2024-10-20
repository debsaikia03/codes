#include<stdio.h>

int sum(int *a, int *b, int t)
{
int sum1=0, sum2=0;

for(int i=0;i<t;i++)
{
sum1 += a[i];
sum2 += b[i];
}

if(sum1 == sum2)
{
return 0;
}

else if(sum1>sum2)
{
return 1;
}

else
{
return 2;
}

}
 
int main()
{
int x[10], y[10], g, n;

printf("Enter elements for first array: \n");

for(int i=0;i<10;i++)
{
printf("Input a number: ");
scanf("%d",&x[i]);
}

printf("Enter elements for second array: \n");

for(int i=0;i<10;i++)
{
printf("Input a number: ");
scanf("%d",&y[i]);
}

printf("Enter the no. of integers: ");
scanf("%d",&n);

g= sum(&x,&y,n);

if(g==0)
printf("Both sums are equal");

else if(g==1)
printf("array1 is greater than array2");

else
printf("array2 is greater tha array1");

return 0;
}
