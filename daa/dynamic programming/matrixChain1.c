int main()
{
    int n;

    printf("Enter the number of matrices to be multiplied: ");
    scanf("%d", &n);

    int p[n + 1];

    printf("Enter the dimensions: ");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &p[i]);
    }

    int **c = (int **)malloc((n + 1) * sizeof(int *));
    int **k = (int **)malloc((n + 1) * sizeof(int *));
    for (int i = 0; i <= n; i++)
    {
        c[i] = (int *)malloc((n + 1) * sizeof(int));
        k[i] = (int *)malloc((n + 1) * sizeof(int));
        c[i][i] = 0; // Cost is zero when multiplying one matrix
    }

    int d = 1;

    while(d < n){

        for(int i = 1; i <= n; i++){

            for(int j = 1; j <=n ; j++){


               if(j - i == d){

                int min = INT_MAX;

                for(int s = i; s < j; s++){

                
                   int q = c[i][s] + c[s+1][j] + p[i-1] * p[s] * p[j];

                   if(q < min){

                    min = q;

                    c[i][j] = min;

                    k[i][j] = s;
                   }                
                }


               }
            }
        } 

        d++;
    }


}