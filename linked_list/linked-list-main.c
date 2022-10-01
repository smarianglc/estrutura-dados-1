#include <stdio.h>
#include <stdlib.h>
#include "mytime.h"
#include "linked-list.h"

int main (void){

    //LinkedList *inicioList = LiLi_create();

    // ADD_LinkedList(inicioList, 5);
    // Print_LinkedList(inicioList);

    // ADD_LinkedList(inicioList, 4);
    // Print_LinkedList(inicioList);

    // ADD_LinkedList(inicioList, 2);
    // Print_LinkedList(inicioList);

    // ADD_LinkedList(inicioList, 10);
    // Print_LinkedList(inicioList);
//---------------------------------------------------------------
    // add_Last_ll(inicioList, 10);
    // add_Last_ll(inicioList, 2);
    // add_Last_ll(inicioList, 4);
    // add_Last_ll(inicioList, 5);
    // add_Last_ll(inicioList, 7);
    // Print_LinkedList(inicioList);
//------------------------------------------------------------------
    // LinkedList *L_slow = ADD_LinkedList();
    // int i;
    // timer t1, t2;

    // t1 = tic();
    // for(i = 0; i < 1000; i++){
    //     add_Last_slow_ll(L_slow, i);
    // }
    // t2 = tac();
    // printf("Tempo de performace de add last slow: %f\n", comptime(t1,t2));

    // LinkedList *L_fast1 = ADD_LinkedList();

    // t1 = tic();
    // for(i = 0; i < 1000; i++){
    //     add_Last_ll(L_fast1, i);
    // }
    // t2 = tic();
    // printf("Tempo de performace de add last: %f\n",comptime(t1,t2));
//------------------------------------------------------------------------------------------

    LinkedList *inicioList = LiLi_create();

    ADD_LinkedList_Inicio(inicioList, 5);
    Print_LinkedList(inicioList);

    ADD_LinkedList_Inicio(inicioList, 4);
    Print_LinkedList(inicioList);

    ADD_LinkedList_Inicio(inicioList, 2);
    Print_LinkedList(inicioList);

    ADD_LinkedList_Inicio(inicioList, 10);
    Print_LinkedList(inicioList);


    return 0;
}