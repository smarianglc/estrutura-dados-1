//ARQUIVOS DE ESPECIFICOES 
/*crie um TAD de um vetos de float 
- o vetor tem uma capacidade máxima (numero máximo de elementos)
- o vetor imforma seu tamanho (quantidade de elemtos armazenados atualmente)
*/

typedef struct float_vector FloatVector; //TAD

FloatVector *create (int tam); 
void detroy (FloatVector **ref_vector);
int size (const FloatVector *vector); //retorna o tamanho do vetor (numero atual de elementos inseridos) --- NÃO É IDEIAL USAR ESSES NOME
int capacity (const FloatVector *vector); //retorna a capacidade do vetor (numero maximo de elementos)
float at (const FloatVector *vector, int pos); // --- NÃO É IDEIAL USAR ESSES NOME
float get (const FloatVector *vector,  int index); //--- NÃO É IDEIAL USAR ESSES NOME
//FAZER
void append (FloatVector *vector, float n);
void print (const FloatVector *vector);
bool _isFull(const FloatVector *vector); //verifica se o vetor esta cheio ou nao

//---- PODERIA EXISTIR 
// bool compare(FloatVetor);
//void join(FloatVector, FloatVector);
//void split(FloatVector, FloatVector);
