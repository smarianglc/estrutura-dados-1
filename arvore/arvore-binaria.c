#include <stdlib.h>
#include<stdio.h>
#include "arvore-binaria.h"

//FUNCAO DE RECURSIVA
/*não é passada na .h porque é usada somente aqui*/
void add(Node *node, int val);
void pre(Node *node);
void in(Node *node);

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

void Node_destroy(Node **N_ref){
    Node *no = *N_ref;
    if (no == NULL){
        return;
    }
    free(no);
    *N_ref = NULL;
}

void Tree_destroy(Tree *T){
    if(T->root == NULL){
        fprintf(stderr, "ERRO AO DETRUIR");
        fprintf(stderr, "Arvore não tem raizes");
        exit(EXIT_FAILURE);
    }
    Node_destroy(T->root);
    free(T);
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
    if (node != NULL){
        printf("%d", node->val);
        pre(node->left);
        pre(node->right);
    }
}

void pre_order(Tree *T){
    if(tree_is_empty(T)){
        puts("ARVORE NULA");
        return;
    }
    pre(T->root);
}

