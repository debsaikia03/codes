#include<stdio.h>

struct player
{
    char n[20];
    int age;
};

int main()
{
    int m;
    printf("Enter the no. of players: ");
    scanf("%d",m);

    struct player e[m];

    for(int i=0; i<m; i++)
    {
    printf("Enter name of player %d : ",i+1);
    scanf("%s",e[i].n);

    printf("Enter the age: ");
    scanf("%d",&e[i].age);
    }

    for(int i=0; i<m; i++)
    {
    printf("The name of the player %d is %s and age is %d\n",i+1,e[i].n,e[i].age);
    }

return 0;

}















