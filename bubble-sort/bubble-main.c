#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubble.h"

void cont_tempo (int *vector, int size);

int main (void){

    int tam_vetor1 = 500;
    int *vetor1;

    srand(time(NULL)); //funcao de contagem de tempo

    vetor1 = (int *) malloc(tam_vetor1 *sizeof(int)); //alocando memoria para o ponteiro vetor
    if(vetor1 == NULL){
        printf("ERRO AO ALOCAR VETOR \n");
        exit(1);
    }
    cont_tempo(vetor1, tam_vetor1);

    int tam_vetor2 = 1000;
    int *vetor2;
    vetor2 = (int *) malloc(tam_vetor2 *sizeof(int)); //alocando memoria para o ponteiro vetor
        if(vetor2 == NULL){
        printf("ERRO AO ALOCAR VETOR \n");
        exit(1);
    }
    cont_tempo(vetor2, tam_vetor2); 

    int tam_vetor2 = 10000;
    int *vetor2;
    vetor2 = (int *) malloc(tam_vetor2 *sizeof(int)); //alocando memoria para o ponteiro vetor
        if(vetor2 == NULL){
        printf("ERRO AO ALOCAR VETOR \n");
        exit(1);
    }
    cont_tempo(vetor2, tam_vetor2);   

    int tam_vetor2 = 500000;
    int *vetor2;
    vetor2 = (int *) malloc(tam_vetor2 *sizeof(int)); //alocando memoria para o ponteiro vetor
        if(vetor2 == NULL){
        printf("ERRO AO ALOCAR VETOR \n");
        exit(1);
    }
    cont_tempo(vetor2, tam_vetor2); 

    int tam_vetor2 = 100000000;
    int *vetor2;
    vetor2 = (int *) malloc(tam_vetor2 *sizeof(int)); //alocando memoria para o ponteiro vetor
        if(vetor2 == NULL){
        printf("ERRO AO ALOCAR VETOR \n");
        exit(1);
    }
    cont_tempo(vetor2, tam_vetor2); 

    return 0;
}