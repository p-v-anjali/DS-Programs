#include <stdio.h>
#define MAX_VERTICES 100
int i,j;
void initializeMatrix(int matrix[MAX_VERTICES][MAX_VERTICES], int vertices) {
    for ( i = 0; i < vertices; ++i) {
        for ( j = 0; j < vertices; ++j) {
            matrix[i][j] = 0; // Initialize all cells to 0 (no edges)
        }
    }
}
void addEdge(int matrix[MAX_VERTICES][MAX_VERTICES], int vertices, int vertex1, int vertex2 {
    if (vertex1 >= 0 && vertex1 < vertices && vertex2 >= 0 && vertex2 < vertices) {
        matrix[vertex1][vertex2] = 1;
        matrix[vertex2][vertex1] = 1; // For an undirected graph
    } 
	else {
        printf("Invalid vertices\n");
    }
}// Function to add an edge to the adjacency matrix
void displayMatrix(int matrix[MAX_VERTICES][MAX_VERTICES], int vertices) {
    printf("Adjacency Matrix:\n");
    for ( i = 0; i < vertices; ++i){
        for ( j = 0; j < vertices; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}// Function to display the adjacency matrix
int main() {
    int vertices, edges;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
	int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
    initializeMatrix(adjacencyMatrix, vertices);
    printf("Enter the number of edges: ");
    scanf("%d", &edges);
    printf("Enter the edges (vertex1 vertex2):\n");
    for ( i = 0; i < edges; ++i) 
	{
        int vertex1, vertex2;
        scanf("%d %d", &vertex1, &vertex2);
        addEdge(adjacencyMatrix, vertices, vertex1, vertex2);
    }
    displayMatrix(adjacencyMatrix, vertices);
    return 0;
}
