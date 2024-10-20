#include<stdio.h>

int main()
{
    int a[5],n,l=0,s=0;

    printf("Enter 5 elements: \n");
    
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<5;i++)
    {
        if(i==0)
        {
            s=a[i];
            l=a[i];
        }
        if(a[i]>l) 
        {
            s=l;
            l=a[i];
        }
    }
    
    printf("The second largest is: %d",s);

    return 0;
}


