#include<stdio.h>

int even(int a[],int s) 
{
    int c= 0;
    for (int i=0;i<s;i++)
    {
        if (a[i]%2==0) 
        {
            c++;
        }
    }
    return c;
}

int main() 
{
    int a[15];
    
    printf("Enter 15 numbers:\n");
    for (int i=0;i<15;i++) 
    {
        scanf("%d",&a[i]);
    }
    
    int count = even(a,15);
    printf("Number of even numbers present in the array is: %d\n", count);
    
    return 0;
}
