#include<stdio.h>

int main()
{
int a[5],b[5];

printf("Enter 5 elements for an array: \n");

for(int i=0; i<5; i++)
{
scanf("%d",&a[i]);
}

printf("The first array is: \n");


for(int i=0; i<5; i++)
{
printf("%d ",a[i]);
}

for(int i=0; i<5; i++)
{
 if(i==0)
  {
   *(b+i)=*(a+i);
   *(b+i+1)=*(a+i)+*(a+i+1);
  }
 else if(i>1)
  *(b+i)=*(a+i-1)+*(a+i);
}

printf("\nThe second array is: \n");

for(int i=0; i<5; i++)
{
printf("%d ",b[i]);
}


return 0;
}


