#include<stdio.h>
int read(int a[],int n,int size)
{
	if(n==size-1)
	{
		printf("\narray is full\n");
	}
	else {
		n++;
		printf("\nenter a[%d] : ",n);
		scanf("%d",&a[n]);
	}
	return n;
}
void disp(int a[],int n)
{
	int i;
	if(n==-1)
	{
		printf("\narray is empty");
	}
	else{
		printf("\n");
		for(i=0;i<=n;i++)
		{
			printf("%d\t",a[i]);
		}
	}
	printf("\n");
}
int search(int a[],int n,int s)
{
	int i;
	int f=-1;
	for(i=0;i<=n;i++){
		if(a[i]==s){
			f=i;
			break;
		}
	}
	return f;
}
int delete(int a[],int n,int p)
{
	int i;
	for(i=p;i<=n;i++){
		a[i]=a[i+1];
	}
	n--;
	return n;
}
void sort(int a[],int n)
{
	int i,j,t;
	if(n==-1)
	{
		printf("\narray is empty\n");
	}
	else{
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("\nsorted array\n\n");
		for(i=0;i<=n;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\n");
	}
}
int main()
{
	int a[10];
	int size;
	int n=-1;
	int ch,pos,s,d,p;
	printf("enter the size of the array : ");
	scanf("%d",&size);
	do
	{
		printf("\n1.read.\n2.display.\n3.search.\n4.delete.\n5.sort.\n6.quit.\n\nenter ur choice : ");

		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				n=read(a,n,size);
				break;
			case 2:
				disp(a,n);
				break;
			case 3:
				printf("\nenter the no to be searched : ");
				scanf("%d",&s);
				pos=search(a,n,s);
					if(pos==-1){
						printf("\nnot found..\n");
					}
					else{
						printf("\nthe searched element is found at position %d\n",pos);
					}
				break;
			case 4:
				printf("\nenter the no. to be deleted : ");
				scanf("%d",&d);
				p=search(a,n,d);
				if(p==-1)
				{
					printf("\nnot found..\n");
					}
				else
				{
					n=delete(a,n,p);
					printf("\nthe no. %d at position %d is deleted\n",d,p);
				}
				break;
			case 5:
				sort(a,n);
				break;
			case 6: 
				break;
				default :
				printf("\nwrong choice...\n");
		}
	}
	while(ch!=6);
	return 0;
}


