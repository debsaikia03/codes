#include<stdio.h>

int main()
{
    char i=0, j=0, a[10], b[10], ch;
    int c=0,d;

    printf("Enter a source string: \n");
    scanf("%s",a);

    while(a[i]!='\0')
    {
    c++;
    i++;
    }
    
    d=c-1;
 
    while(b[j]!=0)
    {
    b[j]=a[d];
    d--;
    j++;
    }
    b[j]='\0';
    
    printf("The reverse string is: %s",b);

    return 0;
}


    




    


















