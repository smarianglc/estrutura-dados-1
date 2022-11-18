#include <stdbool.h>

typedef struct circ_node CircNode;
typedef struct circ_list CircList;

CircNode *CircNode_create(int val);
CircList *CircList_create();

void CircNode_destroy(CircNode **N_ref);
void CircList_destroy(CircList **L_ref);
void CircList_destroy_v2(CircList **L_ref);
bool CircList_is_empty(const CircList *L);
void CircList_add_first(CircList *L, int val);