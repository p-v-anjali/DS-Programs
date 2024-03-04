#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *temp;

void insert(int element)
{
	temp=head;
	if(head == NULL)
	{
		head=(struct node *)malloc(sizeof(struct node));
		head->data=element;
		head->next=NULL;
	}
	else
	{
		
		while(temp->next!=NULL)
		{
			temp=temp->next;//traversing
		}
		temp->next=(struct node *)malloc(sizeof(struct node));
		temp->next->data=element;
		temp->next->next=NULL;
	}
}
void display()
{
	struct node *temp=head;
	if(head == NULL)
	{
		printf("Linked List is empty");
	}
	else
	{
		printf("\nLinked List Elements are: ");
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}

int menu()
{
	int ch;
	printf("\n1.Insert\n2.Display\nEnter Your Choice :");
	scanf("%d",&ch);
    return ch;
}
int main()
{
	int ch,element;
    for(ch=menu();ch!=3;ch=menu())
    {
        switch(ch)
        {
            case 1: printf("\nEnter element to insert: ");
                    scanf("%d",&element);
                    insert(element);
                    break;
            case 2: display();
                    break;
            default:exit(0);
        }
    }
    return 0;
}