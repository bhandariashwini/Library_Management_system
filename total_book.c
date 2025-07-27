#include"header.h"
void total_book(LIB *head)
{
        int count=0;
        LIB *temp=head;
        while(temp)
        {
                printf("%s\n",temp->book_name);
                count++;
                temp=temp->next;
        }
        printf("The count of Available Books in Library are:%d\n",count);


}
