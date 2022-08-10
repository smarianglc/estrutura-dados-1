#include <stdio.h> 
#include <stdlib.h>
#include "bubble.h"

int quant_var = 0;
int quant_comp = 0;
int quant_troca = 0;

//funação de troca
void swap (int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

//função de comparacao
void bubble (int vetor[], int size){
    int i, j;

    for (i = 0; i < size - 1; i++){
        for(j = 0; j < size - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                swap(&vetor[j], &vetor[j + 1]);
                quant_troca = quant_troca + 1;
            }
            quant_comp = quant_comp + 1;
        }
        quant_var = quant_var + 1;        
    }
}



//função de impressao
void imprimir(int *vetor, int size){
    int i;
    
    for(i = 0; i < size; i++){
        printf("[%d]", vetor[i]);
    }
    printf("\n Quantidade de vezes que passou no vetor: %d", quant_var);
    printf("\n Quantidade de comparacoes: %d", quant_comp);
    printf("\n Quantidade de trocas nas comparacoes: %d", quant_troca);
}

