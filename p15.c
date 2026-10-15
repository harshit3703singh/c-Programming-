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
    
    int visited[5] = {0};     // 0 = not visited
    int queue[5];             // Simple array queue
    int front = 0, rear = 0;  // Queue pointers
    int start = 0;            // Start from vertex 0
    
    printf("BFS Traversal: ");
    
    // STEP 1: Add start vertex to queue
    queue[rear] = start;
    rear++;
    visited[start] = 1;
    
    // STEP 2: Process queue
    while(front < rear) {
        // Remove front vertex
        int current = queue[front];
        front++;
        printf("%d ", current);
        
        // STEP 3: Add all unvisited neighbors
        for(int i = 0; i < n; i++) {
            if(graph[current][i] == 1 && visited[i] == 0) {
                queue[rear] = i;
                rear++;
                visited[i] = 1;
            }
        }
    }
    printf("\n");
    
    return 0;
}