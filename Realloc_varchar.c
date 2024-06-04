#include<stdio.h>
#include<stdlib.h>
char* varchar_function(){
    char temp;
    int size=1;
    char *varchar;
    varchar=(char*)malloc(sizeof(char));
    do  {
        scanf("%c",&temp);
        varchar=(char*)realloc(varchar,size*(sizeof(char)));
        varchar[size-1]=temp;
        size++;
    }
    while(temp!='\n');
    varchar[size]='\0';
    return varchar;
}

int main(){
    char *varchar;
    printf("\nEnter a string: ");
    varchar=varchar_function();
    printf("Entered String is: %s",varchar);

 free(varchar);
    return 0;
}
