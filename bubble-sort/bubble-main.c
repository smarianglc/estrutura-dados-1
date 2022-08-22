#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubble.h"

void cont_tempo (int *vector, int size);

int main (void){

    int tam_vetor = 500;
    int *vetorPont;

    srand(time(NULL)); //funcao de contagem de tempo

    vetorPont = (int *) malloc(tam_vetor *sizeof(int)); //alocando memoria para o ponteiro vetor
    bubble(vetorPont, tam_vetor);
    if(vetorPont == NULL){
        printf("ERRO AO ALOCAR VETOR \n");
        exit(1);
    }
    cont_tempo(vetorPont, tam_vetor);

    tam_vetor = 1000;
    
    vetorPont = (int *) realloc(vetorPont, tam_vetor);
    bubble(vetorPont, tam_vetor);
    cont_tempo(vetorPont, tam_vetor);

    return 0;
}   