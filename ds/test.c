#include<stdio.h>
int main()
{
    int a=0, b=1, c=3;

    *((a)? &b:&a)=a?b:c;
    
    printf("%d %d %d\n",a,b,c);
    
    return 0;
}
