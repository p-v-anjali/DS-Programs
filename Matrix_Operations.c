/*Two-dimensional matrix: using functions 
Addition
Subtraction
Multiplication
*/

#include<stdio.h>
int a[10][10],b[10][10],sum[10][10],sub[10][10],mul[10][10],r,c,i,j;
void read()
{
	printf("Enter no.of row and cols of matrix :");
	scanf("%d%d",&r,&c);
	printf("\nEnter elements of matrix 1\n");
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("\nEnter elements of matrix 2\n");
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			scanf("%d",&b[i][j]);
		}
	}	
}
void print()
{
	printf("\nMatrix 1\n");	//printing matrix 1
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix 2\n");	//printing matrix 2
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
void add()
{
	for(i=0;i<r;++i)//sum of matrix
	{
		for(j=0;j<c;++j)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}	
	printf("\nSum of Matrix \n");	//printing sum of matrix
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}
void diff()
{
	for(i=0;i<r;++i)//subtraction of matrix
	{
		for(j=0;j<c;++j)
		{
			sub[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("\nDifference of Matrix \n");//printing sub of matrix
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			printf("%d\t",sub[i][j]);
		}
		printf("\n");
	}
}
void pro()
{
	if(r==c)
	{
	for(i=0;i<r;++i)//multiplication of matrix
	{
		for(j=0;j<c;++j)
		{
			mul[i][j]=a[i][j]*b[i][j];
		}
	}
	printf("\nProduct of Matrix \n");//printing product of matrix
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	}
	else
	{
	printf("\nMatrix multiplication is not possible \n");	
	}
	
}

int main()
{
	read();
	print();
	add();
	diff();
	pro();
	return 0;
}