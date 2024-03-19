#include<stdio.h>
#include<malloc.h>
int main()
{
	int n,*p,i,sum=0,Mean=0;
	printf("Enter the value for n :")	;
	scanf("%d",&n);
	p=(int *) malloc(sizeof (int)*n);
	printf("\nEnter values :");
	for(i=0;i<n;++i)
	{
		printf("\n p[%d] :",i);
		scanf("%d",&p[i]);//p+i no need for '&' then
	}
	printf("\nThe values are :");
	for(i=0;i<n;++i)
	{
		printf("%d\t",p[i]);	
	}
	for(i=0;i<n;++i)
	{
		sum=sum+p[i];
	}
	Mean=sum/n;
	printf("\n\nMean of the Observation = %d",Mean);
	free(p);
	return 0;
}
