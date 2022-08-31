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
    //bubble(vetorPont, tam_vetor);
    if(vetorPont == NULL){
        printf("ERRO AO ALOCAR VETOR \n");
        exit(1);
    }
    cont_tempo(vetorPont, tam_vetor);

    tam_vetor = 1000;
    vetorPont = (int *) realloc(vetorPont, tam_vetor * sizeof(int));
    //bubble(vetorPont, tam_vetor);
    cont_tempo(vetorPont, tam_vetor);

    tam_vetor = 10000;
    vetorPont = (int * ) realloc(vetorPont, tam_vetor * sizeof(int));
    //bubble(vetorPont, tam_vetor);
    cont_tempo(vetorPont, tam_vetor);

    tam_vetor = 500000;
    vetorPont = (int * ) realloc(vetorPont, tam_vetor * sizeof(int));
    //bubble(vetorPont, tam_vetor);
    cont_tempo(vetorPont, tam_vetor);

    tam_vetor = 1000000;
    vetorPont = (int * ) realloc(vetorPont, tam_vetor * sizeof(int));
    //bubble(vetorPont, tam_vetor);
    cont_tempo(vetorPont, tam_vetor);

    free(vetorPont);

    return 0;
}

void cont_tempo (int *vector, int size){
    double tempExecution = 0.0;
    int i;

    clock_t begin = clock();
    srand(time(NULL));

    for(i = 0; i < size; i++){
        vector[i] = rand()%size;
    }
    bubble(vector, size);

    clock_t end = clock();
    tempExecution += (double)(end - begin) / CLOCKS_PER_SEC;
    saveFile(size, tempExecution, vector);
}