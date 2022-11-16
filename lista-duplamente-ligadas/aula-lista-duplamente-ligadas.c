#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "aula-lista-dup.h"

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

//FUNÇÃO DE DESTRUIR A LISTA
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

//FUNÇÃO DE INSERÇÃO NO INICIO DA LISTA
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


//FUNCAO PARA DICIONAR NO FINAL DA LISTA
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
//FUNÇÃO D IMPRIMIR
void List_print(const DoubleLinkedList *list){
    Node *p = list->begin;

    while (p != NULL){
        printf("%d - \t", p->val);
        p = p->next;
    }

    printf("Tamanho da lista = %d \n ", list->size);

}

//FUNÇÃO DE IMPRIMIR O INVERTIDO
void List_inverted_print(const DoubleLinkedList *list){
    Node *p = list->end;

    printf("L->end ->");

    while (p != NULL){
        printf("%d -> ", p->val);
        p = p->prev;
    }
    printf("NULL\n");

    if(list->end == NULL){
        printf("L->begin = NULL\n");
    }
    else{
        printf("L->begin = %d\n", list->begin->val);
    }

    printf("size: %lu\n", list->size);
    puts("");

}


//FUNCAO DE REMOVER
void List_remove(DoubleLinkedList *list, int val){
    if(!List_is_empty(list)){
        Node *p = list->begin;

        //se o elemento estiver na cabeça da lista
        if(list->begin->val == val){
            list->begin = p->next;

            //se a lista possui apena um unico elemento
            if(list->end == p){
                list->end = NULL;
            }

            //se a lista tiver mais de um elemento
            else{
                list->begin->prev = NULL;
            }


            free(p);
            list->size--;
        }

        //quando o elemento estiver no meio da lista
        else{
            p = p->next;
            
            while (p != NULL){
                if (p->val == val){
                    p->prev->next = p->next;

                    //quando o elemento estiver no final da lista
                    if(list->end == p){
                        list->end = p->prev;
                        // list->end->next = NULL;
                    }

                    //quando o elemento estiver no meio da lista
                    else {
                        p->next->prev = p->prev;
                    }

                    free(p);
                    p = NULL;
                    list->size--;
                }
                else{
                    p = p->next;
                }

            }

        }
    }
}