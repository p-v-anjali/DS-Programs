#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head = NULL;
void insert(int e)
{
	struct node *t;
	if(head == NULL)
	{
		head=(struct node*)malloc(sizeof(struct node));
		head->data=e;
		head->next=head;
	}
	else
	{
		t=head;
		while(t->next!=head)
		{
			t=t->next;	
		}
		t->next=(struct node*)malloc(sizeof(struct node));
		t->next->data=e;
		t->next->next=head;
	}
}

void display()
{
	struct node *t;
	if(head == NULL)
	{
		printf("Linked list is empty");
	}
	else
	{
		t=head;
		printf("\n");
		do
		{
			printf("%d\t",t->data);
			t=t->next;
		}
		while(t!=head);
	}
}11

void delete(int e)
{
	struct node *t;
	if(head == NULL)
	{
		printf("Linked list is empty"); //CASE 1:When list is empty.
	}
	else if(head->data == e && head->next==head)
	{
		head=NULL; //CASE 2 : First element with one in the list.
	}
	else if(head->data == e)//CASE 3 : First element with several elements in the list.
	{
		t=head;
		while(t->next != head)
		{
			t=t->next;
		}
		
		t->next=head->next;
		head=head->next;
	}
	else
	{
		t=head;
		while(t->next != head && t->next->data != e)
		{
			t=t->next;
		}
		if(t->next == head)
		{
			printf("Element not found");
		}
		else
		{
			t->next=t->next->next;
		}
	}
}
int main()
{
	insert(1);
	insert(2);
	insert(3);
	display();
	delete(1);
	display();
}