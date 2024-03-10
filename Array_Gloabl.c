
#include<stdio.h>
int pos=-1,array[10];

int insert(int e)
{
        if(pos+1==10)
        {
            printf("array is full");
        }
        else
        {
            array[++pos]=e;
        }
        return array[e];
       
    
}
void delete()
{
        if(pos==-1)
        {
            printf("array is empty");
        }
        else
        {
            printf("deleted element:%d",array[pos--]);
        }
}
int menu()
{
    int ch;
    printf("1.insert\n2.delete\n3.search\n4.sort\enter your choice\n");
    scanf("%d",&ch);
    return ch;
}

void process()
{
        int ch;
        for(ch=menu();ch!=6;ch=menu())
        {
            switch(ch)
            {
                case 1:printf("enter the element to be inserted\n");
                       scanf("%d",&ch);
                       insert(ch);
                       break;
                case 2:
                       delete(ch);
                       break;
                 case 3:
                       search();
                       break;
			     case 4:
				        sort();
						break;		          
                default:printf("wrong input");
                        break;
                       
            }
        }
}
void search()
{
        int s,i,flag=0;
        printf("ENTER THE ELEMENT TOP BE SEARCHED\n");
        scanf("%d",&s);
        for(i=0;i<10;i++)
        {
            if(array[i]==s)
            {
               flag=1;
                break;
            }
           
        } 
		if(flag==1)   
			printf("Element is found");
		else
			printf("element is not found");
		    	
}
void sort(int array[])
{
	int i,j,x;
	for(i=0;i<10;i++)
	{
			x=array[i];
			j=j-1;
			while(j<=0 && array[j]>x)
			{
				array[j+1]=array[j];
				j=j-1;
			}
			array[j+1]=x;
	}
	for(i=0;i<10;i++)
	{
		printf("%d",array[i]);
	}
}

int main()
{
            process();
            return 0;
    
}