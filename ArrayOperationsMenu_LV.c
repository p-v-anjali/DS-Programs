#include<stdio.h>

int insert(int ar[],int pos,int e,int i){
	if(pos==9){
		printf("\nARRAY IS FULL!");
	}
	else{
		printf("\nEnter element to insert: ");
		scanf("%d",&e);
		ar[++pos]=e;
	}
	printf("\nARRAY : ");
	for(i=0;i<=pos;i++){
		printf("%d\t",ar[i]);
	}
	return pos;
}

int del(int ar[],int pos){
	if(pos==-1){
		printf("\nARRAY IS EMPTY!");
	}
	else{
		printf("\n Deleted element is: %d",ar[pos]);
		pos--;
	}
	return pos;
}

void search(int ar[],int pos,int e,int i){
	int flag=0;
	printf("\nEnter element to search: ");
	scanf("%d",&e);
	for(i=0;i<=pos;i++){
		if(ar[i]==e){
			printf("\nElement found at postion %d!",i+1);
			flag=1;
		}
	}
	if(flag==0){
		printf("Element not found!");
	}
}

void sort(int ar[],int pos,int i)
{
	int temp,j;
	for(i=0;i<=pos;i++){
		for(j=0;j<=pos-i-1;j++){
			if(ar[j]>=ar[j+1]){
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	printf("\nSORTED ARRAY : ");
	for(i=0;i<=pos;i++){
		printf("%d\t",ar[i]);
	}
}

int menu(int e){
	printf("\n\nMENU\n______\n[1] Insert\n[2] Delete\n[3] Search \n[4] Sort \n[5] Exit\n______");
	printf("\nEnter your choice: ");
	scanf("%d",&e);
	return e;	
}

int main(){
	int ar[10],pos=-1,e,i;
	int ch;
	for(ch=menu(e);ch!=5;ch=menu(e)){
		switch(ch){
			case 1:
				pos=insert(ar,pos,e,i);
				break;
			case 2:
				pos=del(ar,pos);
				break;
			case 3:
				search(ar,pos,e,i);
				break;
			case 4:
				sort(ar,pos,i);
				break;
			default:
				printf("INVALID ENTRY!");
				break;
		}
	}
	return 0;
}