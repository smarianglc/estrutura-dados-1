#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

int main (void){

    LinkedList *inicioList = LiLi_create();

    // ADD_LinkedList(inicioList, 5);
    // Print_LinkedList(inicioList);

    // ADD_LinkedList(inicioList, 4);
    // Print_LinkedList(inicioList);

    // ADD_LinkedList(inicioList, 2);
    // Print_LinkedList(inicioList);

    // ADD_LinkedList(inicioList, 10);
    // Print_LinkedList(inicioList);

    add_Last_ll(inicioList, 10);
    add_Last_ll(inicioList, 2);
    add_Last_ll(inicioList, 4);
    add_Last_ll(inicioList, 5);
    add_Last_ll(inicioList, 7);
    Print_LinkedList(inicioList);
    
    return 0;
}