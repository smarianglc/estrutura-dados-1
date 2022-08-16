#include <stdio.h>

int main (){
    int arr[] = {3, 0, 7, 1, 5, 2, 4, 6};
}

int mergesort(int vector[], int inicio, int fim){
    if(inicio < fim){
        
        int meio = inicio + (fim - inicio)/2;  
        //abrindo o vetor
        mergesort(vector, inicio, meio); //chamando a primeira metade
        mergesort(vector, meio +1, fim); //chamando a outra metade 
        //juntando os subvetores "função merge"
        merge(vector, inicio, meio, fim);
    }   
}