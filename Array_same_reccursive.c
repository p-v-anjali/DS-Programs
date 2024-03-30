//Display the array elements in the same order using a recursive function 

#include <stdio.h>
void display(int a[], int n)
{
    if (n<0)
    {
	
        return;
    }
    
	display(a, n - 1);
    printf("%d ",a[n]);
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