#include<stdio.h>
#include<math.h>

int find1(int num)
{
	if (num == 0) 
		return 0; 
	else
		return ((num % 2) + 10 * find1(num / 2));
}

int find2(float num){
    
    if(num == 0){
        return 0;
    }

	return (((int)num * 2) + 10 * find2(num * 2));  
}


int main()
{
    float n;

	printf("Enter a number: ");
    scanf("%f", &n);

    if (floor(n) == n) {
        int a = find1(n);
        printf("Binary representation: %d", find1(n));
    } 
    else {
        int d = (int)n;
        float f = n - d;
        printf("%d\n%f",d,f);

    }


}
