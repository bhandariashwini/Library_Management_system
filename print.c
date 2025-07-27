#include "header.h"
void print(LIB *head)
{
        while(head)
        {
                printf("Book name: %s\nAuthor name: %s\npages: %d\nBook Count: %d\n",head->book_name,head->author_name,head->value,head->book_count);
                head=head->next;
                printf("\n");
        }
}
