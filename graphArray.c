#include <stdio.h>
#include <stdlib.h>

#define MAX 100
 
int V;
int adjMatrix[MAX][MAX];

int visited[MAX];

void initGraph(int vertices){
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            adjMatrix[i][j] = 0;
        }
    }
    V = vertices;
}

void addEdge(int src, int dest){
    if(src>=0 && src <= V && dest>=0 && dest <= V ){
        adjMatrix[src][dest] = 1;
        adjMatrix[dest][src] = 1;
    }else{
        printf("Invalid");
    }
};

void dfs(int start){
    visited[start] = 1;
    printf("%d", start);

    for(int i=0;i<V;i++){
        if(adjMatrix[start][i] && !visited[i]){
            dfs(i);
        };
    }
}

void printGraph(){
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            printf("%d",adjMatrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    initGraph(4);
    addEdge(1,2);
    addEdge(2,2);
    addEdge(3,2);
    printGraph();
    dfs(1);
}