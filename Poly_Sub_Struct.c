#include<stdio.h>
int i;
struct poly {
	int coeff1,coeff2,coeff3;
};
struct poly p[10];
void read(int degree) {
	printf("Enter the elements of 1st polynomial: \n");
	for(i=degree;i>=0;i--) {
		if(i==0) {
			printf("Enter the constant term:",i);
			scanf("%d",&p[i].coeff1);
		}
		else {
			printf("Enter the coefficient of x^%d:",i);
			scanf("%d",&p[i].coeff1);
		}
	}	
	printf("\nEnter the elements of 2nd polynomial: \n");
	for(i=degree;i>=0;i--) {
		if(i==0) {
			printf("Enter the constant term:",i);
			scanf("%d",&p[i].coeff2);
		}
		else {
			printf("Enter the coefficient of x^%d:",i);
			scanf("%d",&p[i].coeff2);
		} }  }
void disp(int degree) {
	printf("\n1st Polynomial:");
	for(i=degree;i>=0;i--) {
		if(i==0) {
			printf("%d",p[i].coeff1);
		}
		else {
			printf("%dx^%d+",p[i].coeff1,i);
		}  }
	printf("\n2nd Polynomial:");
	for(i=degree;i>=0;i--) {
		if(i==0) {
			printf("%d",p[i].coeff2);
		}
		else {
			printf("%dx^%d+",p[i].coeff2,i);
		}  }  }
void sub(degree)
{
	printf("\n\nSubtracting 1st and 2nd polynomial:");
	for(i=degree;i>=0;i--)
	{
		p[i].coeff3=p[i].coeff1-p[i].coeff2;
	}
	for(i=degree;i>=0;i--)
	{
		if(i==0)
		{
			printf("%d",p[i].coeff3);
			break;
		}	
		printf("%dx^%d+",p[i].coeff3,i);
	}
}
int main()
{
	int degree;
	printf("Enter the degree of the polynomial: ");
	scanf("%d",&degree);
	read(degree);
	disp(degree);
	sub(degree);
}
