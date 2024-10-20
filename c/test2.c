#include<stdio.h>
#include<string.h>

int main()
{
  char n[20];
  int m;

  printf("Name: ");
  gets(n);

  m=strlen(n);

  printf("%c",n[0]);

  for(int i=0;i<=m;i++)
  {
    if(n[i]==' ')
    printf(".%c",n[i+1]);

  }
  }


  

