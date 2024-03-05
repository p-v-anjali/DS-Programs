#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node *node;
node head=NULL;
void insert(int e)
{
    node t=head;
    if(head==NULL)
    {
        head=(node)malloc(sizeof(struct node));
        head->data=e;
        head->next=NULL;
    }
    else
    {
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=(node)malloc(sizeof(struct node));
        t->next->data=e;
        t->next->next=NULL;
    }
}
void reverse()
{
    node t,t1,t2;
    t=head;
    if(head==NULL)
    {
        printf("Empty Linked List!");
    }
    else
    {
        while(t!=NULL)
        {
            if(t==head)
            {
                t1=head;
                t=t->next;
            }
            else
            {
                t2=t->next;
                t->next=t1;
                t1=t;
                t=t2;
            }
        }
        head->next=NULL;
        head=t1;
    }
}
void display()
{
    node t=head;
    if(head==NULL)
    {
        printf("Empty Linked List!");
    }
    else
    {
        printf("\nLinked List Elements are: ");
        while(t!=NULL)
        {
            printf("%d\t",t->data);
            t=t->next;
        }    
    }
}
int menu()
{
    int ch;
    printf("\nMenu\n_______\n[1] Insert\n[2] Display\n[3] Reverse\n[4] Exit\nEnter your choice: ");
    scanf("%d",&ch);
    return ch;
}
int main()
{
    int ch,e;
    for(ch=menu();ch!=4;ch=menu())
    {
        switch(ch)
        {
            case 1: printf("\nEnter element to insert: ");
                    scanf("%d",&e);
                    insert(e);
                    break;
            case 2: display();
                    break;
            case 3: reverse();
                    break;
            default:printf("Invalid Entry!");
                    break;
        }
    }
    return 0;
}