#include<stdio.h>
int main()
{
int score, i=1, count=0, max=0, z = 0;
printf("1.  Rohit\n");
printf("2.  Virat\n");
printf("3.  KL\n");
printf("4.  Dhoni\n");
printf("5.  Ashwin\n");
printf("6.  Hardik\n");
printf("7.  Kunal\n");
printf("8.  Chehal\n");
printf("9.  Bumrah\n");
printf("10. Rishabh\n");
printf("11. Prithvi\n");
  
again:
printf("Enter the score of 11 cricket players: ");
scanf("%d",&score);
if(score>=100)
{
 printf("The player that scored a century=%d\n",i);
}

if(max<score)
{
  max=score;
  z = i;

}
  
if(score<0) goto again;


i++;

if(i<=11) goto again;

 
printf("The player scored the highest is: %d\n",z);

printf("The maximum score is: %d\n",max);

return 0;
}


