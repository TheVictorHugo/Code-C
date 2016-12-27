#include <stdio.h>
#include <stdlib.h>
#include "code.h"

//by: http://www.cos.ufrj.br/~rfarias/cos121/pilhas.html
int main()
{
    struct Pilha minhapilha;
    int capacidade, op;
    float valor;

    printf("\n Capacidade da pilha? ");
    scanf("%d", %capacidade);

    criapilha(&minhapilha, capacidade);

    while(1){
        printf("\n1 - empilhar (push)\n");
        printf("2 - desemplinhar (pop)\n");
        printf("3 - Mostrar o topo \n");
        printf("4 - sair\n");
        printf("\nopcao? ");
        scanf("%d", &op);

        switch (op){
        case 1://push
            if(estacheia(&minhapilha) == 1)
                printf("\n Pilha Cheia! \n");
            else{
                printf("\n Valor? ");
                scanf("%f", &valor);
                empilha(&minhapilha, valor);
            }
            break;
        case 2://pop
            if(estava(&minhapilha) == 1)
                printf("\n Pinha vazia! \n");
            else{
                valor = desempilhar (&minhapilha);
                printf("\n%.1f desempinhado!\n", valor);
            }
            break;
        case 3:// mostra topo
            if(estavazia(&minhapilha) == 1)
                printf("\n Pinha vazia!\n");
            else{
                valor = retornatopo (&minhapilha);
                printf("\ntopo: %.1f\n", valor);
            }
            break;
        case 4:
            exit(0);
            default: printf("\n Opacao Invalida! \n");







        }

    }
}
