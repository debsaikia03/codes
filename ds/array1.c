#include <stdio.h>
#include <stdlib.h>

int sum(int arr[], int n)
{
  int c, s = 0;
  for (int i = 0; i < n; i++)
  {
    c = 0;
    for (int j = 1; j <= arr[i]; j++)
    {
      if (arr[i] % j == 0)

        c++;
    }
    if (c == 2)
      s += arr[i];
  }

  return s;
}

int main()
{
  int *arr;
  int n, a;

  printf("Enter the size of array: ");
  scanf("%d", &n);

  arr = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  a = sum(arr, n);

  printf("Sum of the prime elements: %d", a);

  free(arr);

  return 0;
}
