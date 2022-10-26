#include <stdio.h>
#include <stdbool.h>

typedef struct _double_node DoubleNode, Node;
typedef struct _duble_linked_list DoubleLinkedList, List;

Node *Node_create(int val);
DoubleLinkedList *List_create();
void List_Destroy(DoubleLinkedList **list); 
bool List_is_empty(const DoubleLinkedList *list);
void List_Add_Last(DoubleLinkedList *list, int val);  
void List_print(const DoubleLinkedList *list);