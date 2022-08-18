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

                if(quant_var == vetor[j+1]){
                    break;
                    quant_troca = quant_troca + 1;
                }
            }
            quant_comp = quant_comp + 1;
        }
        quant_var = quant_var + 1;        
    }
}



//função de impressao
/*void imprimir(int *vetor, int size){
    int i;
    
    for(i = 0; i < size; i++){
        printf("[%d]", vetor[i]);
    }
    printf("\n Quantidade de vezes que passou no vetor: %d", quant_var);
    printf("\n Quantidade de comparacoes: %d", quant_comp);
    printf("\n Quantidade de trocas nas comparacoes: %d", quant_troca);
}*/

void gravar_arquivo (double total_temp, int size){
    FILE *file_bubble = fopen("file_bubble.txt", "a");
    if(file_bubble == NULL){
        printf("ERRO NO ARQUIVO AO GRAVAR!\n");
    }
    fprintf(file_bubble, "\n INFORAÇOES DO VETOR DE TAMANHO %d", size);
    fprintf(file_bubble, "\n Quantidade de trocas nas comparacoes: %ld", quant_troca);
    fprintf(file_bubble, "\n Quantidade de varreduras feita no vetor: %ld", quant_var -1);
    fprintf(file_bubble, "\n Quantidade de comparacoes: %ld", quant_comp);
    fprintf(file_bubble, "\n Tempo da funcao: %.2f", total_temp);
    fprintf(file_bubble, "\n ------------------------------------------------------------");
    fprintf(file_bubble, "\n ------------------------------------------------------------");

    //fclose(file_bubble);
    
}