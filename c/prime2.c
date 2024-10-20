#include<stdio.h>

int prime()
{

for(int i=100;i>=10;i--)
{
 int c=0;
 for(int j=1;j<=i;j++)
 {
  if(i%j==0)
  c++;
 }
 if(c==2)
 printf("%d\n",i); 
}
}

int main()
{
prime();

return 0;
}
