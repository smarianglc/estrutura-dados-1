target : prerequisites
<TAB>recipe
 
all: printy
 
printy: exercicio-01-main.o exercicio-01.o
    gcc -o printy exercicio-01-main.o exercicio-01.o
 
main.o: exercicio-01-main.c exercicio-01.h
    gcc -o exercicio-01-main.o exercicio-01-main.c -c -W -Wall -ansi -pedantic
 
exercicio-01.o: exercicio-01.c exercicio-01.h
    gcc -o exercicio-01.o exercicio-01.c -c -W -Wall -ansi -pedantic
 
clean:
    rm -rf *.o *~ printy
