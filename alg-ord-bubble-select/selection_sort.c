#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 8

void selection(int vetor[], int size){
    for (int i = 0; i < TAM; i++){
        int menor = i; //armazenando apenas o inidice 
        for(int j = i; j < TAM; j++){ //percorrer o vetor
            if (vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        swap(&vetor[i], &vetor[menor]);
    }

}
void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;

}

void Print(int array){
    for(int i = 0; ){

    }

}

int main (){
    int data[] = {0, 2, 7, 0, 9, 3, 8, 8};

    return 0;
}