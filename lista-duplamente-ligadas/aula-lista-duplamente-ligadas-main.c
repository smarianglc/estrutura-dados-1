#include<stdio.h>
#include<stdlib.h>
#include"aula-lista-duplamente-ligadas.c"


int main (){
    List *l = List_create();

    list_print(l);
    List_inverted_print(l);

    List_remove(l, 13);
    list_print(l);
    List_inverted_print(l);

    List_Add_firt(l, 1);
    List_Add_firt(l, 3);
    List_Add_firt(l, 6);
    List_Add_firt(l, 10); 

    list_print(l);
    List_inverted_print(l);

    List_remove(l, 1);
    list_print(l);
    List_inverted_print(l);

    List_remove(l, 3);
    list_print(l);
    List_inverted_print(l);

    //ADICIONANDO NO FINAL
    // List_Add_Last(l, 10);
    // List_Add_Last(l,6);
    // List_Add_Last(l, 3);
    // List_Add_Last(l, 1);

    // List_print(l);
    // List_inverted_print(l);

    // List_Add_Last(l,3);
    // List_Add_Last(l,1);
    // List_Add_firt(l, 6);
    // List_Add_firt(l, 10); 

    // List_print(l);
    // List_inverted_print(l);


    List_Destroy(&l);

    printf("\n----------------------------------------------");


    return 0;
}