#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,*ptr,s=0;
    
    printf("Enter no. of elements: ");
    scanf("%d",&n);

    ptr=(int *)malloc(n*sizeof(int));
    
    printf("Enter the elements of array: ");
    for(i=0;i<n;++i)
    {
    scanf("%d",ptr+i);
    s+=*(ptr+i);
    }

   printf("The sum of elements is: %d",s);
   free(ptr);

   return 0;
}











