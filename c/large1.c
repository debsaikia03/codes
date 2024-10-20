#include<stdio.h>

int max(int m, int n)
{
  if(m > n){
  printf("\nThe largest between two numbers is: %d",m);
  }
  
  else{
  printf("\nThe largest between two numbers is: %d",n);
  }
} 

int main()
{
int a,b;

printf("Enter a no.: ");
scanf("%d",&a);

printf("\nEnter another no.: ");
scanf("%d",&b);

max(a,b);

return 0;
}








