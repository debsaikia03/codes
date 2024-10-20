#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the highest degree of first matrix ");
    scanf("%d", &a);

    int arr[a + 1];

    for (int i = 0; i < a + 1; i++)
    {
        printf("Enter the constants");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the highest degree of second matrix ");
    scanf("%d", &b);

    int brr[b + 1];

    for (int i = 0; i < b + 1; i++)
    {
        printf("Enter the constants");
        scanf("%d", &brr[i]);
    }
    for (int i = 0; i < b + 1; i++)
    {
        printf("%d ", brr[i]);
    }
    printf("\n");

    if (a < b)
    {
        c = b;
    }

    else
    {
        c = a;
    }

    int carr[c];

    if (a < b)
    {
        for (int i = 0; i < b; i++)
        {
            carr[i] = arr[i] + brr[i];
        }
    
    }
    for(int i=a+1;i<b+1;i++){
        carr[i]=brr[i];
    }

    if (a > b)
    {
        for (int i = 0; i < a; i++)
        {
            carr[i] = arr[i] + brr[i];
        }
    }
    
    for (int i = b+1 ; i < a + 1; i++)
    {
        carr[i] = arr[i];
    }

    if(a=b){
        for (int i = 0; i < a+1; i++)
        {
            carr[i] = arr[i] + brr[i];
        }
    }

    for (int i = 0; i < c+1 ; i++)
    {
        printf("%d ", carr[i]);
    }
}