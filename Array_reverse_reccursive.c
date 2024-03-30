//Display array elements in reverse order using a recursive function 

#include <stdio.h>
void display(int a[], int n)
{
    if (n<0)
    {
	
        return;
    }
    printf("%d ",a[n]);
	display(a,n - 1);
    
}
int main()
{
    int a[10], n, i;
    printf("Enter Number of elements: ");
    scanf("%d", &n);

    for (i= 0;i<n;i++)
    {
        printf("Enter Element %d:",i+1);
        scanf("%d", &a[i]);
    }
    printf("Array: ");
    display(a,n - 1);
    return 0;
}
    
