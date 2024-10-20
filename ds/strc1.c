#include <stdio.h>
#include <string.h>

struct employee
{
    char name[10];
    char desig[10];
    int sal, hra, da, id;
};

int main()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct employee x[n];

    for (int i = 0; i < n; i++)
    {
        printf("Employee %d\n",i+1);

        printf("Enter employee id: ");
        scanf("%d", &x[i].id);

        printf("Enter employee name: ");
        scanf("%s", x[i].name);

        printf("Enter employee designation: ");
        scanf("%s", x[i].desig);

        printf("Enter employee's salary: ");
        scanf("%d", &x[i].sal);

        printf("Enter employee's HRA%: ");
        scanf("%d", &x[i].hra);

        printf("Enter employee's DA%: ");
        scanf("%d", &x[i].da);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf("Name: %s\n", x[i].name);
        printf("Id: %d\n", x[i].id);
        printf("Designation: %s\n", x[i].desig);
        printf("Salary: %d\n", x[i].sal);
        printf("HRA%: %d\n", x[i].hra);
        printf("DA%: %d\n", x[i].da);

        float gs = 0, m = 0, n = 0;
        m = x[i].sal * (float)(x[i].hra / 100.0);
        n = x[i].sal * ((float)(x[i].da / 100.0));
        gs = x[i].sal + m + n;

        printf("Gross salary of employee %d: %.2f\n", i + 1, gs);
    }

    return 0;
}