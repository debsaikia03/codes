#include<stdio.h>
#include<stdlib.h>

#define MAX[100]

struct Edge{

    int src, dst, wgt;
};

struct Graph{

    int V, E; //no. of vertices/edges
    struct Edge* edges; //array of edges
};

struct Subset{

    int parent;
    int rank;
};

struct Graph* createGraph(int V, int E){

    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));

    graph->V = V;
    graph->E = E;
    graph->edges = (struct Edge*)malloc(graph->E * sizeof(struct Edge));

    return graph;
}

void kruskalMST(struct Graph* graph){

    int V = graph->V;
    struct Edge result[max];
    int e = 0;
    int i = 0;

    
}


int main(){

    int v, e;

    printf("Enter no. of vertices: ");
    scanf("%d",&v);

    printf("Enter no. of edges: ");
    scanf("%d",&e);

    if(e > v*(v-1)/2){

        printf("Invalid no. of edges!");
        return 0;
    }

    struct Graph* graph = createGraph(v,e);

    for(int i = 0; i < e; i++){

        printf("Enter src, dst, & wgt for edge %d: ",i+1);
        scanf("%d,%d,%d", graph->edges[i].src, graph->edges[i].dst, graph->edges[i].wgt);
    }

    kruskalMST(graph);

}