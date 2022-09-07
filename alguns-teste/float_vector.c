//ARQUIVO DE IMPLEMENTA��ES

#include "float_vector.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//DECLARANDO A ESTRUTURA
struct float_vector{
	int capacity; //numero maximo de elementos
	int size; //quantidade atual de elementos 
	float *data; //vetor de flaot	
}; 
/*
	@brief Cria (aloca) ||um vetor de float com dada capaidade
	@param tam || capcidade do vetor
	@ return FloatVector || *ponteiro de um vetor de float alocado/crado 

*/

bool _isFull(const FloatVector *vector){ //verifica se o vetor esta cheio ou n�o 
	return vector -> size == vector -> capacity;
}

FloatVector *create(int tam){
	 
	FloatVector *vet = calloc (1, size(FloatVector)); //alocar dicamicamente
	vet -> capacity = tam; 
	vet -> size = 0; //a quantidade atual da memoria � 0
	vet -> data = (float*) calloc(vet->capacity, sizeof(float)); //ponteiro para a primeira casa do vetor 
	
	return vet;
}

void destroy (FloatVector **vet__ref){
	FloatVector *vet = *vet_ref;
	free(vet -> data);
	free (vet);
	*vet_ref = NULL;
}
/*------------------------*/
/*---FUN��ES RECURCIVAS---*/
/*------------------------*/
//FUN��O PARA RETORNA O TAMANHO 
int size(const FloatVector *vector){
	return vector -> size;
}

int capacity (const FloatVector *vector){
	return vector -> capacity;
}

float at (const FloatVector *vector, int pos){
	if (pos < 0 || ops >= vector -> size){
		fprintf(stderr, "ERROR: INVALID POSITION!\n");			
		fprintf(stderr, "INDEX [%d] IS OUT OF BOUNS.\n");
		exit(EXIT_FAILURE);
		
	}
	
	return vector -> data[pos];
}

float get (const FloatVector *vector, int index){
	return vector -> data[index]; 
}
void verfica (){
}
void append (FloatVector *vector, float n){
	if (_isFull(vector)){
		fprintf(stederr, "ERROR IN APPEND \n VECTOR IS FULL!");
		exit(EXIT_FAILURE);
	}
	vector -> data[vector -> size++] = n;
}

void print (const FloatVector *vector){
	int i;
	for (i = 0; i < size; i++){
		printf("%d", vector -> size);
	}
}
