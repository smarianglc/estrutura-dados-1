#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "aula-lista-dup.h"

typedef struct _double_node{
    int val;
    struct _double_node *next;
    struct _double_node *prev;
}DoubleNode, Node;

typedef struct _double_linked_list{
    Node *begin;
    Node *end;
    size_t size;
}DoubleLinkedList, List;

//CONSTRUTOR
Node *Node_create(int value){ //outro nó para outra estrutura (Node *p)
    Node *node = (Node*)calloc(1, sizeof(Node));

    node->next = NULL;
    node->prev = NULL;
    node->val = value;

    return node; //retorna um endereço de memoria
}

//CONSTRUTOR
List *List_create(){
    List *l = (List*)calloc(1, sizeof(List));

    l->begin = NULL;
    l->end = NULL;
    l->size = 0;

    return l; //retorna 
}

//FUNCAO PARA VERIFICAR SE É FAZIA OU NÃO
bool List_is_empty(const DoubleLinkedList *list){
    return list -> size == 0;
}

void List_Destroy(DoubleLinkedList **list){
    List *l = *list;

    Node *p = l->begin;
    Node *aux = NULL;

    while(p != NULL){
        aux = p;
        p = p->next;
        free(aux);
    }

    free(l);

    *list = NULL;
}

void List_Add_firt(DoubleLinkedList *list, int val){
    Node *p = Node_create(val);

    if(List_is_empty(list)){
        list->end = p;
    }
    else{
        p->next = list->begin;
        list->begin->prev = p;
    }
    list->begin = p;
    list->size++;
}

//