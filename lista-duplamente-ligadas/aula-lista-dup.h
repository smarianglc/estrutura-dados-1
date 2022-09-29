#include<stdbool.h>

typedef struct _double_node DoubleNode, Node;
typedef struct _duble_linked_list DoubleLinkedList, List;

Node *Node_create(int val);
DoubleLinkedList *List_create();


void List_Destroy(DoubleLinkedList **list); //eu fazer
bool List_is_empty(const DoubleLinkedList *list);//eu fazer
void List_Add_firt(DoubleLinkedList *list, int val); 
void List_Add_Last(DoubleLinkedList *list, int val); //eu fazer  
void List_print(const DoubleLinkedList *list);
void List_inverted_print(const DoubleLinkedList *list); //eu fazer 
void List_remove(DoubleLinkedList *list); //eu fazer 