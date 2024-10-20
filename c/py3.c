#include<stdio.h>
int main()
{
int n=5;
for(int i=0; i<n; i++)
{
  for(int j=0; j<(2*i)+1;j++)
  {
    printf("$");
  }
  for(int j=0;j<n+3 -2*i ;j++)
  {
   printf(" ");
  }
  for(int j=0; j<(2*i)+1;j++)
  {
    printf("$");
  }
  for(int j=0;j<n+3 -2*i;j++)
  {
   printf(" ");
  }
  for(int j=0; j<(2*i)+1;j++)
  {
    printf("$");
  }
 
  printf("\n");
}

n=4;

for(int i=0; i<n; i++)
{
  for(int j=0; j<(2*n-1)-2*i;j++)
  {
    printf("$");
  }
  for(int j=0; j<n-2+2*i;j++)
  {
    printf(" ");
  }
  for(int j=0; j<(2*n-1)-2*i;j++)
  {
    printf("$");
  }
  for(int j=0; j<n-2+2*i;j++)
  {
    printf(" ");
  }
  for(int j=0; j<(2*n-1)-2*i;j++)
  {
    printf("$");
  }
  
  printf("\n");
}
    
return 0;


}
