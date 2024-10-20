#include<stdio.h>
int main()
{
int marks, age;

printf("Enter the marks: ");
scanf("%d",&marks);

printf("Enter the age:");
scanf("%d",&age);

marks = marks + 40;

if(age<50);
  marks = marks + 20;

if(age>100)
 marks = 100;
 
printf("The total marks is= %d\n",marks);

return 0;
}


