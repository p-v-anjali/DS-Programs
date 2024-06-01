#include<stdio.h>
struct poly	{
	int coeff;
	int expo;
};
int read(struct poly p[]) {
	int i,n;
	printf("\nEnter the number of terms in the Polynomial expression: ");
	scanf("%d",&n);
	printf("\nEnter a polynomial expression:\n");
	for(i=0;i<n;i++)	{
		printf("\nEnter term %d",i+1);
		printf("\nCoefficient: ");
		scanf("%d",&p[i].coeff);
		printf("Exponent: ");
		scanf("%d",&p[i].expo);
	}
	return n;
}
void sort(struct poly p[], int n) {
    int i,j;
	struct poly temp;
	for(i=0;i<n;i++) {
		for(j=0;j<n-i-1;j++) {
			if(p[j].expo<p[j+1].expo) { 
			    temp=p[j];
			    p[j]=p[j+1];
			    p[j+1]=temp;
	}  }   }  }
void disp(struct poly p[], int n) {
	int i;
	sort(p,n);
	printf("\n\nPolynomial Expression : ");
	for(i=0;i<n;i++) {
        if(p[i].expo==0)   {
            if(p[i].coeff<0)
	            printf(" - %d",-p[i].coeff);
	        else if(p[i].coeff>0) {
                if(i==0)
                    printf("%d",p[i].coeff);
	            else
	                printf(" + %d",p[i].coeff);   
	        }  }
        else if(p[i].expo>0)  {
	        if(p[i].coeff<0)
	            printf(" - %dx^%d",-p[i].coeff,p[i].expo);
		    else if(p[i].coeff>0) {
		        if(i==0)
	                printf("%dx^%d",p[i].coeff,p[i].expo);
	            else
	                printf(" + %dx^%d",p[i].coeff,p[i].expo);
		    }
	    }
	    else 
	    {
	        if(p[i].coeff<0)
		        printf(" - %d/x^%d",-p[i].coeff,-p[i].expo);
		    else if(p[i].coeff>0)
		    {
		        if(i==0)
	                printf("%d/x^%d",p[i].coeff,-p[i].expo);
	            else
	                printf(" + %d/x^%d",p[i].coeff,-p[i].expo);
		    }
	    }
	}
}
void main()
{
	struct poly p[10];
	int n;
	n=read(p);
	disp(p,n);
}
