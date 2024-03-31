#include<stdio.h>
#include<stdlib.h>

struct node{
	int expo;
	int coeff;
	struct node *next;
};

typedef struct node node;
node *head_1 = NULL;
node *head_2 = NULL;
node *head_sum = NULL;
node *head_pro = NULL;

node *insert(node *head, int expo, int coeff){
	if(head==NULL){
		head=(node*)malloc(sizeof(node));
		head->expo=expo;
		head->coeff=coeff;
		head->next=NULL;
	}
	else{
		node *t;
		t=head;
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=(node*)malloc(sizeof(node));
		t->next->expo=expo;
		t->next->coeff=coeff;
		t->next->next=NULL;
	}
	return head;
}

void sort(node* head){
	node *c, *n, *x;
	int temp;
	x=head;
	while(x->next!=NULL){
		c=head;
		while(c->next!=NULL){
			n=c->next;
			if(c->expo<n->expo){
				temp=c->expo;
				c->expo=n->expo;
				n->expo=temp;
				temp=c->coeff;
				c->coeff=n->coeff;
				n->coeff=temp;
			}
			c=c->next;
		}
		x=x->next;
	}
}

void expression_display(int expo, int coeff){
	if(expo>1)
		printf(" %dx^%d ",coeff,expo);
	else if(expo==1)
		printf(" %dx ",coeff);
	else if(expo==0)
		printf(" %d ",coeff);
	else if(expo==-1)
		printf(" %d/x ",coeff);		
	else
		printf(" %d/x^%d ",coeff,expo);
}

void display(node *head){
	node *t;
	t=head;
	sort(head);
	while(t!=NULL){
		if(t==head){
			expression_display(t->expo,t->coeff);
		}
		else{
			if(t->coeff>0){
				printf("+");
				expression_display(t->expo,t->coeff);	
			}
			else if(t->coeff<0){
				printf("-");
				expression_display(t->expo,-t->coeff);
			}
		}
		t=t->next;
	}
}

node *read(node *head){
	int expo, coeff, terms, i;
	printf("\nEnter number of terms in polynomial: ");
	scanf("%d",&terms);
	for(i=0; i<terms;i++){
		printf("\nEnter Term %d.\nExponent: ",i+1);
		scanf("%d",&expo);
		printf("Coefficient: ");
		scanf("%d",&coeff);
		head=insert(head,expo,coeff);
	}
	return head;
}

void add(){
	node *t1,*t2,*tsum;
	t1=head_1;
	t2=head_2;
	while(t1!=NULL){
		if(head_sum==NULL){
			head_sum=(node*)malloc(sizeof(node));
			head_sum->expo=t1->expo;
			head_sum->coeff=t1->coeff;
			head_sum->next=NULL;
			tsum=head_sum;
		}
		else{
			tsum->next=(node*)malloc(sizeof(node));
			tsum->next->expo=t1->expo;
			tsum->next->coeff=t1->coeff;
			tsum->next->next=NULL;
			tsum=tsum->next;
		}
		t1=t1->next;
	}
	while(t2!=NULL){
		tsum->next=(node*)malloc(sizeof(node));
		tsum->next->expo=t2->expo;
		tsum->next->coeff=t2->coeff;
		tsum->next->next=NULL;
		tsum=tsum->next;
		t2=t2->next;
	}
	sort(head_sum);
	tsum=head_sum;
	while(tsum->next!=NULL){
		if(tsum->expo==tsum->next->expo){
			tsum->coeff=tsum->coeff+tsum->next->coeff;
			tsum->next=tsum->next->next;
		}
		else{
			tsum=tsum->next;
		}
	}
}

void multiply(){
	node *t1, *t2, *tpro;
	t1=head_1;
	while(t1!=NULL){
		t2=head_2;
		while(t2!=NULL){
			if(head_pro==NULL){
				head_pro=(node*)malloc(sizeof(node));
				head_pro->expo=t1->expo+t2->expo;
				head_pro->coeff=t1->coeff*t2->coeff;
				head_pro->next=NULL;
				tpro=head_pro;
			}
			else{
				tpro->next=(node*)malloc(sizeof(node));
				tpro->next->expo=t1->expo+t2->expo;
				tpro->next->coeff=t1->coeff*t2->coeff;
				tpro->next->next=NULL;
				tpro=tpro->next;
			}
			t2=t2->next;
		}
		t1=t1->next;
	}
	sort(head_pro);
	tpro=head_pro;
	while(tpro->next!=NULL){
		if(tpro->expo==tpro->next->expo){
			tpro->coeff=tpro->coeff+tpro->next->coeff;
			tpro->next=tpro->next->next;
		}
		else{
			tpro=tpro->next;
		}
	}	
}

int main(){
	printf("\nEnter First Polynomial Expression: ");
	head_1=read(head_1);
	printf("\nEnter Second Polynomial Expression: ");
	head_2=read(head_2);
	printf("\nFirst Polynomial Expression: ");
	display(head_1);
	printf("\nSecond Polynomial Expression: ");	
	display(head_2);
	add();
	printf("\nSum of Polynomials is: ");	
	display(head_sum);
	multiply();
	printf("\nProduct of Polynomials is: ");	
	display(head_pro);
}