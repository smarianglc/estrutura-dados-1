#include "exercicio-01.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    int val;
    struct node *next;
}Node;

typedef struct linked_list{
    Node *begin;
    Node *end;
    size_t size;
}LinkedList;

Node *Node_create(int val){
    Node *newNode = (Node*) calloc(1, sizeof(Node));

    newNode->val = val;
    newNode->next = NULL;

    return newNode;
}


LinkedList *LinkedList_create(){
    LinkedList *l = (LinkedList *) calloc(1, sizeof(LinkedList));

    l->begin = NULL;
    l->end = NULL;
    l->size = 0;
}

//função para verificar se o inicio e o fim da linha é null
bool LinkedList_is_empty(const LinkedList *l){
    return(l->begin == NULL && l->end == NULL);
}

void Linkedlist_add_last(LinkedList *l, int val){
    Node *noP = Node_create(val);
    noP->next = l->begin;

    if (LinkedList_is_empty(l)){
        l->end = noP;
    }

    l->begin = noP;

}

// //função para add no final da lista 
// void Linkedlist_add_first(LinkedList *l, int val){
//     Node *pont = Node_create(val);
//     pont->next = l->begin;

//     if(LinkedList_is_empty(l)){
//         l->end = pont;
//     }

//     l->begin = pont;
// }

void LinkedList_remove(LinkedList *l, int val){
    if(!LinkedList_is_empty(l)){
        Node *prev = NULL;
        Node *pos = l -> begin;

        while (pos != NULL && pos -> val != val){
            prev = pos;
            pos = pos -> next;
        }

        if(pos != NULL){
            if(l->end == pos){
                l->end = l->begin->next;
            }
            if(l->begin == pos){
                l->begin = l->begin->next;
            }
            else{
                prev->next = pos->next;
            }

            free(pos);
            l -> size--;
        }
        }
        
}

// void Linkedlist_recusiva (LinkedList *l, int val){
//     if(!LinkedList_is_empty(l)){

//         Linkedlist_add_last(inicio_lista, valor);
//         LinkedList_remove(remover, value);
//     }
// }
