#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node // Define the structure for a node in the linked list
{
    char name[50];
    struct Node *next;
};
struct Node *createNode(char *name) // Function to create a new node with a name
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) 
	{
        printf("Memory allocation failed\n");
        exit(1);
    }
    strcpy(newNode->name, name);
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginning(struct Node **head, char *name) 
{
    struct Node *newNode = createNode(name);
    newNode->next = *head;
    *head = newNode;
}// Function to insert a name at the beginning of the list
void insertAtEnd(struct Node **head, char *name) 
{
    struct Node *newNode = createNode(name);
    if (*head == NULL) 
	{
        *head = newNode;
        return;
    }
    struct Node *current = *head;
    while (current->next != NULL) 
	{
        current = current->next;
    }
    current->next = newNode;
}// Function to insert a name at the end of the list
void deleteName(struct Node **head, char *name) 
{
    struct Node *current = *head;
    struct Node *prev = NULL;
    while (current != NULL)
	 {
        if (strcmp(current->name, name) == 0) 
		{
            if (prev == NULL) 
			{
                *head = current->next;
            } 
			else 
			{
                prev->next = current->next;
            }
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }
    printf("Name not found in the list. Cannot delete.\n");
}// Function to delete a name from the list
void display(struct Node *head)// Function to display the linked list 
{
    struct Node *current = head;
    if (current == NULL)
	 {
        printf("List is empty\n");
        return;
    }
    printf("List elements:\n");
    while (current != NULL) 
	{
        printf("%s\n", current->name);
        current = current->next;
    }
}
void reverseList(struct Node **head)
 {
    struct Node *prev = NULL;
    struct Node *current = *head;
    struct Node *next = NULL;
    while (current != NULL) 
	{
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}// Function to reverse the linked list


int countNames(struct Node *head) 
{
    int count = 0;
    struct Node *current = head;
    while (current != NULL) 
	{
        count++;
        current = current->next;
    }

    return count;
}// Function to count the number of names in the list

int main() 
{
    struct Node *head = NULL;
    int choice;
    char name[50];
    while (1) 
	{
        
        printf("1. Insert a name at the beginning\n");
        printf("2. Insert a name at the end\n");
        printf("3. Delete a name\n");
        printf("4. Display the list\n");
        printf("5. Reverse the list\n");
        printf("6. Count the names\n");
        printf("7. Exit\n");
        printf("Enter Your Choice:\n");
        scanf("%d", &choice);
        switch (choice) 
          {
            case 1: printf("Enter a name to insert at the beginning: ");
                scanf("%s", name);
                insertAtBeginning(&head, name);
                break;
            case 2:printf("Enter a name to insert at the end: ");
                scanf("%s", name);
                insertAtEnd(&head, name);
                break;
            case 3:printf("Enter a name to delete: ");
                scanf("%s", name);
                deleteName(&head, name);
                break;
            case 4:display(head);
                break;
            case 5:
                reverseList(&head);
                printf("List has been reversed.\n");
                break;
            case 6:printf("Number of names in the list: %d\n", countNames(head));
                break;
            case 7: exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}


