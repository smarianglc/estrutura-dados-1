#include <stdlib.h>
#include <stdio.h>
#include "float-vector.h"

struct FloatVector{
    int capacity;
    int size;
    int vector[];
    float *data; 
};

bool _isFull(const FloatVector *vector){
    return vector -> size == vector -> capacity;
}

FloatVector *create(int tam){
    FloatVector *vet = calloc (1, size(FloatVector));
    vet -> capacity = tam;
    vet -> size = 0;
    vet -> data = (float*) calloc(vet -> capacity, sizeof(float));

    return vet;
}

void destroy (FloatVector **vet__ref){
    FloatVector *vet = *vet__ref;
    free (vet -> data);
    free (vet);
    *vet__ref = NULL;
}

int capacity (const FloatVector *vector){
    return vector -> capacity;
}

void merge(int vector[], int inicio, int meio, int fim){
    int n1 = meio - inicio +1;
    int n2 = fim - meio;

    int L[n1]; //direito 
    int R[n2]; //esquerdo 

    for (int i = 0; i < n1; i++){
        L[i] = vector[inicio + i];
    }

    for (int i = 0; i < n1; i++){
        R[i] = vector[meio + i]; //pensar...
    }

    //variaveis parac controlar quem é laço de cada sublista
    int i = 0; //vetor esquerda
    int j = 0; //vetor direita
    int k = 0; //vetor maior

    while(i < n1 && j < n2){
        if(L[i] <= R[i]){
            vector[k] = L[i];
            i++;
        }
        else{
            vector[k] = R[j];
            j++;
        }
        k++;
    }

    while (j < n2){
        vector[k] = R[i];
        j++;
        k++;
    }

    while (i < n1){
        vector[k] = L[i];
        i++;
        k++;
    }
    
    

}