#include<stdio.h>
int main()
{
float x1, x2, y1, y2, s;

printf("Enter the coordinates of the first point (x1,y1): ");
scanf("%f%f",&x1,&y1);

printf("Enter the coordinates of the second point (x2,y2): ");
scanf("%f%f",&x2,&y2);

s = (y2-y1)/(x2-x1);

printf("The slope of the line passing through the two points is= %f\n",s);

return 0;
}




