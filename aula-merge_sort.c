#include <stdio.h> 
#include <stdlib.h>

// PROTOTIPOS DAS FUNCOES 
int mergesort(int arr[], int inicio, int fim);
void merge(int arr[], int inicio, int meio, int fim);

int main (){
    int arr[] = {3, 0, 7, 1, 5, 2, 4, 6};
}

int mergesort(int arr[], int inicio, int fim){
    if(inicio < fim){
        
        int meio = inicio + (fim - inicio)/2;  
        //abrindo o vetor
        mergesort(arr, inicio, meio); //chamando a primeira metade
        mergesort(arr, meio +1, fim); //chamando a outra metade 
        //juntando os subvetores "função merge"
        merge(arr, inicio, meio, fim);
    }   
}

void merge(int arr[], int inicio, int meio, int fim){
    int n1 = meio - inicio +1;
    int n2 = fim - meio;

    int L[n1]; //direito 
    int R[n2]; //esquerdo 

    for (int i = 0; i < n1; i++){
        L[i] = arr[inicio + i];
    }

    for (int i = 0; i < n1; i++){
        R[i] = arr[meio + i]; //pensar...
    }

    //variaveis parac controlar quem é laço de cada sublista
    int i = 0; //vetor esquerda
    int j = 0; //vetor direita
    int k = 0; //vetor maior

    while(i < n1 && j < n2){
        if(L[i] <= R[i]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (j < n2){
        arr[k] = R[i];
        j++;
        k++;
    }

    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    
    

}