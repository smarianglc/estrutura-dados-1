#include <stdlib.h>
#include<stdio.h>
#include "arvore-binaria.h"

//FUNCAO DE RECURSIVA
/*não é passada na .h porque é usada somente aqui*/
void add(Node *node, int val);
void pre(Node *node);

typedef struct _tree{
    Node *root; //raiz
    int depth; //profudidade da arvore
}Tree;

typedef struct _node{
    int val;
    Node *left;
    Node *right;
}Node;

Tree *create_tree(){
    Tree *T = (Tree*) malloc(sizeof(Tree));
    return T;
}


Node *create_node(int val){
    Node *node = (Node *) malloc(sizeof(Node));

    node->val = val;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void destroy_tree(Tree *T){

}

bool tree_is_empty(Tree *T){
    return T->root = NULL;
}

void add(Node *node, int val){
    Node *n = create_node(val);

    if(node->val > val){ //lado esquerdo
        if(node->left = NULL){
            node->left = n;
            return;
        }else{
            add(node->left, val);
        }
    }else{ //lado direito
        if (node->right = NULL){
            node->right = n;
            return;
        }else{
            add(node->right = NULL, val);
        }
        

    }
}

void insert(Tree *T, int val){
    if (tree_is_empty(T)){
        T->root = create_node(val);

        puts("creating tree ...");
        return;
    }

    add(T->root, val);
}

void pre(Node *node){

}
void pre_order(Tree *T){
    if(tree_is_empty);
}