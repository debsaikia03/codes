#include<stdio.h>
int main()
{
int n=5;

for(int i=0;i<=4;i++)
{
 for(int j=0;j<(n-1)-i;j++)
 {
   printf(" ");
 }
 for(int j=0;j<(2*i)+1;j++)
 {
   printf("%d",i+1);
 }
 for(int j=0;j<(n-1)-i;j++)
 {
   printf(" ");
 }
 for(int j=0;j<(n-1)-i;j++)
 { 
   printf(" ");
 }
 for(int j=0;j<(2*i)+1;j++)
 {
   printf("%d",i+1);
 }
 
 printf("\n");
}

n=4;
for(int i=0;i<4;i++)
{
 for(int j=0;j<n-3+i;j++)
 {
   printf(" ");
 }
 for(int j=0;j<(2*n-1)-2*i;j++)
 {
   printf("%d",n-i);
 }
 for(int j=0;j<n-2+2*i;j++)
 {
   printf(" ");
 }
 for(int j=0;j<(2*n-1)-2*i;j++)
 {
   printf("%d",n-i);
 }
 
 printf("\n");
}
  
return 0;
}
