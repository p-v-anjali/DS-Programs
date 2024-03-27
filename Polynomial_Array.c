//Read a polynomial and display it use array

#include <stdio.h>
struct term
{
 int coef;
 int exp;
};
typedef struct term poly;
int main()
{
 poly p[5];
 int i,n;
 printf("Enter the no of terms");
 scanf("%d",&n);
 for(i = 0;i < n;i++)
 {
 printf("Enter a coefficient and exponent");
 scanf("%d%d",&p[i].coef,&p[i].exp);
 }
 for(i = 0;i < n-1;i++)
 {
 printf("%d x ^ %d",p[i].coef,p[i].exp);
 printf("%s",p[i+1].coef > 0? " +":" ");
 }
 if(p[i].exp == 0)
 printf("%d",p[i].coef);
 return 0;
}