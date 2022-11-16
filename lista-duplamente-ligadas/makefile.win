all: printy

printy: main.o lista-duplamente-ligada.o
	gcc -o printy main.o lista-duplamente-ligada.o

main.o: aula-lista-duplamente-ligadas-main.c aula-lista-dup.h
	gcc -o main.o aula-lista-duplamente-ligadas-main.c -c -W -Wall -ansi -pedatic 

lista-duplamente-ligada.o: aula-lista-duplamente-ligadas.c aula-lista-dup.h
	gcc -o lista-duplamente-ligada.o aula-lista-duplamente-ligadas.c -c -W -Wall -ansi -pedantic

clean: 
	rm -rf *.o *~printy