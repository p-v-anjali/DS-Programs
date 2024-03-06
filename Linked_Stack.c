
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node stack;
stack *top;

void push(int e)
{
	stack *t=(stack*)malloc(sizeof(stack)); //Allocate memory to new node
	t->data=e; //Copy the data element to new node
	t->next=top; //Make the next of new node as current top
	top=t; //Assign the new node address to top
	printf("Element Inserted");
}

void pop()
{
	if(top == NULL)
	{
		printf("Linked Stack is empty");
	}
	else
	{
		printf("Popped element : %d\n",top->data);
		top=top->next;
	}
}

void peek()
{
	if(top == NULL)
	{
		printf("Linked Stack is empty");
	}
	else
	{
		printf("Element on top of Linked stack : %d",top->data);
	}	
}

int menu()
{
	int ch;
	printf("\n\n1.Push\n2.Pop\n3.Peek\n4.Exit\n");
	printf("Enter Choice:");
	scanf("%d",&ch);
	return ch;
}

void process()
{
	int ch,e;
	for(ch=menu();ch!=4;ch=menu())	
	{
		switch(ch)
		{
			case 1: printf("Enter element to be inserted:");
					scanf("%d",&e);
					push(e);
					break;
			case 2: pop();
					break;
			case 3: peek();
					break;
			case 4: exit(0);
					break;
		}
	}
}

int main()
{
	process();
	return 0;
}
