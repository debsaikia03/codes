#include<stdio.h>

struct employee
{
    float salary;
    char name[10];
    int age;
    char address[20];
}e1,e2;


int main()
{
  printf("Enter your name: \n");
  scanf("%s",e1.name);

  printf("Enter your age: \n");
  scanf("%d",&e1.age);

  printf("Enter your salary: \n");
  scanf("%f",&e1.salary);

  e2=e1;

  printf("\nYour name is %s\nYour age is %d\nYour salary is: %.2f\n",e2.name,e2.age,e2.salary);

  return 0;

}


  






