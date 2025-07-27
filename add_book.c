#include "header.h"
LIB *add_book(LIB *head)
{
        char name[30];
        char author[30];
        int pages;


        //creating new book
        LIB *newbook,*temp=head;
        newbook=calloc(1,sizeof(LIB));
        newbook->next=NULL;

        //getting book name
        printf("Enter book name:\n");
        __fpurge(stdin);
        fgets(name,30,stdin);
        name[strlen(name)-1]='\0';
        strcpy(newbook->book_name,name);

        //getting author name
        printf("Enter author name:\n");
        __fpurge(stdin);
        fgets(author,30,stdin);
        author[strlen(author)-1]='\0';
        strcpy(newbook->author_name,author);

        //geting No.of pages
        printf("Enter No.of pages:\n");
        scanf("%d",&pages);
        newbook->value=pages;
        newbook->book_count++;

        while(temp)
        {
                if(strcmp(newbook->book_name,temp->book_name)==0)
                {
                        if(strcmp(newbook->author_name,temp->author_name)==0)
                        {
                                if((newbook->value=temp->value))
                                {
                                        temp->book_count++;

                                        return head;
                                }
                        }
                }
                temp=temp->next;

        }



        if(head==NULL)
        {
                head=newbook;
        }
        else
        {
                LIB *temp=head;
                while(temp->next)
                {
                        temp=temp->next;
                }
                temp->next=newbook;
        }
        return head;

}
