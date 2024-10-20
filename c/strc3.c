#include<stdio.h>

struct book
{
    char name[20];
    float price;
    int pages;
};

int main()
{
    struct book b1= {"K.Richie",130.50,550};

    struct book *ptr;
    ptr=&b1;

    printf("\n%s",ptr->name);
    printf("\n%.2f",ptr->price);
    printf("\n%d",ptr->pages);

}






