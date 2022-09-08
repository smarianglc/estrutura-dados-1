typedef struct _node_simple NodeSimple;
typedef struct _linked_list LinkedList;

LinkedList *LiLi_create();
NodeSimple *Create_NoSi(int val); 

void ADD_LinkedList(LinkedList *L, int val);
void Print_LinkedList(const LinkedList *L);