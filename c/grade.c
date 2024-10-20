#include<stdio.h>
int main()
{
int grade, p, c, m, e, b, per;

printf("Enter the grades of 5 subjects (phys, chem, maths, eng, bio): ");
scanf("%d%d%d%d%d",&p,&c,&m,&e,&b);

per=((int)(p+c+m+e+b+4.9)/5)*100;

if(per>59)
  printf("Grade: First division\n");
else if(per>49)
  printf("Grade: Second division\n");
else if(per>39)
  printf("Grade: Third division\n");
else 
  printf("Grade: Fail\n");
  
return 0;
}

