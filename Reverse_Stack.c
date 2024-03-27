//Reverse a string using Stack

#include<stdio.h>
#include<string.h>
#define max 100 
int stack[max],top=-1;
int push(char x)
{
	if(top+1==max)
	{
		printf("Overflow");
	}
	else// Push(Inserting Element in stack) operation 
	{
		++top;
		stack[top]=x;	
	}
	return 0;
}

void pop()
{
	// Pop (Removing element from stack)  
      printf("%c",stack[top--]);	
}
int main()
{
	int i,len=0;
	char str[100];
	printf("Enter String :");
	gets(str);
	printf("\nOriginal String :");
	puts(str);
	len=strlen(str);
	for(i=0;i<len;i++)  
	{
		push(str[i]);	
	}
	//printf("\nThe String is pushed into the stack.");
	printf("\nReversed String.");
    for(i=0;i<len;i++)  
    {
    	pop();	
	} 
	
	 
}