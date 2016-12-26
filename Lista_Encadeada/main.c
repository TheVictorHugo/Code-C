#include <stdio.h>
#include <stdlib.h>
#include "code.h"

int main()
{
 //http://www.cprogressivo.net/2013/10/Lista-simplesmente-encadeada-com-cabeca-em-C-Inserindo-nos-no-inicio-e-fim.html
    node *LISTA = (node *) malloc(sizeof(node));
    if(!LISTA){
      printf("Sem memoria disponivel!\n");
      exit(1);
    }
    inicia(LISTA);
    int opt;

    do{
      opt=menu();
      opcao(LISTA, opt);

    }while(opt);
    return 0;
}
//=====================================================================================
int menu(void){
  int opt;

  printf("Escolha a opcao\n" );
  printf("0. Sair\n");
    printf("1. Exibir lista\n");
      printf("2. Adicionar node no inicio\n");
        printf("3.  Adicionar node no final\n");
          printf("4. Zerar lista\n");
            printf("Opcao: ");
            scanf("%d", &opt);

            return opt;

}

//=====================================================================================

void opcao(node *LISTA, int op){

  switch(op){

    case 0:
      libera(LISTA);
      break;
    case 1:
      exibe(LISTA);
      break;
    case 2:
      insereInicio(LISTA);
      break;
    case 3:
      insereFim(LISTA);
      break;
    case 4:
      inicia(LISTA);
      break;

    default:
      printf("Comando invalido\n\n");
  }
}
