#include<stdio.h>
char stack[20];
int top=-1;

void push(char e)
{
	if(top+1 == 19 )
		printf("Stack Overflow");
	else
	{
		top++;
		stack[top]=e;
	}
}

void pop()
{
	if(top == -1)
		printf("Stack Underflow");
	else
		top--;
}

int precedence(char e)
{
	if(e == '(' || e==')')
		return 4;
	else if(e == '^')
		return 3;
	else if(e =='*'|| e == '/')
		return 2;
	else 
		return 1;
}
int  isoperator(char e)
{
	if(e == '(' ||e == ')' ||e == '^' ||e == '*' ||e == '/' ||e == '+' ||e == '-' )
		return 1;
	else 
		return 0;
	}