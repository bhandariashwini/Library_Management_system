#include "header.h"
void save(LIB *head)
{
        int size;
        FILE *fptr;
        fptr=fopen("Info.txt","w");
        size=sizeof(LIB)-sizeof(LIB *);
        while(head)
        {
                fwrite(head,size,1,fptr);
                head=head->next;
        }
        printf("Book added successfully !!");
        fclose(fptr);
}
