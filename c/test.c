#include<stdio.h>
#include<math.h>

int main()
{

int m,n,b,c,z=0,x;

printf("Enter a number: ");
scanf("%d",&n);

m=n;

while(m!=0)
{
  m/=10;
  z++;
}

printf("%d\n",z);

x=pow(10,z);

for(int j=0;j<z;j++)
{
    b=n/x;
    c=c%x;
    printf("%d\n",b);
    b=c;
    x=x/10;
    
}

return 0;

}