#include "pilha-estatica.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct _static_stack {
    int *data;
    long capacity;
    long topo;
} Estatica;


// alocar o espaço da pilha e iniciar o parametros
Estatica *create_estatica(long capacity){
    Estatica *s = (Estatica*)calloc(1, sizeof(Estatica));

    s->capacity = capacity;
    s->topo = -1; //pilha vazia
    s->data = (int*)calloc(s->capacity, sizeof(int)); // alocando espaco para os dados a serem inseridos
    return s;
}

void destroy_estatica(Estatica **ref_pilha){
    Estatica *s = ref_pilha;

    free(s->data);
    free(s);
    ref_pilha = NULL; //retira o valor do ponteiro da main
}

//valida se está vazio/cheio
bool estatica_vazia(Estatica *s){return s->topo == -1;}
bool estatica_cheia(Estatica *s){return s->topo == (s->capacity-1);}

//long estatica_tamanho(Estatica *s);


void estatica_push(Estatica *s, long val){
    if(estatica_cheia(s))printf(stderr, "lista cheia!\n");
    s->topo++;
    s->data[s->topo] = val;
}
/*
void estatica_peek(Estatica *s){
    fazer
}
*/
void estatica_pop(Estatica *s){
    if(estatica_vazia(s))printf(stderr,"lista vazia!\n");

    int aux = s->data[s->topo];
    s->topo--;
}