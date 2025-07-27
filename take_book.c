#include "header.h"

LIB *take_book(LIB *head)
{
        LIB *p,*temp=head;
        p=find_book(head);
        LIB *prev=head;
        if(p==NULL)
        {
                return head ;
        }


         while(head!=p && prev->next!=p)
         {
                 prev=prev->next;
         }

        if(head==p)
        {
                if(p->book_count>1)
                {
                        p->book_count--;
                        return head;
                }
                else
                {
                        temp=head;
                        head=head->next;
                        free(temp);
                        temp=NULL;

                }
        }
        else if(p->next==NULL)
        {
                if(p->book_count>1)
                {
                        p->book_count--;
                        return head;
                }
                else
                {
                        temp=p;
                        free(temp);
                        temp=NULL;
                        prev->next=NULL;


                }


        }
        else
        {
                if(p->book_count>1)
                {
                        p->book_count--;
                        return head;
                }
                else
                {
                        temp=p;
                       prev->next=prev->next->next;
                       free(temp);
                       temp=NULL;

                }

        }
return head;

}
