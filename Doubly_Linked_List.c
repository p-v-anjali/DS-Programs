#include<stdio.h>
#include<malloc.h>

struct node{
	int data;
	struct node *next;
	struct node *prev;
};

typedef struct node node;
node *head=NULL;

void insert(int e){
	if(head==NULL){
		head=(node*)malloc(sizeof(node));
		head->data=e;
		head->next=NULL;
		head->prev=NULL;
	}
	else{
		node *t=head;
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=(node*)malloc(sizeof(node));
		t->next->data=e;
		t->next->next=NULL;
		t->next->prev=t;
	}
}

void delete_spec(int e){
	if(head==NULL){
		printf("\nEmpty Linked List!");
	}
	else if(head->data==e && head->next==NULL){
		head=NULL;
	}
	else if(head->data==e){
		head->next->prev=NULL;
		head=head->next;
	}
	else{
		node *t=head;
		while(t!=NULL){
			if(t->data==e && t->next==NULL){
				t->prev->next=NULL;
				break;
			}
			else if(t->data==e){
				t->prev->next=t->next;
				t->next->prev=t->prev;
				break;
			}
			t=t->next;
		}
		if(t==NULL){
			printf("\nElement Not Found!");
		}
	}
}

void display(){
	if(head==NULL){
		printf("\nEmpty Linked List!");
	}
	else{
		node *t=head;
		while(t!=NULL){
			printf("%d\t",t->data);
			t=t->next;
		}
	}
}

int menu(){
	int ch;
	printf("\nMenu\n_______\n[1] INSERT\n[2] DELETE\n[3] DISPLAY\n[4] EXIT\nEnter your choice: ");
	scanf("%d",&ch);
	return ch;
}

int main(){
	int ch,e;
	for(ch=menu();ch!=4;ch=menu()){
		switch(ch){
			case 1: printf("\nEnter element to insert: ");
				scanf("%d",&e);
				insert(e);
				break;
			case 2: printf("\nEnter element to delete: ");
				scanf("%d",&e);
				delete_spec(e);
				break;
			case 3: display();
				break;	
			default:printf("Invalid Entry!");
				break;
		}
	}
	return 0;
}