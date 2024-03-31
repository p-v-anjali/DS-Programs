#include<stdio.h>
#define MAX 5
int stack[MAX],top=-1;

void push(int e)
  {
   	if(top+1==MAX)
    	{
	    	printf("Stack Overflow!!");
    	}
    else
        {
  	       stack[++top]=e; 
	    }	
  }
 void pop()
   {
   	   if (top==-1)
   	  {
   	    	printf("Stack Underflow!!");
      }
      else
       {
        	printf("%d popped",stack[top--]);
	 }
   }
 void peek()
 {
 	if(top==-1)
 	{
 		printf("Stack Underflow!!");
	 }
	else
	{
		printf(" top is %d",stack[top]);
			  
    }
 }
 int menu()
 {
 	int choice;
 	printf("\npush-1 \npop-2  \npeek-3  \nexit-4  \nEnter ur choice :");
 	scanf("%d",&choice);
 	return choice;
}
 void process()
 {
   	int ch;
   	for(ch=menu();ch!=4;ch=menu())
    {
       	switch(ch)
    	  {			    		 
    		case 1:
    		 	printf("Enter the element :");
    		 	scanf("%d",&ch);
    		 	push(ch);
    		 	break;
    		 	
    	    case 2:
			    pop();
				break;
				
	    	case 3:
			    peek();
				break;
				
	    	default :
			  printf("Wrong Choice");		
	    	}
      }
 }
  int main()
  {
    process();
  	return 0;
  }