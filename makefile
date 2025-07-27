out:main.o menu.o add_book.o save.o print.o sync.o total_book.o take_book.o find_book.o sort_book.o
        cc main.o menu.o add_book.o save.o print.o sync.o total_book.o take_book.o find_book.o sort_book.o -o out


main.o:main.c
        cc -c main.c
menu.o:menu.c
        cc -c menu.c
add_book:add_book.c
        cc -c add_book.c
save:save.c
        cc -c save.c
print:print.c
        cc -c print.c
sync:sync.c
        cc -c sync.c
total_book:total_book.c
        cc -c total_book.c
take_book:take_book.c
        cc -c take_book.c
find_book:find_book.c
        cc -c find_book.c
sort_book:sort_book.c
        cc -c sort_book.c
