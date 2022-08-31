#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selection.h"

void cont_tempo (int *vector, int size);

int main (void){
    int tam_vetor = 500;
     int *vector;

    vector = (int *) malloc(tam_vetor *sizeof(int));
    if(vector == NULL){
        printf("ERRO AO ALOCAR VETOR \n");
        exit(1);
    }
    cont_tempo(vector, tam_vetor);

    tam_vetor = 1000;
    vector = (int *) realloc(vector, tam_vetor * sizeof(int));
    cont_tempo(vector, tam_vetor);

    tam_vetor = 10000;
    vector = (int * ) realloc(vector, tam_vetor * sizeof(int));
    cont_tempo(vector, tam_vetor);

    tam_vetor = 500000;
    vector = (int * ) realloc(vector, tam_vetor * sizeof(int));
    cont_tempo(vector, tam_vetor);

    tam_vetor = 1000000;
    vector = (int * ) realloc(vector, tam_vetor * sizeof(int));
    cont_tempo(vector, tam_vetor);

    free(vector);

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
    selection(vector, size);

    clock_t end = clock();
    tempExecution += (double)(end - begin) / CLOCKS_PER_SEC;
    saveFile(size, tempExecution);
    }