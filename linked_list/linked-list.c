#include "linked-list.h"
#include <stdio.h>
#include <stdlib.h>

//DEFININDO ESTRUTURA PARA NÓ SIMPLES
typedef struct _node_simple{
    int value;
    struct _node_simple *next;
}NodeSimple;

//DEFININDO ESTRUTURA PARA LISTA ECANDEADA SIMPLES
typedef struct _linked_list{
    NodeSimple *begin; //nó inicial 
    NodeSimple *end; //nó final
}LinkedList;

//FUNCAO PARA ALOCAR ESTRUTURA NÓ 
/*inserir o valor*/
NodeSimple *Create_NoSi(int val){
    NodeSimple *SN = (NodeSimple*) calloc(1, sizeof(NodeSimple));
    SN -> value = val;
    SN -> next = NULL; //só pra dizer que não existe proximo

    return SN;
} 

//FUNCAO PARA ALOCAR ESTRUTURA LINKEDLIST:  
LinkedList *LiLi_create(){
    LinkedList *L = (LinkedList *) calloc(1, sizeof(LinkedList));
    L -> begin = NULL; //só pra dizer que o proximo elemento é NULL (não existe)
    L -> end = NULL;

    return L;
}

//FUNCAO DE DISTRUIR A LINKEDLIST
void destroy_LinkedList(LinkedList **L_ref){
    LinkedList *L = *L_ref;

    NodeSimple *p = L->begin;
    NodeSimple *aux = NULL;

    while (p != NULL){
        aux = p;
        p = p->next;
        p = p->next;
        free(aux);
    }
    free(L);

    *L_ref = NULL;    
}

bool *LinkedList_is_empty(const LinkedList *l){
    return (l->begin == NULL && l->end == NULL);
}

//FUNÇÃO PARA QUE INICIAR A LISTA
/*list vai apontar para o primeiro nó da list*/
void ADD_LinkedList(LinkedList *L, int val){
    //pode ser usado para se a lista esta vazia ou não
    NodeSimple * noP = Create_NoSi(val);
    noP -> next = L -> begin;
    L -> begin = noP;
}

//FUNCAO PARA NOVA INSERCAO NO INICIO DA LISTA
void ADD_LinkedList_Inicio(LinkedList *L, int val){
    NodeSimple *noP = Create_NoSi(val);
    
    noP->next = L->begin; 
    if (LinkedList_is_empty(L)){
        L->end = noP; //final também aponta para noP
    } 
    L->begin = noP; //comeco da lista aponta para noP   
}

//FUNCAO PARA ADIOCIONAR ELEMENTS NO FINAL DA LISTA (sem percorrer por todo os elementos)
void add_Last_ll(LinkedList *L, int val){
    //puts("testando");

    NodeSimple *noQ = Create_NoSi(val);

    if(LinkedList_is_empty(L)){//se a lista estiver vazia
        L -> begin = noQ;
        L -> end = noQ;
    }
    else{ /*se a lista possui elemento*/
        L -> end -> next = noQ; //acessa o utimo elemento da lista e o ponteiro para o proximo dele, aponte para o novo nó
        L -> end = L -> end -> next;
    }
}

//FUNCAO PARA ADICONAR UM ELEMENTO AO FINAL DA LISTA (função mais lenta)
void add_Last_slow_ll(LinkedList *L, int val){
    NodeSimple *noQ = Create_NoSi(val);

    if(LinkedList_is_empty(L)){//se a lista estiver vazia
       
        L -> begin = noQ; /*adiciona o elemento*/
    }
    else{ /*se a lista possui elemento*/
        /*percorre toda a lista até encontra o elemento que aponte para o NULL*/
        NodeSimple *noP = L -> begin;
        while (noP -> next != NULL) {
            noP = noP -> next;
        }
        /*o proximo elemento do atual último nó aponte para o novo último nó*/
        noP -> next = noQ;
        
    }
}

//FUNCAO DE IMPRESSÃO
void Print_LinkedList(const LinkedList *L){
    NodeSimple *noP = L -> begin;

    printf("inicioList -> ");
    /*enquanto noP for diferente, ou seja quanto estiver apontando para um nó da lista */
    while (noP != NULL){ 
        printf("%d -> ", noP -> value); /*vai imprimir*/
        noP = noP -> next; /*pula para o proximo*/
    }
    printf("NULL");
    printf("\n");

    if(L->end == NULL){
        printf("L->end = NULL\n");
    }
    else{
        printf("L->end = %d\n ", L->end->value);
    }   
}
//FUNCAO PARA DESTRUIR A LISTA
void linkedList_destroy(LinkedList **L_ref){
    LinkedList *L = *L_ref;
    NodeSimple *p = L -> begin;
    NodeSimple *aux = NULL;

    while(p != NULL){
        aux = p; //guarda a referencia
        p = p -> next; //guarda a referencia do proximo
        free(aux);
    }
    free(L); //desaloca a lista
}

void remove_LinkedList(LinkedList *L, int val){
    if (!LinkedList_is_empty(L)){
        //caso 1 - o elemento esta o inicio da lista
        if(L->begin->value == val){
            NodeSimple *pos = L->begin;
            
            //se alista tem apenas uma lista
            if(L->begin = L->begin){
                L->end == NULL;
            }
            //L->begin->next = pos->next;

            if(L->end == pos){
                L->end == NULL;
            }
            free(pos);
        }
        //caso 2 - se o elemento estiver no meio da lista
        else{
            NodeSimple *prev = L->begin;
            NodeSimple *pos = L->begin->next;

            while (pos != NULL && pos->value != val){
                prev = prev->next;
                pos = pos->next;
            }

            //se pos for diferente de nulo, então um nó de valor foi encontrado e eh apontado pelo ponteiro pos
            if(pos != NULL){
                prev->next = pos->next;

                //caso 3 - remover o último nó da lista
                if(pos->next == NULL){
                    L->end = prev;
                }
                free(pos);
            }
            
        }

    }
}