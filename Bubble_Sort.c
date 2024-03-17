//Sort the array elements in ascending order (minimum three functions: read, disp and sort) 

#include<stdio.h>
int a[10],i,n;
void read()
{
	printf("Enter the no.of elements to be inserted : ");
	scanf("%d",&n);
	printf("\nEnter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}			
}
void disp()
{
	printf("\nThe elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}	
}
void sort()
{
	int j,temp;
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nSorted array \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
}
int main()
{
	read();
	disp();
	sort();	
	return 0;
}