#include<stdio.h>

int max(int n)
{
  int nxt, largest=0, count=0;
  
for(int i=0; i<n; i++)
{
  printf("\nEnter the next number: ");
  scanf("%d",&nxt);
  
  if(nxt > largest)
  {
  largest= nxt;
  count++;
  }
} 
printf("\nThe no. of leaders are: %d",count-1);

return largest;

}

int main()
{
int a;

printf("Enter the no. of numbers present: ");
scanf("%d",&a);

printf("\nThe leader among the numbers is: %d",max(a));

return 0;
}








