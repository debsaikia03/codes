#include<stdio.h>
#include<limits.h>

int main() {

// Defining multi-stage graph
    int stages = 4;
    int n = 8; // no. of vertices

    int cost[9], d[9], path[5]; // Corrected array declarations

    int c[9][9] = { {0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 2, 1, 3, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 2, 3, 0, 0},
                    {0, 0, 0, 0, 0, 6, 7, 0, 0},
                    {0, 0, 0, 0, 0, 6, 8, 9, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 6},
                    {0, 0, 0, 0, 0, 0, 0, 0, 4},
                    {0, 0, 0, 0, 0, 0, 0, 0, 5},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0} };

    cost[8] = 0; // Initial cost at the destination vertex

    for (int i = n-1; i >= 1; i--) { // Cost table calculation

        int min = INT_MAX;
        
        for (int k = i+1; k <= n; k++) { // Iterate over vertices
            
            if (c[i][k] != 0 && c[i][k] + cost[k] < min) { // Corrected cost calculation
                
                min = c[i][k] + cost[k]; // Update min cost
                d[i] = k; // Store the next vertex in path
            }
        }

        cost[i] = min; // Set the minimum cost for vertex i
    }

    // Defining the path from source to destination
    path[0] = 0; // Not needed in this case but can represent stages
    path[1] = 1; // Starting from vertex 1
    path[4] = 8; // Destination vertex

    for (int i = 2; i < stages; i++) { // Build the path
        
        path[i] = d[path[i-1]]; // Use d[] array to trace the path
    }

    // Output the path
    printf("The shortest path is: ");
    for (int i = 1; i < stages; i++) {
        printf("%d -> ", path[i]);
    }
    printf("%d\n", path[4]);

    return 0;
}