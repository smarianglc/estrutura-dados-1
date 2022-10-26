#include <stdio.h>
#include <stdlib.h>
#include "pilha-dinamica.h"

//DECLARANDO ESTRUTURA NÓ
typedef struct _double_node{
    int val;
    struct _double_node *next;
    struct _double_node *prev;
}DoubleNode, Node;

//DECLARANDO ESTRUTURA LISTA
typedef struct _double_linked_list{
    Node *begin;
    Node *end;
    size_t size;
}DoubleLinkedList, List;

//CONSTRUTOR DO NÓ 
Node *Node_create(int value){ //outro nó para outra estrutura (Node *p)
    Node *node = (Node*)calloc(1, sizeof(Node));

    node->next = NULL;
    node->prev = NULL;
    node->val = value;

    return node; //retorna um endereço de memoria
}

//CONSTRUTOR DA LISTA 
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

void List_Add_Last(DoubleLinkedList *list, int val){
    Node *newNO = Node_create(val);

    newNO->prev = list->end; //o nó anterior é o proximo elemento 

    //verifica se a lista ta vazia 
    if(List_is_empty(list)){
        list->begin = newNO;
    }
    else{
        list->end->next = newNO;
    }

    list->end = newNO;
    list->size++;


}

void list_print(const DoubleLinkedList *list){
    Node *p = list->begin;

    while (p != NULL){
        printf("%d - \t", p->val);
        p = p->next;
    }

    printf("Tamanho da lista = %d \n ", list->size);
     
}
