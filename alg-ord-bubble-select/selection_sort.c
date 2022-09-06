#include <stdio.h>
#include <stdlib.h>
#include "selection.h"

int soma_troca = 0; 
int quant_varredura = 0;
int quant_comparacao = 0;

// trocar elementos
void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

//FUNÇÃO DE ORDENACAO 
void selection(int *vetor, int TAM){
    
    for (int i = 0; i < TAM; i++){ //vai percorrer pelo o vetor todo até o ultimo 
        int menor = i; // armazenando apenas o indice
    
        for (int j = i; j < TAM; j++){ //vai fazer as coprações entre os vetores
            if (vetor[j] < vetor[menor]){
                menor = j;
            }
            quant_comparacao = quant_comparacao +1;
        }
        if(i != menor){ 
            swap(&vetor[i], &vetor[menor]);
            soma_troca +=1; 
        }
        quant_varredura += 1;
    }
}

int imprimir(const int *vetor, int TAM){
  for (int i = 0; i < TAM; i++){
    printf("[%d]", vetor[i]);
  }
  
  printf("\n");
  printf("Quantidade de troca: %d\n", soma_troca);
  printf("Quantidade de carreduras: %d\n", quant_varredura -1);
  printf("Quandidade de comparacoes %d \n", quant_comparacao);
}
/*
void gravar_arquivo (double total_temp){
    FILE *arq_selection1 = fopen("file_bubble.txt", "w");
    if(arq_selection1 == NULL){
        printf("ERRO NO ARQUIVO AO GRAVAR!\n");
    }
    fprintf(arq_selection1,"\n Quantidade de vezes que passou no vetor: %d", arq_selection1);
    fprintf(arq_selection1, "\n Quantidade de comparacoes: %d", arq_selection1);
    fprintf(arq_selection1, "\n Quantidade de trocas nas comparacoes: %d", arq_selection1);
    fprintf(arq_selection1, "\n Tempo da funcao: %f", total_temp);

    fclose(arq_selection1);
}
*/
