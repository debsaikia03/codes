#include<stdio.h>

int main()
{
int a[20], sum=0, c=0, i;
float avg=0;

for(i=0;i<20;i++)
{
printf("Enter the marks: ");
scanf("%d",&a[i]);
}

for(i=0;i<20;i++)
{
sum+=a[i];
if(a[i]>=90)

c++;

}

avg= sum/20.0;

printf("The no. of students who scored 90 & above is: %d",c);
printf("\n The avg. score is %.2f",avg);

return 0;
}

