#include<stdio.h>
#include<string.h>
#include<malloc.h>

struct node{
	char data[20];
	struct node *next;
	struct node *prev;
};

typedef struct node node;
node *head=NULL;

void insert(char str[]){
	if(head==NULL){
		head=(node*)malloc(sizeof(node));
		strcpy(head->data,str);
		head->next=head;
		head->prev=head;
	}
	else{
		node *t=head;
		do{
			t=t->next;
		}while(t->next!=head);
		t->next=(node*)malloc(sizeof(node));
		strcpy(t->next->data,str);
		t->next->next=head;
		t->next->prev=t;
		head->prev=t;
	}
}

void delete_spec(char str[]){
	if(head==NULL){
		printf("\nEmpty Linked List!");
	}
	else if(strcmp(head->data,str)==0 && head->next==head){
		head=NULL;
	}
	else if(strcmp(head->data,str)==0){
		node *t=head;
		do{
			t=t->next;
		}while(t->next!=head);
		head->next->prev=t;
		head=head->next;
		t->next=head;
	}
	else{
		node *t=head;
		do{
			if(strcmp(t->data,str)==0){
				t->next->prev=t->prev;
				t->prev->next=t->next;
				break;
			}
			t=t->next;
		}while(t!=head);
		if(t==head)
			printf("\nElement Not Found!");
	}
}

void display(){
	if(head==NULL){
		printf("\nEmpty Linked List!");
	}
	else{
		node *t=head;
		do{
			printf("%s\t",t->data);
			t=t->next;
		}while(t!=head);
	}
}

int menu(){
	int ch;	
	printf("\nMenu\n_______\n[1] INSERT\n[2] DELETE\n[3] DISPLAY\n[4] EXIT\nEnter your choice: ");
	scanf("%d",&ch);
	return ch;
}

int main(){
	int ch;
	char str[20];
	for(ch=menu();ch!=4;ch=menu()){
		switch(ch){
			case 1: printf("\nEnter a string: ");
				scanf("%s",str);
				insert(str);
				break;
			case 2: printf("\nEnter string to delete: ");
				scanf("%s",str);
				delete_spec(str);
				break;
			case 3: display();
				break;
			default:printf("Invalid Entry!");
				break;
		}
	}
	return 0;
}