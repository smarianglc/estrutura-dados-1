#include <stdio.h>
#include <stdlib.h>
#include "pilha-dinamica.h"

int main (void){

    DoubleLinkedList *inicioList = List_create();

    printf("1ª LISTAS");
    List_Add_Last(inicioList, 2);
    printf("%d -> ", inicioList);
    List_Add_Last(inicioList, 3);
    printf("%d -> ", inicioList);
    List_Add_Last(inicioList, 10);
    printf("%d -> ", inicioList);
    List_Add_Last(inicioList, 90);
    printf("%d -> ", inicioList);
    List_Add_Last(inicioList, 2);
    printf("%d -> ", inicioList);
    List_Add_Last(inicioList, 25);
    printf("%d -> ", inicioList);
    List_Add_Last(inicioList, 1);
    printf("%d -> ", inicioList);

    printf("\n\n");

    printf("1ª LISTAS");
    List_Add_Last(inicioList,32);
    printf("%d -> ", inicioList);
    List_Add_Last(inicioList, 54);
    printf("%d -> ", inicioList);
    List_Add_Last(inicioList, 5);
    printf("%d -> ", inicioList);
    List_Add_Last(inicioList, 23);
    printf("%d -> ", inicioList);

    return 0;
}