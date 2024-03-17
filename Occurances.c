//Search for all the occurrences of an element in an integer array (positions) 

#include<stdio.h>
int a[20];
int main()
{
	int n,num,i;
	printf("Enter the no.of elements : ");
	scanf("%d",&n);
	printf("\nEnter %d numbers\n",n);
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe numbers are\n",n);
	for(i=0;i<n;++i)
	{
		printf("%d\n",a[i]);
	}
	int count=0;
	printf("Enter the no to find its occurances : ");
	scanf("%d",&num);
	for(i=0;i<n;++i)
	{
		if(a[i]==num)
		{
			count+=1;
		}
	}
	printf("The no.of occurances of %d is %d",num,count);
	return 0;
}