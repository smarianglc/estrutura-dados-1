#include <stdio.h>
#include <stdlib.h>
#include "bubble.h"
#include <time.h>

int main (void){

    double total_temp = 0;
    clock_t begin = clock();

    int vetor[] = {3, 8, 9, 0 , 6, 1, 2, 4};

    
    //chamando a funcao
    bubble(vetor, 8);
    imprimir(vetor, 8);

    clock_t end = clock();
    total_temp += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\n Tempo da funcao: %f", total_temp);
    return 0;
}
