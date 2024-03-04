#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *temp;
//struct node *temp2;

void insert_beg(int e)
{
	if(head == NULL)
	{
		head=(struct node *)malloc(sizeof(struct node));
		head->data=e;
		head->next=NULL;
	}
	else
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=e;
		temp->next=head;
		head=temp;
	}
}

void insert_end(int e)
{
	if(head == NULL)
	{
		head=(struct node *)malloc(sizeof(struct node));
		head->data=e;
		head->next=NULL;
	}
	else
	{
		while(temp->next != NULL)
		{
			temp=temp->next;
		}
		temp->next=(struct node *)malloc(sizeof(struct node));
		temp->next->data=e;
		temp->next->next=NULL;
	}
}

void insert_pos(int after,int e)
{
	struct node *temp2;
	int flag=0;
	if(head == NULL)
	{
		 printf("\nNo elements in Linked List!");	
	}
	else
	{
		while(temp!=NULL)
		{
			if(temp->data==after)
			{
				temp2=(struct node *)malloc(sizeof(struct node));
				temp2->data=e;
				temp2->next=temp->next;
				flag=1;
				break;
			}
			temp=temp->next;
		}
		if(flag == 0)
		printf("Entered element not found");
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
    printf("\n1.Insert At Beginning\n2.Insert At End\n3.Insert At Specific Position\n4.Display\n5.Exit\nEnter your choice: ");
    scanf("%d",&ch);
    return ch;
}

int main()
{
	
int ch,after,e;
    for(ch=menu();ch!=5;ch=menu())
    {
        switch(ch)
        {
            case 1: printf("\nEnter element to insert: ");
                    scanf("%d",&e);
                    insert_beg(e);
                    break;
            case 2: printf("\nEnter element to insert: ");
                    scanf("%d",&e);
                    insert_end(e);
                    break;
            case 3: printf("\nEnter element after which new element is to be inserted: ");
                    scanf("%d",&after);
                    printf("\nEnter element to insert: ");
                    scanf("%d",&e);
                    insert_pos(after,e);
                    break;
            case 4: display();
                    break;
            default:printf("Invalid Entry!");
                    break;
        }
    }
    return 0;
}