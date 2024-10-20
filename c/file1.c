#include<stdio.h>

int main()
{
char c,a[100],i=0;
FILE *fp1;

fp1=fopen("data.in","r");

while ((c = getc(fp1)) != EOF)
a[i++]=c;
a[i]='\0';

fscanf(fp1,"%c",&a[i]);

printf("\nSTART\n");

//for(i=0; i<10; i++)
puts(a);

printf("\nEND\n");

return 0;
}

















