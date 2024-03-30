#include<stdio.h>

int read(int ar[], int n,int i){
	printf("\nEnter the number of elements in array(<11): ");
	scanf("%d",&n);
	printf("\nEnter array elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	return n;
}

void search(int ar[],int n, int i){
	int sar[n],flag=0,e;
	printf("\nEnter element to search: ");
	scanf("%d",&e);
	for(i=0;i<n;i++){
		if(ar[i]==e){
			sar[flag]=i+1;
			flag++;
		}
	}
	if(flag==0){
		printf("Element not found!");
	}
	else{
		printf("\nElement found %d times at postions: ",flag);
		for(i=0;i<flag;i++){
			printf(" %d ",sar[i]);
		}
	}
}

int main(){
	int ar[10],n,i;
	n=read(ar,n,i);
	search(ar,n,i);
	return 0;
}