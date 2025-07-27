#include<stdlib.h>
#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>

typedef struct library_new
{
        char book_name[30];
        char author_name[30];
        int value;
        int book_count;
        struct library_new *next;
}LIB;

void menu(void);
LIB *add_book(LIB *);

void print(LIB *);
void save(LIB *);
LIB *sync(LIB *);
void total_book(LIB *);
LIB *take_book(LIB *);
LIB *find_book(LIB *);
LIB *sort_book(LIB *);
