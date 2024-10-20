#include<stdio.h>

struct employee
{
    float salary;
    int age;
    char name[10];
    char address[20];
};

int main()
{ 
    int n, s=0,avg=0;

    printf("Enter the no. of employees: ");
    scanf("%d",&n);

    struct  employee e[n];

    for(int i=0; i<n; i++)
    {
        printf("Employee name: %d\n",i+1);

        printf("Enter your name: ");
        scanf("%s",e[i].name);

        printf("Enter your address: ");
        scanf("%s",e[i].address);

        printf("Enter your age: ");
        scanf("%d",&e[i].age);

        printf("Enter your salary: ");
        scanf("%f",&e[i].salary);

        printf("\n");
    }   

    for(int i=0; i<n; i++)
    {
        s+=e[i].salary;
    }

    avg=s/n;

    for(int i=0; i<n; i++)
    {
        if(e[i].salary > avg)
        {
            printf("Employee %d has more salary than average",i+1);
        }
    }

    return 0;
}






    

