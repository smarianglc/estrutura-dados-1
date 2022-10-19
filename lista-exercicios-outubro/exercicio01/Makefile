target : prerequisites
<TAB>recipe
 
all: printy
 
printy: hexercicio-01-main.o hexercicio-01.o
    gcc -o printy exercicio-01-main.o exercicio-01.o
 
main.o: linked-list-main.c linked-list.h
    gcc -o exercicio-01-main.o exercicio-01-main.c -c -W -Wall -ansi -pedantic
 
hlinked-list.o: exercicio-01.c exercicio-01.h
    gcc -o linked-list.o linked-list.c -c -W -Wall -ansi -pedantic
 
clean:
    rm -rf *.o *~ printy