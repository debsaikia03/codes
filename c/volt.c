#include<stdio.h>
int main()
{

float v1, v2, n1, n2;

printf("Enter primary voltage: ");
scanf("%f",&v1);

printf("Enter the no. of turns in primary transformer: ");
scanf("%f",&n1);

printf("Enter the no. of turns in secondary transformer: ");
scanf("%f",&n2);

v2 = (v1*n2)/n1;

printf("The secondary voltage is= %f\n",v2);

return 0;

}
