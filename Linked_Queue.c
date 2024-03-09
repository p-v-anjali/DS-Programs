#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node queue;

queue *front=NULL;
queue *rear=NULL;

void enqueue(int e)
{
	queue *t = (queue *)malloc(sizeof(queue));
	t->data=e;
	t->next=NULL;
	if(front == NULL)
	{
		front = t;
		rear = t;
	}
	else
	{
		rear->next = t;
		rear = t;
	}
}

void dequeue()
{
	if(front==NULL)
		printf("Queue Empty\n");
	else
	{
		printf("%d\n",front->data);
		front = front->next;
		if(front == NULL)
			rear=NULL;
	}
}

void display()
{
	if(front==NULL)
		printf("Empty Queue\n");
	else
	{
		queue *t=front;
		while(t != NULL)
		{
			printf("%d\t",t->data);
			t=t->next;
		}
	}
}


int menu()
{
    int ch;
    printf("\nEnqueue - 1\nDequeue - 2\nDisplay - 3\nExit - 4\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    return ch;
}

void main()
{
    int i,ch,a;
    for(ch = menu();ch != 4;ch = menu())
    {
        switch(ch)
        {
            case 1 : printf("Enter an element to insert : ");
            		 scanf("%d",&a);
					 enqueue(a);
                     break;
            case 2 : dequeue();
                     break;
            case 3 : display();
                     break;
            default : printf("Wrong Choice!!!\n");
                      break;
        };
    }
}