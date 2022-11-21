#include<stdbool.h>

//declarando as estruturas 
typedef struct _tree Tree;
typedef struct _node Node;

//criando as estruturas
Tree *create_tree();
Node *create_node(int val);

//FUNCOES
void destroy_tree(Tree *T); //função para destruir a arvore || FAZER SOZINHA
bool tree_is_empty(Tree *tree); //função para verificar se a arvore é nula 
void insert(Tree *T, int val); //função de inserir 
void search(Tree *T, int val); //função de busca
void remove(Tree *T, int val); //funcao de remover um valor
void check_symmetry(Tree *T, int val);

void pre_order(Tree *T); //imprimir em pre-ordem
void in_order(Tree *T, int val); // imprimir em in-ordem
void pos_order(Tree *T, int val);