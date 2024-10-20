#include<stdio.h>

struct address
{
    char ph[10];
    char ct[25];
    int pin;
};

struct emp
{
    char nm[25];
    struct  address ad;
};

int main()
{
    struct emp e={"Jeru","531045","Nagpur",10};

    printf("\nName: %s Phone= %s",e.nm,e.ad.ph);
    printf("\nCity: %s Pin: %d",e.ad.ct,e.ad.pin);
}
