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
void bubble (int *vector, int size){
    int i, j, cont_variavel; 
    int cont;

    for (i = 0; i < size -1; i++){ //laço para percorrer o vetor todo
        //do{
          //  cont_variavel = 0; //incioando a contagem de repeticao 
            for(j = 0; j < size -1; j++){ //laço para fazer as comparações
            //    cont_comparacoes = cont_comparacoes + 1;
                if(vector[j] > vector[ +1]){ //condição de comparação para chamar a função de troca "swap"
                    swap(&vector[j], &vector[j+1]); // os parametros das funções recebe os valores
                    //cont_trocas = cont_trocas + 1;
                    //cont_variavel = 1; //se acontece a troca recebe 1 e finaliza se não receber 1
                    cont = vector[j];

                    if(cont == vector[j - 1]){
                        break;
                    }
                    cont_trocas;
            }
            cont_comparacoes;
        }

    } 
    //while (cont_variavel == 1);
    //cont_varredura = cont_varredura + 1;
    
    //if (vector[j] == vector[j - 1]){ //condição para ver é o numero de varredura é o mesmo do vector
      //  break;
   // }
    
    //}
    
}


//FUNÇÃO PARA ARQUIVAR NO ARQUIVO AS INFORMAÇÕES
void saveFile (int size, double tempo, int *vector){

    FILE *file;
    file = fopen("bubble-arquivo.txt", "a");
    if(file == NULL){
        printf("\n ERRO AO GRAVAR O ARQUIVO");
    }

    fprintf(file, "DADOS DO VETOR: %d", size);
    fprintf(file, "\n Numero de trocas %ld", cont_trocas);
    fprintf(file, "\n Numero de verreduras no vetor: %ld", (cont_varredura - 1));
    fprintf(file, "\n Numero de comparacoes: %ld", cont_comparacoes);
    fprintf(file, "\n O tempo de execucao foi de: %.2f", tempo);
    fprintf(file, "\n ------------------------------------------");
    fprintf(file, "\n\n");
    fclose(file);
}

