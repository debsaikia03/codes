#include<stdio.h>

int gcd(int a, int b){

    if(b == 0){
        return a;
    }

    return gcd(b, a % b);
}

int main(){
    
    int m,n;

    printf("Enter two numbers to find GCD: ");
    scanf("%d%d",&m,&n);

    printf("The GCD of %d and %d is: %d", m,n,gcd(m,n));

}