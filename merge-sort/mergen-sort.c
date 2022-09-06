#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "float-vector.h"

typedef struct vector_dados{
    int capacity;
    int size;
    int *vetor;
    float *troca; 
}Dados;

bool _isFull(const Dados *vector){
    return vector -> size == vector -> capacity;
}

Dados *create(int tam){
    Dados *vet = calloc (1, sizeof(Dados));
    vet -> capacity = tam;
    vet -> size = 0;
    vet -> vetor = (float*) calloc(vet -> capacity, sizeof(float));

    return vet;
}

int tamanho_vector(const Dados *vector){
    return vector -> size;
}

int valor_tratado(const Dados *vector, int var){
    if(var < 0 || var >= vector -> size){
        fprintf(stderr, "POSICAO ERRADA \n");
        fprintf(stderr, "INDEX [%d] NAO ESTA DENTRO DO VALOR PERMITDO", vector -> vetor[var]);
        exit(EXIT_FAILURE);
    }
    return vector -> vetor[var];
}

int get (const Dados *vector, int idc){
    return vector -> vetor[idc];
}

int set(Dados *vector, int index, int newValor){
    if(index || index >= vector -> size){
        fprintf(stderr, "NAO TEM POSICAO DISPONIVEL \n");
        exit(EXIT_FAILURE);
    }
    vector -> vetor[index] = newValor;
    return newValor;
}

void destroy (Dados **vet__ref){
    Dados *vet = *vet__ref;
    free (vet -> vetor);
    free (vet);
    *vet__ref = NULL;
}

long int cont_troca = 0;
long int cont_varredura = 0;
long int cont_comparacao = 0;

void merge(int *vector, int inicio, int meio, int fim){
    int n1, n2; //iinicializadores de vetores 
    n1 = meio - inicio +1;
    n2 = fim - meio;

    int i, j, k; //pivo    

    int esquerdo[n1]; //sub-vetor direito 
    int direito[n2]; //sub-vetor esquerdo 

    for (int i = 0; i < n1; i++){
        esquerdo[i] = valor_tratado(vector, inicio + 1);
        cont_varredura = cont_varredura + 1;
    }
    for (j =0; j < n2; j++){
        direito[n2] = valor_tratado(vector, meio + 1);
        cont_varredura =  cont_varredura + 1;
    }

    i =0;
    j = 0;
    k = inicio; //vetor pivo principal

    while ( (i < n1 && j < n2)){
        if (esquerdo[i] <= direito[j]){
            set(vector, k, esquerdo[i]);
            i++;
        }
        else{
            set(vector,k,direito[j]);
            j++;
        }
        k++;
    }

    while (i < n1){
        set(vector,k,esquerdo[i]);
        i++;
        k++;
    }

    while (j < n2){
        set(vector,k,direito[j]);
        i++;
        j++;
    }
}

int capacity (const FloatVector *vector){
    return vector -> capacity;
}
  
    
