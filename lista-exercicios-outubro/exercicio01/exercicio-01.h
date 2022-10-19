#include <stdbool.h>
#include<stdio.h>
#include<stdlib.h>

//DECLARANDO ESTRUTURA
typedef struct node Node;
typedef struct linked_list LinkedList;

//ALOCANDO NA MEMRORIA
Node *Node_create(int val);
LinkedList *LinkedList_create();

bool LinkedList_is_empty(const LinkedList *l);
void Linkedlist_add_first(LinkedList *l, int val);
void LinkedList_remove(LinkedList *l, int val);