#include"header.h"
LIB *sync(LIB *head)
{
        int size;
        LIB Data,*Node,*Travs;
        FILE *fptr;
        fptr=fopen("Info.txt","r");
        size=sizeof(LIB)-sizeof(LIB *);
        if(fptr)
        {
                while(fread(&Data,size,1,fptr))
                {
                        Node=malloc(sizeof(LIB));
                        strcpy(Node->book_name,Data.book_name);
                        strcpy(Node->author_name,Data.author_name);
                        Node->value=Data.value;
                        Node->book_count=Data.book_count;
                                Node->next=NULL;
                        if(head==NULL)
                        {
                                head=Node;
                        }
                        else
                        {
                                Travs=head;
                                while(Travs->next)
                                {
                                        Travs=Travs->next;
                                }
                                Travs->next=Node;
                        }
                }
        }
        fclose(fptr);
        return head;

}
