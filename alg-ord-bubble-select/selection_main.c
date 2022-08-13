#include <stdio.h>
#include <stdlib.h>
#include "selection.h"
#include <time.h>
#define size 10

int main(){
    //double total_temp = 0;
    //clock_t begin = clock();

    int dado[size];
    int i;
    //laco pra gera cada numero da repeticao, ou seja, dando os numero aleatorios 
    for(i = 0; i <=  size; i++){
        dado[i] = rand()%size;
    }
    selection(dado, size);
    imprimir(dado, size);

    //clock_t end = clock;
    //total_temp += (double)(end - begin) / CLOCKS_PER_SEC
    //gravar_arquivo(total_temp);

  return 0;
}
