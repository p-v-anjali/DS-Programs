#include<stdio.h>
int queue[5];
int front=-1,rear=-1;
 
void enqueue()
{
	int element;
	printf("\nEnter element :");
	scanf("%d",&element);
	
	if(rear+1==5)
	{
		printf("OVERFLOW..");//Queue is full
	}

	else if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
	}
	
	else
	{
		rear++;
	}
	queue[rear]=element;
	printf("\nValue is Enqueued.");
}

void dequeue()
{
	int element;
	if(front==-1 || front>rear )
	{
		printf("UNDERFLOW..");//Queue is Empty
	}
	else
	{
		element=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
		 	front = front + 1;  
    	}  
        printf("\nValue Dequeued :%d ",element);  
	}
}

int menu()
{
	int ch;
	printf("\n1.Enqueue\n2.Dequeue\nEnter Your Choice:");
	scanf("%d",&ch);
	return ch;	
}

void process()
{
	int ch;
	for(ch=menu();ch!=4;ch=menu())
	{
		switch(ch)	
		{
			case 1:enqueue();
					break;
			case 2:dequeue(); 
			   		break;
		}
	}
}
int main()
{
	process();
	return 0;
}
