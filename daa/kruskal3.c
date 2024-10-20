#include<stdio.h>
#include<stdlib.h>

int comparator(const void* p1, const void* p2){
//void -> makes flexible to sort arrays in any datatpe
//const -> ensures that the value is not modified that the pointers point to

    const int(*x)[3] = p1; //typecasting to the array of 3 integers
    const int(*y)[3] = p2;

    return (*x)[2] - (*x)[2]; //comparing the weights(third elements)

}

void makeSet(int parent[], int rank[], int n){

    for(int i = 0; i < n; i++){

        parent[i] = i; //this sets each element to be its own parent (each element starts as a seperate set)

        rank[i] = 0; //this initializes the rank of each element to 0 representing depth of each tree rooted at the element 
    }
}

void kruskalAlgo(int n, int edge[n][3]){

    qsort(edge, n,  sizeof(edge[0]), comparator); //parameters -> edge[5][3](that needs to be sorted), 5(no. of edges), 3 (size of each edge in the array), comparator-> compares two weights present in the edge array

    int parent[n];
    int rank[n];

    makeSet(parent, rank, n);
}

int main(){

    int edge[5][3] = {{0, 1, 10}, {0, 2, 6}, {0, 3, 5}, {1, 3, 15}, {2, 3, 4}}; //{v1, v2, wgt}

    kruskalAlgo(5, edge);
}