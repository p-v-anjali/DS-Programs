#include<stdio.h>
#include<malloc.h>

struct node{
	int data;
	node *next;
};

typedef struct node node;
node *front=NULL;
node *rear=NULL;

void enqueue(int e){
	if(front==NULL){
		front=(node*)malloc(sizeof(node));
		front->data=e;
		front->next=front;
		rear=front;
	}
	else{
		node *t;
		t=(node*)malloc(sizeof(node));
		t->data=e;
		t->next=front;
		rear->next=t;
		rear=t;
	}
}

void dequeue(){
	if(front==NULL){
		printf("\nEmpty Queue!");
	}
	else if(front->next==front){
		front=rear=NULL;
	}
	else{
		front=front->next;
		rear->next=front;
	}
}

void display(){
	if(front==NULL){
		printf("\nEmpty Queue!");
	}
	else{
		node *t=front;
		do{
			printf("%d\t",t->data);
			t=t->next;
		}while(t!=front);
	}
}

int menu(){
	int ch;
	printf("\nMenu\n_______\n[1] ENQUEUE\n[2] DEQUEUE\n[3] DISPLAY\n[4] EXIT\nEnter your choice: ");
	scanf("%d",&ch);
	return ch;
}

int main(){
	int ch,e;
	for(ch=menu();ch!=4;ch=menu()){
	switch(ch){
		case 1: printf("\nEnter element to insert: ");
			scanf("%d",&e);
			enqueue(e);
			break;
		case 2: dequeue();
			break;
		case 3: display();
			break;
		default:printf("Invalid Entry!");
			break;
		}
	}
	return 0;
}