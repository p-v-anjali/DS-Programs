#include<stdio.h>
#include<ctype.h>
#include<math.h>
int stack[20];
int top=-1;
void push(int e)
{
	stack[++top]=e;
}
int pop()
{
	if(top==-1)
		printf("Stack Underflow!!");
	else
	{
	    int value_top =stack[top];
		top--;
		return value_top;
	}
}
int peek()
{
    return(stack[top]);
}
int main()
{
    int i;
    char postfix[20];
    printf("\nEnter a postfix exprerssion: ");
    scanf("%s",postfix);
    for(i=0;postfix[i]!='\0';i++)
    {
        if(isdigit(postfix[i]))
        {
            push(postfix[i]-'0');
        }
        else 
        {
            int operand_a=pop();
            int operand_b=pop();
            switch(postfix[i])
            {
                case '+': push(operand_a+operand_b);
                            break;
                case '-': push(operand_b-operand_a);
                            break;
                case '*': push(operand_a*operand_b);
                            break;
                case '/': push(operand_b/operand_a);
                            break;
                case '^': push(pow(operand_a,operand_b));
                            break;
                default: printf("\nInvalid Expression!");
                        break;
            }
        }
    }
    printf("\nResult: %d",peek());
    return 0;
}