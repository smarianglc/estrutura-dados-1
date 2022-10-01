target : prerequisites
<TAB>recipe
 
all: printy
 
printy: hlinked-list-main.o hlinked-list.o
    gcc -o printy hlinked-list-main.o hlinked-list.o
 
main.o: linked-list-main.c linked-list.h
    gcc -o linked-list-main.o linked-list-main.c -c -W -Wall -ansi -pedantic
 
hlinked-list.o: linked-list.c linked-list.h
    gcc -o linked-list.o linked-list.c -c -W -Wall -ansi -pedantic
 
clean:
    rm -rf *.o *~ printy