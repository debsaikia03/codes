#include <stdio.h>
/*
Mon Tue Wed Thu Fri Sat Sun

*/
int main()
{
    int m,c,i,k,k1,l;
    char op='Y';
    while(op!='N')
    {
        c=0;
        i=7;
        printf("Select month:\n1 for Jan\n2 for Feb\n3 for Mar\n4 for Apr\n5 for May\n6 for Jun\n7 for Jul\n8 for Aug\n9 for Sep\n10 for Oct\n11 for Nov\n12 for Dec:\n");
        scanf("%d",&m);
        printf("Mon Tue Wed Thu Fri Sat Sun\n");
        if(m<=7)
        {k1=m;}
        else
        {k1=m+1;}
        if(k1==2)
        {
            l=28;
        }
        else if(k1%2==0)
        {
            l=30;
        }
        else
        {
            l=31;
        }
        for(int m1=1;m1<=(m-1);m1++)
        {
            if(m1<=7)
            {k=m1;}
            else
            {k=m1+1;}
            if(k==2)
            {
                c+=28;
            }
            else if(k%2==0)
            {
                c+=30;
            }
            else
            {
                c+=31;
            }
            c=c%7;
        }
        if((i+c)%7==0)
        {
            i=7;
        }
        else
        {
            i=(i+c)%7;
        }
        for(int i1=0;i1<i-1;i1++)
        {
            printf("    ");
        }
        for(int j=1;j<=l;j++)
        {
            if(j<=9)
            {printf("%d   ",j);}
            else
            {
                printf("%d  ",j);
            }
            if(i%7==0)
            {
                printf("\n");
            }
            i++;
        }
        fflush(stdin);
        printf("\nDo you want to select another month? Y/N:\n");
        scanf("%c",&op);
    }
}