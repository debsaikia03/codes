#include<stdio.h>
#include<string.h>

int main()
{

   int m, n, i, j, flag, c=0;

   printf("Enter string size: ");
   scanf("%d",&m);

   char a[m];

   printf("Enter the string: ");
   scanf("%s",a);
   
   printf("Enter string size: ");
   scanf("%d",&n);

   char b[n];

   printf("Enter another string: ");
   scanf("%s",b);

   for(i=0; i<m-n+1; i++)
   {
    flag=0;
    for(j=0; j<n; j++)
    {
      flag++;
      if(a[i+j] != b[j])
      {
        break;
      }
    }
    if(flag==n)
    {
        c++;
    }
   }

   if(c != 0)
   {
    printf("Pattern found");
   }
   else
   {
     printf("Pattern not found");
   }
}