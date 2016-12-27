
struct Pilha{
    int tipo;
    int capa;
    float *pElem;

};

int estavazia(struct Pilha *p);
int estvacheia(struct Pilha *p);
void empilha(struct Pilha *p, float v);
float desempilhar(struct Pilha *p);
float retornatopo(struct Pilha *p);
