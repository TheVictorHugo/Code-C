
struct Node{
    int num;
    struct  Node *prox;

};

typedef struct Node node;

void inicia(node *LISTA);
int menu(void);
void opcao(node *LISTA, int op);
node *criaNO();
void insereFim(node *LISTA);
void insereInicio(no * LISTA);
