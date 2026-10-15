#include <stdio.h>
#define INF 999
#define V 5

int main() {
    // Distance matrix (0 means no direct edge)
    int graph[V][V] = {
        {0, 1, 4, 0, 1},  // 0 to 1=1, 2=4, 4=1
        {1, 0, 2, 5, 0},  // 1 to 0=1, 2=2, 3=5
        {4, 2, 0, 1, 3},  // 2 to 0=4, 1=2, 3=1, 4=3
        {0, 5, 1, 0, 7},  // 3 to 1=5, 2=1, 4=7
        {1, 0, 3, 7, 0}   // 4 to 0=1, 2=3, 3=7
    };
    
    int dist[V];      // Shortest distance
    int visited[V];   // 0=not visited
    
    // Step 1: Initialize
    for(int i = 0; i < V; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }
    dist[0] = 0;  // Start from 0
    
    printf("Shortest paths from vertex 0:\n");
    
    // Step 2: Repeat V times
    for(int count = 0; count < V; count++) {
        int min_dist = INF;
        int u = -1;
        
        // Find unvisited vertex with min distance
        for(int v = 0; v < V; v++) {
            if(visited[v] == 0 && dist[v] < min_dist) {
                min_dist = dist[v];
                u = v;
            }
        }
        
        if(u == -1) break;
        
        visited[u] = 1;  // Mark visited
        printf("Process %d (dist=%d)\n", u, dist[u]);
        
        // Update distances to neighbors
        for(int v = 0; v < V; v++) {
            if(graph[u][v] != 0 && visited[v] == 0) {
                int new_dist = dist[u] + graph[u][v];
                if(new_dist < dist[v]) {
                    dist[v] = new_dist;
                }
            }
        }
    }
    
    // Print result
    printf("\nVertex\tDistance\n");
    for(int i = 0; i < V; i++) {
        printf("%d\t%d\n", i, dist[i]);
    }
    
    return 0;
}