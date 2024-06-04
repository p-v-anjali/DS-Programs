#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {     // Function to create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL)  {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void displayList(struct Node* head) // Function to display the linked list
 {
    struct Node* current = head;
    if (head == NULL) 
	{
        printf("List is empty\n");
        return;
    }
    printf("Linked List: ");
    while (current != NULL) 
	{
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
void swapValues(struct Node* node1, struct Node* node2) // Function to swap values of two nodes
{
    int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
}
void sortByValues(struct Node* head) // Function to sort the linked list by changing values
{
    struct Node* i, *j;
    for (i = head; i != NULL; i = i->next){
        for (j = i->next; j != NULL; j = j->next) 	{
            if (i->data > j->data) {
                swapValues(i, j);
            }
        }
    }
}
int main() {
    struct Node* head = NULL;
    int data, n, i;
    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);
    printf("Enter the elements of the linked list:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &data);
        struct Node* newNode = createNode(data);
        if (head == NULL) {
            head = newNode;
        } 
else {
            struct Node* current = head;
            while (current->next != NULL)
 {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    printf("Original ");
    displayList(head);
    sortByValues(head); // Sorting by changing values
    printf("\nSorted by changing values ");
    displayList(head);
	    return 0;
}
