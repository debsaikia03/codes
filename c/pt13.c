#include<stdio.h>
#include<string.h>

int main()
{

int len, t=0;
char *p[5];
char a[]="Yudhisthir", b[]="Bhim", c[]="Arjun", d[]="Nakul", e[]="Sahadev";

p[0]=a;
p[1]=b;
p[2]=c;
p[3]=d;
p[4]=e;

for(int i=0; i<5; i++)
{
 len= strlen(p[i]);
 for(int j=0; j<len; j++)
 {
  if(p[i][j]=='a' || p[i][j]=='A')
  t++;
 } 
}

printf("The number of 'a' present in all names is: %d\n",t);

return 0;
}




 
 
   






