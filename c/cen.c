#include<stdio.h>
int main()
{
int score, i=0, count=0;

again:
printf("Enter the score of 11 cricket players: ");
scanf("%d",&score);

if(score<0) goto again;

count+=score>=100;

i++;

if(i<=10) goto again;
 
printf("Total no. of players scored centuries: %d\n",count);

return 0;
}





