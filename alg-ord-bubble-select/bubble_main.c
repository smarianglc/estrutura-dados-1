#include <stdio.h>
#include <stdlib.h>
#include "bubble.h"
#include <time.h>
#define size 100000

int main (void){

    double total_temp = 0;
    clock_t begin = clock();

    int vetor[size];
    int i;
    for(i = 0; i < size; i++){
        vetor[i] = rand()%size;
    }

    
    //chamando a funcao
    bubble(vetor, size);
    //imprimir(vetor, 8);

    clock_t end = clock();
    total_temp += (double)(end - begin) / CLOCKS_PER_SEC;
    gravar_arquivo(total_temp);
    return 0;
}
