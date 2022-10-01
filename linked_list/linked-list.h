#include<stdbool.h>

typedef struct _node_simple NodeSimple;
typedef struct _linked_list LinkedList;

LinkedList *LiLi_create();
NodeSimple *Create_NoSi(int val); 

bool *LinkedList_is_empty(const LinkedList *l);
void ADD_LinkedList_Inicio(LinkedList *L, int val)
void add_Last_slow_ll(LinkedList *L, int val);
void add_Last_ll(LinkedList *L, int val);
void Print_LinkedList(const LinkedList *L);