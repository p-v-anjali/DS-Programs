#include<stdio.h>
#include<stdlib.h>
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

void delete_beg()
{
	if(head == NULL)
	{
		printf("Linked List is empty");
	}
	else
	{
		head=head->next;
	}
}

void delete_end()
{
	temp=head;
	if(head == NULL)
	{
		printf("Linked List is empty");
	}
	else if(head->next=NULL)//
	{
		head=head->next;
	}
	else
	{
		while(temp->next->next!=NULL)	
		{
			temp=temp->next;
		}
		temp->next=NULL;
	}
}

void delete_pos(int e)
{
	temp=head;
	int flag=0;
	if(head == NULL)
	{
		printf("Linked List is empty");
	}
	else if(head->data==e)//
    {
        head=head->next;
    }
	else
    {
        while(temp->next!=NULL)
        {
            if(temp->next->data==e)
            {
                temp->next=temp->next->next;
                flag=1;
                break;
            }
            temp=temp->next;
        }
        if(flag==0)
            printf("Entered element not found!");
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
    printf("\n1.Insert\n2.Delete From Begining\n3.Delete From End\n4.Delete From Specific Position\n5.Display\n6.Exit\nEnter your choice: ");
    scanf("%d",&ch);
    return ch;
}

int main()
{
    int ch,e;
    for(ch=menu();ch!=6;ch=menu())
    {
        switch(ch)
        {
            case 1: printf("\nEnter element to insert: ");
                    scanf("%d",&e);
                    insert(e);
                    break;
            case 2: delete_beg();
                    break;
            case 3: delete_end();
                    break;
            case 4: printf("\nEnter element to delete: ");
                    scanf("%d",&e);
                    delete_pos(e);
                    break;
            case 5: display();
                    break;
            default:printf("Invalid Entry!");
                    break;
        }
    }
    return 0;
}