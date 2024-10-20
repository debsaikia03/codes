#include<stdio.h>
int main()
{
int n = 4;

for(int i=0;i<=3;i++)
{
 for(int j=0;j<(n-1)-i;j++)
 {
   printf(" ");
 }
 for(int j=0;j<(2*i)+1;j++)
 {
   printf("*");
 }
 printf("\n");
}

return 0;

}
