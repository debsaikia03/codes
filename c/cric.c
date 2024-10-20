#include<stdio.h>
int main()
{
 int score, sum=0, i=1;
 float avg;
 
 repeat:
 printf("Enter the score of next player: ");
 scanf("%d",&score);
 
 sum = sum + score;
 i++;
 if(i<=11) goto repeat;
 
 avg = sum/11.0;
 
 printf("The average score of 11 players is: %.2f",avg);
  
 return 0;
}
 
