#include <stdio.h>
#include <stdlib.h>
#include "bubble.h"
#include <time.h>

void time_fuc (int *vetor, int size);

int main (void){

    int num_indice = 10; //varivel que recebe o tamanho do vetor
    int *vector;

    scrand(time(NULL));

    //alocando o vetor na memoria
    vector = (int*) malloc (num_indice *sizeof(int));
    if (vector == NULL){ //verificando se o vetor foi alocado
        printf("ERRO AO ALOCAR! \n");
        exit(1);
    }
    
    //chamando a funcao e valores dos parametros 
    time_fuc(vector, num_indice);

    

//------ALGUMAS TENTANTIVAS--------
    //double total_temp = 0;
    //clock_t begin = clock();

    /*int vetor[size];
    int i;
    for(i = 0; i < size; i++){
        vetor[i] = rand()%size;
    }8/


    
    //chamando a funcao
    bubble(vetor, size);
    //imprimir(vetor, 8);

    clock_t end = clock();
    total_temp += (double)(end - begin) / CLOCKS_PER_SEC;
    gravar_arquivo(total_temp);
    */
    return 0;
}
