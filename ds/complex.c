#include <stdio.h>


struct comp
{
    int a, b;
};

void sum(int a, int b, int c, int d)
{
   int m= a+c;
   int n= b+d;
   
   if(n>=0)
   printf("The addition of the complex nos. is: %d+i%d",m,n);

   else
   printf("The addition of the complex nos. is: %d+i(%d)",m,n);

}

void mul(int *a, int *b, int *c, int *d)
{
    int r= (*a * *c) - (*b * *d);
    int s= (*a * *d) + (*b * *c);
    
    if(s>0)
    printf("The multiplication of the complex nos. is: %d+i%d",r,s);

    else
    printf("The multiplication of the complex nos. is: %d+i(%d)",r,s);

}

int main()
{
    struct comp x[2];
    int n;

    for (int i = 0; i < 2; i++)
    {
        printf("Enter two numbers for complex no.: ");
        scanf("%d%d", &x[i].a, &x[i].b);
    }

    printf("MENU\n");
    printf("1. Add\n");
    printf("2. Multiply\n");
    printf("Enter your choice: ");
    scanf("%d", &n);

    if (n == 1)
        sum(x[0].a, x[0].b,x[1].a, x[1].b);

    else if (n == 2)
        mul(&x[0].a,&x[0].b,&x[1].a,&x[1].b);

    else
        printf("Invalid input");

    return 0;
}
