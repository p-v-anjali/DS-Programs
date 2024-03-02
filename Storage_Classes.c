//Write programs to demonstrate the use of storage classes in C.

#include<stdio.h>
int a=10;//global variable
static int c=12;//static variable
int main()
{
	int b=70;//local variable
	register int d,e=2;//register variable
	d=e+2;
	printf("The value of global variable a = %d",a);
	printf("\nThe value of local variable b = %d",b);
	printf("\nThe value of static variable c = %d",c);
	printf("\nThe value of static variable c = %d",++c);
	printf("\nThe value of register variable d = %d",d);
	return 0;
}


/*Using Function
#include<stdio.h>
int a=10;
void l_variable()
{
	int b=70;
	printf("\nThe value of local variable b = %d",b);	
}
void s_variable()
{
	static int c=12;
	printf("\nThe value of static variable c = %d",c);	
	printf("\nThe value of static variable c = %d",++c);
}
void r_variable()
{
	register int d,e=2;
	d=e+2;
	printf("\nThe value of register variable d = %d",d);	
}
int main()
{
	printf("The value of global variable a = %d",a);
	l_variable();
	s_variable();
	r_variable();
	return 0;
}
*/