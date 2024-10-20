#include <stdio.h>

void insert(int a[], int n, int pos, int data)
{
    for (int i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = data;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void delete(int a[],int n,int pos)
{

    for(int i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }

     for (int i = 0; i < n-1; i++)
    {
        printf("%d ", a[i]);
    }
}

void search(int a[],int n,int data)
{
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==data)
        {
            flag = 1;
            break;
        }
    }
        if(flag==1)
            printf("Element found ");
        else
           printf("Element not found");
}
    


int main()
{
    int n, m;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);

    int a[100];

    printf("Enter the %d elements: ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    while(m != 5)
    {
    printf("**MENU***\n");
    printf("\n 1. Insert\n 2. Delete\n 3. Linear search\n 4. Traverse\n 5. Exit\n Enter your choice: ");
    scanf("%d",&m);
    
    if (m == 1)
    {
        int data, pos;

        printf("Enter the data and position to be inserted");
        scanf("%d%d",&data,&pos);

        insert(a, n + 1, pos, data);
        n++;
    }

    if(m == 2)
    {
        int pos;
        printf("Enter the position to be deleted");
        scanf("%d",&pos);

        delete(a, n, pos);
        n--;
    }

    if(m == 3)
    {
        int data;
        printf("Enter the data to be found");
        scanf("%d",&data);

        search(a, n, data);

    }

    if(m==4)
    {
        for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    }

    if(m==5)
        return 0;
    }
}