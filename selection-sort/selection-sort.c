#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "selection.h"

long int cont_troca = 0;
long int cont_varredura = 0;
long int cont_comparacao = 0;

void swap (int *pontA, int *pontB){
    int aux;

    aux = *pontA;
    *pontA = *pontB;
    *pontB = aux;    
}

void selection (int *vector, int size){
    int i, j;
    int menorElemento;

    // cont_troca = 0;
    // cont_varredura = 0;
    // cont_comparacao = 0;

    for(i = 0; i <= size; i++){
        menorElemento = i;
        cont_varredura = cont_varredura + 1;

        for(j = i; j <= size; j++){
            cont_comparacao = cont_comparacao + 1;

            if(vector[j] < vector[menorElemento]){
                menorElemento = j;
            }
        }

        if(i != menorElemento){
            swap(&vector[i], &vector[menorElemento]);
            cont_troca = cont_troca + 1;
        }
    }
}

void saveFile (int size, double tempo){
    FILE *file;
    file = fopen("new-selction-file.txt", "a");
    if(file == NULL){
        printf("\n ERRO AO GRAVAR O ARQUIVO");
    }

    fprintf(file, "DADOS DO VETOR: %d", size);
    fprintf(file, "\n Numero de trocas %ld", cont_troca);
    fprintf(file, "\n Numero de verreduras no vetor: %ld", (cont_varredura - 1));
    fprintf(file, "\n Numero de comparacoes: %ld", cont_comparacao);
    fprintf(file, "\n O tempo de execucao foi de: %.2f", tempo);
    fprintf(file, " \n ------------------------------------------");
    fprintf(file, "\n\n");
    fclose(file);
}

