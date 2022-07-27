/*crie um TAD de um vetos de float 
- o vetor tem uma capacidade máxima (numero máximo de elementos)
- o vetor imforma seu tamanho (quantidade de elemtos armazenados atualmente)
*/

typedef struct float_vector FloatVector;

FloatVector *create (int tam);
void detroy (FloatVector **ref_vector);
int size (const FloatVector *vector); //retorna o tamanho do vetor (numero atual de elementos inseridos)
int capacity (const FloatVector *vector); //retorna a capacidade do vetor (numero maximo de elementos)
float at (const FloatVector *vector, int pos);
float get (const FloatVector *vector);
void append (FloatVector *vector, float n);
void print (const FloatVector *vector);
