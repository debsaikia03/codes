#include<stdio.h>
int main()
{
int x1, y1, x2, y2, x3, y3;

printf("Enter the coordinates of three points (x1,y1) (x2,y2) (x3,y3):\n ");
scanf("%d%d%d%d%d%d",&x1, &y1, &x2, &y2, &x3, &y3);

if(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2) == 0)
printf("The points don't form a triangle.");

else
printf("The points form a triangle.");

return 0;
}
