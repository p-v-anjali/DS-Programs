/*Two-dimensional matrix: using functions 
Transpose*/

#include<stdio.h>
int a[10][10],trans[10][10],r,c,i,j,det=0;
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

}
void transpose()
{
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			trans[j][i]=a[i][j];
			
		}
	}
	printf("\n Transpose of Matrix matrix \n");//printing Transpose of matrix
	for(i=0;i<c;++i)
	{
		for(j=0;j<r;++j)
		{
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}
	}
int main()
{
	read();
	print();
	transpose();

	return 0;
}