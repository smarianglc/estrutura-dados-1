#include "bubble.h"
#include <stdio.h>
#include <stdlib.h>

//VARIAVEIS PARA RECEBER AS CONTAGENS
long int cont_varredura = 0; // quantidade de vezes que passou no vetor
long int cont_trocas = 0; // quantidade de trocas 
long int cont_comparacoes = 0; // quantidade de comparações 

//FUNÇÃO PARA FAZER A TROCA 
void swap (int *pontA, int *pontB){
    int pontAUX; //ponteiro para auxiliar na troca de pronteiros
    pontAUX = *pontA;
    *pontA = *pontB;
    *pontB = pontAUX;
}

//FUNÇÃO PARA FAZER AS COMPARAÇÕES
void bubble (int vector[], int size){
    int i, j; 

    for (i = 0; i < size -1; i++){ //laço para percorrer o vetor todo
        for(j = 0; j < size -1; j++){ //laço para fazer as comparações

            if(vector[j] > vector[ +1]){ //condição de comparação para chamar a função de troca "swap"
                swap(&vector[j], &vector[j+1]); // os parametros das funções recebe os valores

                if (cont_varredura == vector[j - 1]){ //condição para ver é o numero de varredura é o mesmo do vector
                    break;
                    cont_trocas = cont_trocas + 1;
                }

                cont_comparacoes = cont_comparacoes + 1;
            }
        }
    
    cont_varredura = cont_varredura + 1;
    }
    
}

//FUNÇÃO PARA ARQUIVAR NO ARQUIVO AS INFORMAÇÕES
void print_arq (int size, double tempo){

    FILE *file = fopen("arq_bubble.txt", "a");
    if(file = NULL){
        printf("\n ERRO AO GRAVAR O ARQUIVO");
    }

    fprintf(file, "DADOS DO VETOR: %d", size);
    fprintf(file, "\n Numero de trocas %ld", cont_trocas);
    fprintf(file, "\n Numero de verreduras no vetor: %ld", (cont_varredura - 1));
    fprintf(file, "\n Numero de comparacoes: %ld", cont_comparacoes);
    fprintf(file, "\n O tempo de execucao foi de: %.2f", tempo);
    fprintf(file, "------------------------------------------");
    fprintf(file, "\n\n");
}