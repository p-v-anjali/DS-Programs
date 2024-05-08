#include<stdio.h>
struct date
{
	int day;
    	int month;
    	int year;
};
struct date read(struct date dt)
{
   int i=1;
   while(i==1)
   {
   		printf("\nEnter DAY,MONTH and YEAR \n");
	   	scanf("%d%d%d",&dt.day,&dt.month,&dt.year);
		if(dt.month>0&&dt.month<13)
   		{
   			if(dt.month==4||dt.month==6||dt.month==9||dt.month==11)
   			{
   				if(dt.day>0&&dt.month<31)
					i=0;
				else
					printf("\nInvalid DATE! Enter DATE again");	
			}
			else if(dt.month==2)
			{
				if(dt.year%100==0&&dt.year%400==0||dt.year%4==0&&dt.year%100!=0)
				{
					if(dt.day>0&&dt.day<30)
						i=0;
					else
						printf("\nInvalid DATE! Enter DATE again");	
				}
				else 
				{
					if(dt.day>0&&dt.day<29)
						i=0;
					else
						printf("\nInvalid DATE! Enter DATE again");
				}
			}
			else
			{
				if(dt.day>0&&dt.month<32)
					i=0;
				else
					printf("\nInvalid DATE! Enter DATE again");
			}
		}
		else
		{
			printf("\nInvalid DATE! Enter DATE again");
		}
   }
   return dt;
}
void display(struct date dt1,struct date dt2)
{
    	printf("\nDATE 1:%d/%d/%d\n",dt1.day,dt1.month,dt1.year);
    printf("DATE 2:%d/%d/%d\n",dt2.day,dt2.month,dt2.year);
}
void compare (struct date dt1,struct date dt2)
{
    if(dt1.day==dt2.day&&dt1.month==dt2.month&&dt1.year==dt2.year)
    {
        printf("The entered date are similar");
    }
    else
    printf("The dates are not similar");   
}
int main()
{
    struct date dt1,dt2;
    dt1=read(dt1);
    dt2=read(dt2);
    display(dt1,dt2); 
    compare(dt1,dt2);
    return 0;
}

