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
}

//função para verificar se o inicio e o fim da linha é null
bool LinkedList_is_empty(const LinkedList *l){
    return(l->begin == NULL && l->end == NULL);
}

//função para add no final da lista 
void Linkedlist_add_first(LinkedList *l, int val){
    Node *pont = Node_create(val);
    pont->next = l->begin;

    if(LinkedList_is_empty(l)){
        l->end = pont;
    }

    l->begin = pont;
}

void LinkedList_remove(LinkedList *l, int val){
    if(!LinkedList_is_empty(l)){
        if(l->begin->val == val){
            Node *pos = l->begin;
            l->begin = l->begin->next;
            free(pos);
        }
    }
}