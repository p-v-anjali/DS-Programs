#include<stdio.h>
#include<malloc.h>
int main()
{
	int n,*p,i,j,count,mode,s;
	printf("Enter th value for n :");
	scanf("%d",&n);
	p=(int *) calloc(sizeof (int),n);
	printf("Enter values :");
	for(i=0;i<n;++i)
	{
		printf("\np[%d]",i);
		scanf("%d",p+i);
	}
	printf("\nThe values are :");
	for(i=0;i<n;++i)
	{
		printf("%d\t",p[i]);
		for(j=0;j<n;++j)
		{
			count=0;
			if(p[i]==p[j] && i!=j)
			{
				count++;
			}
			if(count>s)
			{
				s=count;
				mode=p[j];
			}
		}
	}
	printf("\nMode=%d",mode);
	free(p);
	return 0;
}