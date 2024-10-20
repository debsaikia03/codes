#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr;
  int n;

  printf("Enter the size of array: ");
  scanf("%d", &n);

  ptr = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
  {
    printf("Enter the value for array %d:\n", i + 1);
    scanf("%d", &ptr[i]);
  }

  for (int j = 0; j < n; j++)
  {
    printf("The value for array %d is %c\n", j + 1, ptr[j]);
  }

  return 0;
}