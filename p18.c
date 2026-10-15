#include <stdio.h>
#define V 5
#define INF 999

int main() {
    // Graph with weights (0 = no edge)
    int graph[V][V] = {
        {0, 2, 0, 6, 0},    // 0 to 1=2, 3=6
        {2, 0, 3, 8, 5},    // 1 to 0=2, 2=3, 3=8, 4=5
        {0, 3, 0, 0, 7},    // 2 to 1=3, 4=7
        {6, 8, 0, 0, 9},    // 3 to 0=6, 1=8, 4=9
        {0, 5, 7, 9, 0}     // 4 to 1=5, 2=7, 3=9
    };
    
    int parent[V];        // Track parent vertex
    int key[V];           // Min weight to connect
    int visited[V] = {0}; // 0 = not in MST
    
    // Step 1: Initialize
    for(int i = 0; i < V; i++) {
        key[i] = INF;
    }
    key[0] = 0;
    parent[0] = -1;
    
    printf("**PRIM'S MINIMUM SPANNING TREE**\n");
    
    // Step 2: V-1 times
    for(int count = 0; count < V-1; count++) {
        // Find unvisited vertex with min key
        int min_key = INF;
        int u = -1;
        
        for(int v = 0; v < V; v++) {
            if(visited[v] == 0 && key[v] < min_key) {
                min_key = key[v];
                u = v;
            }
        }
        
        visited[u] = 1;
        printf("Added vertex %d\n", u);
        
        // Update adjacent vertices
        for(int v = 0; v < V; v++) {
            if(graph[u][v] != 0 && visited[v] == 0 && 
               graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }
    
    // Step 3: Print MST
    int total_cost = 0;
    printf("\n**MST EDGES:**\n");
    for(int i = 1; i < V; i++) {
        printf("Edge: %d - %d (cost: %d)\n", 
               parent[i], i, graph[i][parent[i]]);
        total_cost += graph[i][parent[i]];
    }
    printf("\n**Total MST Cost: %d**\n", total_cost);
    
    return 0;
}