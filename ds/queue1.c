#include <stdio.h>
#include <stdlib.h>

int a[5];
int r = -1;
int f = -1;

void enqueue()
{
  int x;

  if ((r + 1) % 5 == f)
  {      
    printf("\nOverflow!\n");
  }

  else
  {
    r = (r + 1) % 5;
    printf("\nEnter element to be queued: ");
    scanf("%d", &x);
    a[r] = x;

    printf("Element queued!\n");
    
    if (f == -1)
    {
      f = 0;
    }
  }
}

void dequeue()
{
  if (f == -1)
  {
    printf("\nUnderflow!\n");
  }

  else
  {
    if (f == r)
    {
      f = r = -1;
    }
    else
    {
      a[f] = -1;
      f = (f + 1) % 5;
    }

    printf("\nElement dequeued!\n");
  }
}

void show()
{
  if (f == -1)
    printf("\nUnderflow!\n");

  else
  {
    printf("\nQueued elements: \n");

    if (f <= r)
    {
      for (int i = f; i <= r; i++)
      {
        printf("%d ", a[i]);
      }
      printf("\n");
    }

    else if (r < f)
    {
      for (int i = f; i < 5; i++)
      {

        printf("%d ", a[i]);
      }
      for (int i = 0; i <= r; i++)
      {
        if (a[i] != -1)
          printf("%d ", a[i]);
      }
      printf("\n");
    }
  }
}

int main()
{
  int n;

  int i = 0;
  while (i != 4)
  {
    printf("\n***MENU***\n");
    printf("1. ENQUEUE\n");
    printf("2. DEQUEUE\n");
    printf("3. SHOW\n");
    printf("4. EXIT\n");
    printf("Enter choice: ");
    scanf("%d", &n);

    if (n == 1)
      enqueue();

    else if (n == 2)
      dequeue();

    else if (n == 3)
      show();

    else if (n == 4)
      i = 4;

    else
      printf("Invalid Input. Try again!\n");
  }
}