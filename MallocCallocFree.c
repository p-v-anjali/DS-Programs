#include<stdio.h>
#include<malloc.h>
int main(){
	int *a,*b,n,i;
	a=(int *) malloc (sizeof (int));
	printf("Enter a value :"); scanf("%d",a);
	printf("a=%d",*a);
	printf("\nmalloc Successful!!\n");
	printf("\nEnter n :"); scanf("%d",&n);
	printf("Enter %d elements\n",n);
	b=(int *) calloc(sizeof (int),n);
	for(i=0;i<n;++i) {
		scanf("%d",&b[i]);
	}
	printf("Elements are :");
	for(i=0;i<n;++i)  {
		printf("%d \t",b[i]);
	}
	printf("\ncalloc Successful!!");
	free(a);  free(b);
	return 0;
}
