#include <stdlib.h>
#include<stdio.h>
#include "arvore-binaria.h"

int main (void){

    Tree *t = create_tree();
    insert(t, 10);
    insert(t, 2);
    insert(t, 30);
    insert(t, 15);
    insert(t, 19);
    insert(t, 8);
    insert(t, 1);
    insert(t, 13);
    insert(t, 25);
    
    return 0;
}