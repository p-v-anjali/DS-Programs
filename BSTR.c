#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node node;
node *root=NULL;
void insert(int e) {
    if(root==NULL){
        root=(node*)malloc(sizeof(node));
        root->data=e;
        root->left=NULL;
        root->right=NULL;
    }
    Else {
        node *p,*c;
        c=root;
        while(c!=NULL){
            p=c;
            if(c->data > e){
                c=c->left;
            }
            else{
                c=c->right;
            }
        }
        if(p->data > e) {
            p->left=(node*)malloc(sizeof(node));
            p->left->data=e;
            p->left->left=NULL;
            p->left->right=NULL;
        }
        else {
            p->right=(node*)malloc(sizeof(node));
            p->right->data=e;
            p->right->left=NULL;
            p->right->right=NULL;
        }
    }
}
void inorder(node *t)
{
    if(root==NULL)
        printf("\nEmpty Tree!");
    else
	{
        if(t!=NULL)
		{
            inorder(t->left);
            printf("%d\t",t->data);
            inorder(t->right);
        }
    }
}
void preorder(node *t)
{
    if(root==NULL)
        printf("\nEmpty Tree!");
    else{
        if(t!=NULL) {
            printf("%d\t",t->data);
            preorder(t->left);
            preorder(t->right);
        }  }  }
void postorder(node *t) {
    if(root==NULL)
        printf("\nEmpty Tree!");
    else{
        if(t!=NULL) {
            postorder(t->left);
            postorder(t->right);
            printf("%d\t",t->data);
        }
    }
}
int menu() {
    int ch;
    printf("\nMENU\n----\n1.INSERT\n2.INORDER\n3.PREORDER\n4.POSTORDER\n5.EXIT\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    return ch;
}
int main() {
    int ch,e;
    for(ch=menu();ch!=5;ch=menu()) {
        switch(ch) {
            case 1: printf("\nEnter element to insert: ");
                    scanf("%d",&e);
                    insert(e);
                    break;
            case 2: printf("\nInorder Traversal: ");
                         inorder(root); break;
      	case 3:	printf("\nPreorder Traversal: ");
      		 preorder(root); break;
            case 4:	printf("\nPostorder Traversal: ");
                        postorder(root);     break;       
            default:printf("Invalid Entry!");
                    break;
        } 
    }
    return 0;
}

#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node node;
node *root=NULL;
void insert(int e) {
    if(root==NULL){
        root=(node*)malloc(sizeof(node));
        root->data=e;
        root->left=NULL;
        root->right=NULL;
    }
    Else {
        node *p,*c;
        c=root;
        while(c!=NULL){
            p=c;
            if(c->data > e){
                c=c->left;
            }
            else{
                c=c->right;
            }
        }
        if(p->data > e) {
            p->left=(node*)malloc(sizeof(node));
            p->left->data=e;
            p->left->left=NULL;
            p->left->right=NULL;
        }
        else {
            p->right=(node*)malloc(sizeof(node));
            p->right->data=e;
            p->right->left=NULL;
            p->right->right=NULL;
        }
    }
}
void inorder(node *t)
{
    if(root==NULL)
        printf("\nEmpty Tree!");
    else
	{
        if(t!=NULL)
		{
            inorder(t->left);
            printf("%d\t",t->data);
            inorder(t->right);
        }
    }
}
void preorder(node *t)
{
    if(root==NULL)
        printf("\nEmpty Tree!");
    else{
        if(t!=NULL) {
            printf("%d\t",t->data);
            preorder(t->left);
            preorder(t->right);
        }  }  }
void postorder(node *t) {
    if(root==NULL)
        printf("\nEmpty Tree!");
    else{
        if(t!=NULL) {
            postorder(t->left);
            postorder(t->right);
            printf("%d\t",t->data);
        }
    }
}
int menu() {
    int ch;
    printf("\nMENU\n----\n1.INSERT\n2.INORDER\n3.PREORDER\n4.POSTORDER\n5.EXIT\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    return ch;
}
int main() {
    int ch,e;
    for(ch=menu();ch!=5;ch=menu()) {
        switch(ch) {
            case 1: printf("\nEnter element to insert: ");
                    scanf("%d",&e);
                    insert(e);
                    break;
            case 2: printf("\nInorder Traversal: ");
                         inorder(root); break;
      	case 3:	printf("\nPreorder Traversal: ");
      		 preorder(root); break;
            case 4:	printf("\nPostorder Traversal: ");
                        postorder(root);     break;       
            default:printf("Invalid Entry!");
                    break;
        } 
    }
    return 0;
}

