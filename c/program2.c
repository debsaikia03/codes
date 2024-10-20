#include<stdio.h>

int sum(int num) 
{
    if (num==0) 
    {
        return 0;
    }
    
    return (num%10)+sum(num/10);
}

int main() 
{
    int n;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    int s = sum(n);
    
    printf("The sum of the digits of the number is: %d\n",s);
    
    return 0;
}



    











