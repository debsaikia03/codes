#include<stdio.h>

int max(int m, int n){
 
   if(m > n){
    return m;
   }
   
   else{
    return n;
   }
}

int main(){

    int n, m;

    printf("Enter no. of objects: ");
    scanf("%d", &n);

    printf("Enter knapsack capacity: ");
    scanf("%d",&m);

    int p[n+1], wt[n+1], k[n+1][m+1];
    
    p[0] = 0;
    wt[0] = 0;

    printf("Enter profit for each object: ");
    for(int i=1; i<=n; i++){

        scanf("%d",&p[i]);
    }

    printf("Enter weight for each object: ");
    for(int i=1; i<=n; i++){

        scanf("%d",&wt[i]);
    }

    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){

            if(i == 0 || j == 0){

                k[i][j] = 0;
            }

            else if(wt[i] <= j){
                 
                k[i][j] = max(k[i-1][j-wt[i]]+p[i], k[i-1][j]);
            }

            else{

                k[i][j] = k[i-1][j];
            }
        }
    }

    printf("Maximum profit: %d",k[n][m]);

}