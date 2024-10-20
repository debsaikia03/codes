#include<stdio.h>
int display(int ch)
{

if(ch>=65 && ch<= 90)
{
  printf("%c\n",ch);
}
 
else
{
printf("%c\n",ch - 32);
  //return(ch-32);
}

}

int main()
{
char a, p , ch;
printf("Enter a lowercase alphabet: ");
scanf("%c",&a);

display(ch); 
//printf("%c\n",p);

return 0;
}
  
