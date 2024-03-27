#include<stdio.h>
#include<malloc.h>
struct Books
{
	char author_name[20];
	char book_name[20];
};

void read_books(struct Books *b,int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		printf("Enter the Book_Name and Author_Name for Book %d:\n",i+1);
		scanf("%s %s",(b+i)->book_name,(b+i)->author_name);
	}
}
void display_books(struct Books *b, int n) 
{
	int i;
    printf("The collection of entered books:\n");
    for (i = 0; i < n; i++) {
        printf("Book %d:\n", i + 1);
        printf("Book Name: %s\n", (b+i)->book_name);
        printf("Author Name: %s\n",(b+i)->author_name);
    }
}


int main()
{
	int n;
	printf("Enter no.of books");
	scanf("%d",&n);
	 struct Books *b;
	 b=(struct Books *)calloc(sizeof(struct Books),n);
	 read_books(b,n);
	 display_books(b,n);
	 free(b);
	 return 0;
}