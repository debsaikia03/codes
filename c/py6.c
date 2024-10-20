#include <stdio.h>
int main() 
{
    int r = 5, n = 1;  
    
    
    for (int i = 1; i <= r; i++) 
    {
        for (int j = 1; j <= r - i; j++) 
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++) 
        {
            printf("%d ", n);
            n++;
        }
        
        printf("\n");
    }
    
    return 0;
}
