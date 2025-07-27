#include "header.h"
int getLength(LIB *head)
{
    int len = 0;
    LIB *curr = head;
    while (curr != NULL)
    {
        len++;
        curr = curr->next;
    }
    return len;
}

LIB* sort_name(LIB *head)
{
    LIB *currNode = head;
    int len = getLength(head);
    int itr = 0;
    int  swapped;

    while (itr < len)
    {
        LIB *traverseNode = head;
        LIB *prevNode = head;
        swapped = 0;

        while (traverseNode->next)
        {
            LIB *ptr = traverseNode->next;
            if (strcmp(traverseNode->book_name, ptr->book_name)>0)
            {
                swapped = 1;
                if (traverseNode == head)
                {
                    traverseNode->next = ptr->next;
                    ptr->next = traverseNode;
                    prevNode = ptr;
                    head = prevNode;
                }
                else
                {
                    traverseNode->next = ptr->next;
                    ptr->next = traverseNode;
                    prevNode->next = ptr;
                    prevNode = ptr;
                }
                continue;
            }
            prevNode = traverseNode;
            traverseNode = traverseNode->next;
        }

        if (!swapped)
        {
            break;
        }

        ++itr;
    }
    return head;

}
LIB* sort_author(LIB *head)
{
        {
    LIB *currNode = head;
    int len = getLength(head);
    int itr = 0;
    int  swapped;

    while (itr < len)
    {
        LIB *traverseNode = head;
        LIB *prevNode = head;
        swapped = 0;

        while (traverseNode->next)
        {
            LIB *ptr = traverseNode->next;
            if (strcmp(traverseNode->author_name, ptr->author_name)>0)
            {
                swapped = 1;
                if (traverseNode == head)
                {
                    traverseNode->next = ptr->next;
                    ptr->next = traverseNode;
                    prevNode = ptr;
                    head = prevNode;
                }
                else
                {
                    traverseNode->next = ptr->next;
                    ptr->next = traverseNode;
                    prevNode->next = ptr;
                    prevNode = ptr;
                }
                continue;
            }
            prevNode = traverseNode;
            traverseNode = traverseNode->next;
        }

        if (!swapped)
        {
            break;
        }

        ++itr;
    }

}
return head;

}
LIB* sort_book(LIB *head)
{
        int choice,flag=1;
        printf("1.sort based on book name\n");
        printf("2.sort based on Author name\n");
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
                case 1:head=sort_name(head);
                         break;
                case 2:;head=sort_author(head);
                         break;
                default:printf("Invalid Option\n");
                        flag=0;
        }
        if(flag)
        {
                printf("Sort Done Successfully....!\n");

        }
        return head;

}
