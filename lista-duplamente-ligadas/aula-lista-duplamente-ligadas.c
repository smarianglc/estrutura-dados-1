#include <stdio.h>
#include <stdlib.>
#include "aula-lista-dupla.h"
#include <stdef.h>
#include 

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
