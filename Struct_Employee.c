/*Define a structure for employees with eno,ename, esal and dno. Read  n employees information and provide functions for the following:  
a.Searching an employee by no
b.Sorting the employees by
	1.Name
	2.Salary
c.Deleting an employee//Reverse a string using Stack

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
*/


#include<stdio.h>
#include<string.h>
int n,i,j;
struct employee
{
	int eno;
	char ename[10];
	float esal;
	int dno;
};

void search_emp(struct employee e[], int n)
{
	int search,flag=0,i;
	printf("\n\nEnter the employee no to be searched :");
	scanf("%d",&search);
	for( i=0;i<n;++i)
	{
		if(e[i].eno==search)
		{
			flag=1;
			break;
		}
	}
		if(flag==1)
		{
			printf("Employee is found at %d",i+1);
		}
		else
		{
			printf("Employee is not found");
		}
	
}
void sort_emp_name(struct employee e[],int n)
{
	struct employee temp;
	for(i=0;i<n-1;++i)//sorting by name
	{
		for(j=i+1;j<n;++j)
		{
			if(strcmp(e[i].ename,e[j].ename)>0)
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
		}	
	}

	printf("\nSorting by name");
	for(i=0;i<n;i++)
	{
		printf("\nName - %s",e[i].ename);
	}
	printf("\n\n");
}
void sort_emp_sal(struct employee e[],int n)
{
		struct employee temp;
	for(i=0;i<n-1;++i)
	{
		for(j=i+1;j<n;j++)
		{
			if(e[i].esal>e[j].esal)
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}
	}
	printf("\nSorting by salary\n");//sortiing by salary
	for(i=0;i<n;i++)
	{
		printf("%s - %f\n",e[i].ename,e[i].esal);
	}
}

int main()
{
	struct employee e[20];
	printf("Enter the no.of employee :-");
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		printf("Enter details of Employee %d\nEmployee No,Employee Name,Salary,Department No:\n",i+1);
		scanf("%d%s%f%d",&e[i].eno,&e[i].ename,&e[i].esal,&e[i].dno);
	}
	for( i=0;i<n;++i)
	{
		printf("\n\nDetails of Employee %d:-\nEmployee No: %d\nEmployee Name :%s\nSalary :%f\nDepartment No: %d",i+1,e[i].eno,e[i].ename,e[i].esal,e[i].dno);
	}
//	search_emp(e,n);
	sort_emp_name(e,n);
	sort_emp_sal(e,n);
	//delete_emp(e,n)
	return 0;
}

/*#include<stdio.h>
int i,n;
struct employee
{
	int eno;
	char ename[20];
	int esal;
	int dno;
};
struct employee e[20];
void search()
{
	int search,flag=0,i;
	printf("\n\nEnter the employee no to be searched :");
	scanf("%d",&search);
	for( i=0;i<n;++i)
	{
		if(e[i].eno==search)
		{
			flag=1;
			break;
		}
	}
		if(flag==1)
		{
			printf("Employee is found at %d",i+1);
		}
		else
		{
			printf("Employee is not found");
		}
	
}

int main()
{

	printf("Enter no .of employee");
	scanf("%d",&n);
		for(i=0;i<n;++i)
	{
		printf("Enter details of Employee %d\nEmployee No,Employee Name,Salary,Department No:\n",i+1);
		scanf("%d%s%f%d",&e[i].eno,&e[i].ename,&e[i].esal,&e[i].dno);
	}
	for( i=0;i<n;++i)
	{
		printf("\n\nDetails of Employee %d:-\nEmployee No: %d\nEmployee Name :%s\nSalary :%f\nDepartment No: %d,",i+1,e[i].eno,e[i].ename,e[i].esal,e[i].dno);
	}
	search();
	return 0;
}*/
