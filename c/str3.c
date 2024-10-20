#include<stdio.h>
#include<string.h>

int main()
{
    char i=0, a[10], ch, c=0;
    

    printf("Enter a source string: \n");
    gets(a);

    printf("Enter a character present in the string: \n");
    scanf("%c",&ch);

    while(a[i])
    {
     if(ch==a[i++])
     ++c;
    }

    printf("Frequency of %c= %d\n",ch,c);

    return 0;


} 
