#include<stdio.h>

int main()
{
    char i=0, a[10], b[10], ch;

    printf("Enter a source string: \n");
    scanf("%[^\n]",a);

    while(a[i]!='\0')
    {
    b[i]=a[i++];
    }
    b[i]='\0';

    printf("The destination string is: \n%s",b);

    return 0;

}













