#include <stdio.h>

int top = -1;
int a[100];

void push()
{
    int n;
    if (top == 99)
    {
        printf("Overflow!\n");
    }
    else
    {
        printf("Enter the element: ");
        scanf("%d", &n);
        top = top + 1;
        a[top] = n;
        printf("Element inserted!\n");
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Underflow!\n");
    }
    else
    {
        a[top] = 0;
        top = top - 1;
        printf("\nElement deleted!\n");
    }
}

void show()
{
    if (top == -1)
    {
        printf("\nUnderflow!\n");
    }
    else
    {
        printf("\nStacked elements: \n");
        for (int i = top; i >= 0; i--)
            printf("%d\n", a[i]);
    }
}

int main()
{
    int n;

    int i = 0;
    while (i != 6)
    {
        printf("\n***MENU***\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. IsEmpty\n");
        printf("4. IsFull\n");
        printf("5. SHOW\n");
        printf("6. EXIT\n");
        printf("Enter choice: ");
        scanf("%d", &n);

        if (n == 1)
            push();

        else if (n == 2)
            pop();

        else if (n == 3)
        {
          if(top == -1)
          {
            printf("\nStack is EMPTY!\n");
          }
          else
          {
            printf("\nStack is NOT EMPTY!\n");
          }
        }

        else if (n == 4)
        {
          if(top == 99)
          {
            printf("\nStack is FULL!\n");
          } 
          else
          {
            printf("\nStack is NOT FULL!\n");
          }
        }

        else if (n == 5)
            show();

        else if (n == 6)
            i = 6;

        else
            printf("Invalid Input. Try again!\n");
    }
}