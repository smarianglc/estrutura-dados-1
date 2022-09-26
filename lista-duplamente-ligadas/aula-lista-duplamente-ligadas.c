#include <stdio.h>
#include <stdlib.>

//FUNÇÃO DESTROI A LISTA 
void linkedList_destroy(LinkedList **L_ref){
    LinkedList *L = *L_ref;
    SNode *p = L -> begin;
    SNode *aux = NULL;

    while(p != NULL){
        aux = p; //guarda a referencia
        p = p -> next; //guarda a referencia do proximo
        free(aux);
    }
    free(L); //desaloca a lista
}