#include<stdio.h>
#include<string.h>

struct book
{
    char n[20];
    float pr;
    int pg;
};

int main()
{
    int i, n;
    struct book *ptr,b[5];

    ptr=b;
    
    printf("Enter the no. of books: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter book name, price & pages: ");
        scanf("%s%f%d",(ptr+i)->n,&(ptr+i)->pr,&(ptr+i)->pg);
    }

    for(i=0;i<n;i++)
    {
        printf("The book name is: %s\n",ptr[i].n);
        printf("The price is: %.2f\n",ptr[i].pr);
        printf("The no. of pages is: %d\n",ptr[i].pg);
    }
    
}



     
    



