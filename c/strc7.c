#include <stdio.h>

struct time 
{
    int h;
    int m;
    int s;
};

struct time add(struct time t1, struct time t2) 
{
    struct time sum;

    sum.h = t1.h + t2.h;
    sum.m = t1.m + t2.m;
    sum.s = t1.s + t2.s;

    if (sum.s >= 60) 
    {
        sum.s -= 60;
        sum.m++;
    }

    if (sum.m >= 60) 
    {
        sum.m -= 60;
        sum.h++;
    }

    if (sum.h >= 24) 
    {
        sum.h -= 24;
    }

    return sum;
}

int main() 
{
    struct time t1, t2, r;

    
    printf("Enter the first time (hour minute second): ");
    scanf("%d %d %d", &t1.h, &t1.m, &t1.s);

    printf("Enter the second time (hour minute second): ");
    scanf("%d %d %d", &t2.h, &t2.m, &t2.s);

    r = add(t1,t2);

    printf("Sum of times: %d:%d:%d\n",r.h,r.m,r.s);

    return 0;
}
