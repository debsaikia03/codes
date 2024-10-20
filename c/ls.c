#include<stdio.h>

int large()
{

int largest = 0;
int num;

printf("Enter 20 numbers: ");
for(int i=0;i<20;i++)
{
 scanf("%d",&num);

 if(num > largest)
 {
  largest = num;
 }
}

return largest;
}

int small()
{

int smallest = 0;
int num;

printf("\nEnter 20 numbers: ");
for(int i=0;i<20;i++)
{
 scanf("%d",&num);
 
 if(smallest == 0)
 {
  smallest = num;
 }
 else if(num < smallest)
 {
  smallest = num;
 }
}

return smallest;
}


int main()
{
int largest = large();
printf("The largest number between the 20 numbers is: %d"),largest;

int smallest = small();
printf("The smallest number between the 20 numbers is: %d\n"),smallest;

return 0;
}










