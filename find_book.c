#include "header.h"
LIB *find_bookname(LIB *head,char bookname[20])
{
    LIB* temp=head;
    while(temp)
    {
        if(strcmp(temp->book_name,bookname)==0)
        {
            printf("Book Found\n");
            return temp;
        }
        temp=temp->next;
    }
    printf("Book is Not Availble\n");

}
LIB *find_authorname(LIB *head,char auhtorname[20])
{
    LIB* temp=head;
    while(temp)
    {
        if(strcmp(temp->author_name,auhtorname)==0)
        {
            printf("Book Found\n");
            return temp;
        }

        temp=temp->next;
    }


    printf("Author Book is Not Available\n");

}
LIB *find_book(LIB *head)
{
    int choice;
    LIB *p=head;
    char name1[20];
    char name2[20];
    printf("1:Based On Book Name\n");
    printf("2:Based On Author Name\n");
    printf("Enter Your Choice\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:  printf("Enter Book Name\n");__fpurge(stdin);fgets(name1,20,stdin);name1[strlen(name1)-1]='\0';p=find_bookname(head,name1);
            break;
    case 2: printf("Enter Author Name\n");__fpurge(stdin);fgets(name2,20,stdin);name2[strlen(name2)-1]='\0';p=find_authorname(head,name2);
               break;
    }
    return p;
}
