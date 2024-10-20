#include<stdio.h>
int main()
{
int c;

for(int i=200;i>=100;i--)
{
 c=0;
 for(int j=1;j<=i;j++)
 {
  if(i%j==0)
  c++;
 }
 if(c==2)
 printf("%d\n",i); 
}

return 0;
}

