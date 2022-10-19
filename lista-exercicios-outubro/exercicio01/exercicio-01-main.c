/*
1. Escreva os algoritmos com as solucoes recursivas para as funcoes de inserir, remover e
listar de uma lista ligada simples
*/
#include "exercicio-01.h"
#include <stdio.h>
#include <stdlib.h>

int main (void){

    LinkedList *starList = LinkedList_create();

    Linkedlist_add_first(starList, 05);
    Linkedlist_add_first(starList, 20);
    Linkedlist_add_first(starList, 10);
    Linkedlist_add_first(starList, 90);
    Linkedlist_add_first(starList, 76);
    Linkedlist_add_first(starList, 01);

    return 0;
}