typedef struct _node_simple NodeSimple;
typedef struct _linked_list LinkedList;

LinkedList *LiLi_create(int val);
NodeSimple *Create_NoSi(int val); 

void add_Last_slow_ll(LinkedList *L, int val);
void add_Last_ll(LinkedList *L, int val);
void Print_LinkedList(const LinkedList *L);