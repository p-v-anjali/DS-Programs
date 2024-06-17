#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int vertex;
    struct Node* next;
};// Node structure for the linked list representing neighbors
typedef struct Node Node;
void initializeList(Node* adjacencyList[], int vertices) 
{
	int i;
    for (i = 0; i < vertices; ++i) {
        adjacencyList[i] = NULL;
    }
}// Function to initialize an array of linked lists


void addEdge(Node* adjacencyList[], int vertex1, int vertex2) 
{
   
    Node* newNode1 = (Node*)malloc(sizeof(Node)); // Adding vertex2 to the list of vertex1
    newNode1->vertex = vertex2;
    newNode1->next = adjacencyList[vertex1];
    adjacencyList[vertex1] = newNode1;// Adding vertex1 to the list of vertex2 (for undirected graph)
    Node* newNode2 = (Node*)malloc(sizeof(Node));
    newNode2->vertex = vertex1;
    newNode2->next = adjacencyList[vertex2];
    adjacencyList[vertex2] = newNode2;
}// Function to add an edge to the adjacency list
void displayList(Node* adjacencyList[], int vertices)
 {
	int i;
    printf("Adjacency List:\n");
    for (i = 0; i < vertices; ++i) 
	{
        printf("%d -> ", i);
        Node* current = adjacencyList[i];
        while (current != NULL)
		 {
            printf("%d ", current->vertex);
            current = current->next;
            if (current != NULL) 
			{
                printf("-> ");
            }
        }
        printf("\n");
    }
}// Function to display the adjacency list
int main() 
{
    int vertices, edges, i;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    Node* adjacencyList[vertices];
    initializeList(adjacencyList, vertices);
    printf("Enter the number of edges: ");
    scanf("%d", &edges);
    printf("Enter the edges (vertex1 vertex2):\n");
    for (i = 0; i < edges; ++i) 
	{
        int vertex1, vertex2;
        scanf("%d %d", &vertex1, &vertex2);
        addEdge(adjacencyList, vertex1, vertex2);
    }
    displayList(adjacencyList, vertices);
    return 0;
}
