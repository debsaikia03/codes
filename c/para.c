#include<stdio.h>
int main()
{
float w1, w2, x1, x2, y1, y2, z1, z2, m1, m2;
int t;

printf("Enter the coordinates of two points of a line (w1, x1) & (w2, x2): ");
scanf("%f%f%f%f",&w1,&x1,&w2,&x2);

printf("Enter the coordinates of two points of other line (y1, z1) & (y2, z2): ");
scanf("%f%f%f%f",&y1,&z1,&y2,&z2);

m1=(x2-x1)/(w2-w1);
m2=(z2-z1)/(y2-y1);

t= m1==2;

printf("Are the lines parallel to each other? 1 for yes else 0: %d\n",t);

return 0;
}
