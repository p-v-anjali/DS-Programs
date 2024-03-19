#include<stdio.h>
#include<malloc.h>
int main()
{
	int *a,*b,n,i;
	a=(int *) malloc (sizeof (int));
	printf("Enter a value :");
	scanf("%d",a);
	printf("a=%d",*a);
	printf("\nEnter n :");
	scanf("%d",&n);
	b=(int *) calloc(sizeof (int),n);
	for(i=0;i<n;++i)
	{
		printf("\nEnter b[%d]",i);
		scanf("%d",&b[i]);//b+i no need for '&' then
	}
	for(i=0;i<n;++i)
	{
		printf("%d\t",b[i]);
	}
	free(a);
	free(b);
	return 0;
}