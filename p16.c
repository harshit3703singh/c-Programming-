#include <stdio.h>

int main() {
    int n = 5;  // 5 vertices (0 to 4)
    int graph[5][5] = {
        {0,1,1,0,0},  // 0 connected to 1,2
        {1,0,1,1,0},  // 1 connected to 0,2,3
        {1,1,0,0,1},  // 2 connected to 0,1,4
        {0,1,0,0,1},  // 3 connected to 1,4
        {0,0,1,1,0}   // 4 connected to 2,3
    };
    
    int visited[5] = {0};  // 0 = not visited
    
    printf("DFS Traversal: ");
    
    // Start DFS from vertex 0
    printf("%d ", 0);
    visited[0] = 1;
    
    // Visit neighbors of 0
    if(graph[0][1]==1 && visited[1]==0) {
        printf("%d ", 1);
        visited[1] = 1;
    }
    
    // Go deeper from 1 to its unvisited neighbors
    if(graph[1][2]==1 && visited[2]==0) {
        printf("%d ", 2);
        visited[2] = 1;
    }
    
    if(graph[1][3]==1 && visited[3]==0) {
        printf("%d ", 3);
        visited[3] = 1;
    }
    
    // From 2 to 4
    if(graph[2][4]==1 && visited[4]==0) {
        printf("%d ", 4);
        visited[4] = 1;
    }
    
    printf("\n");
    
    return 0;
}