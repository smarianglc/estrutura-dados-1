#include<stdio.h>
#include<stdlib.h>
//#include "linked_list.h"

//DEFININDO ESTRUTURA 
typedef struct _noSimple{
    int value;
    struct _noSimple *next;
} NoSimple;

typedef struct _LinkedList{
    int size;
    NoSimple *begin;
    NoSimple *end;
} LinList;

//FUNÇÕES DE ALOCANDO  
NoSimple *CreatenNS(int val) {
    NoSimple *nosi = (NoSimple *)calloc(1, sizeof(NoSimple)); 
    nosi -> value = val;  
    nosi -> next = NULL; 

    return nosi;
}

LinList *CreateL(){
    LinList *list = (LinList*)calloc(1, sizeof(LinList)); 
    list -> begin = NULL; 

    return list;
}

//FUNÇÃO PARA CRIAR NÓ PONT P
void firstADD (LinList *list, int value){
        NoSimple *pont = CreatenNS(value); 
        pont -> next = list -> begin;
        list -> begin = pont; 
        list -> size++;
}

void LastADD(LinList *list, int val)
{
    NoSimple *pont = CreatenNS(val);
    
    if(list -> begin == NULL){
        list -> begin = pont;
    }
    else{
        NoSimple *aux = list -> begin;
        while(aux -> next != NULL){
            aux = aux->next;
        }
        aux->next = pont;
    }
    list->size++;
}

void print(const LinList *lista){
    NoSimple *pont = lista->begin;
    printf("Lista -> ");
    
    while(pont != NULL){
        printf("|%d|-> ", pont -> value);
        pont = pont -> next;
    }
    printf("NULL\n");
}