#include <stdio.h>
#include <stdlib.h>
#include "tad-pilha.h"

int main()
{
TipoPilha pilha; TipoItem item; int i; int chaves[] = {10, 11, 12, 45, 1};

  FPVazia(&pilha); // Inicializa a pilha
  printf("Pilha vazia?: %d\n", VaziaPilha(pilha)); // pilha vazia?
  item = TopoPilha(&pilha); // elemento no topo da pilha
  printf("Elemento no topo da pilha: %d\n", item.Chave);
  printf("=======================\n");
  for (i = 0; i < 5; i++){ /*Empilha cada chave */
    item.Chave = chaves[i]; Empilha(item, &pilha);
    printf("Empilhou: %3d \n", item.Chave);
    ImprimirPilha(pilha);
  }
  int tamPilha = TamanhoPilha(pilha); // tamanho da pilha
  printf("Tamanho da pilha: %d \n", tamPilha);
  printf("Pilha vazia?: %d\n", VaziaPilha(pilha)); // pilha vazia?
  item = TopoPilha(&pilha); // elemento no topo da pilha
  printf("Elemento no topo da pilha: %d\n", item.Chave);
  printf("=======================\n");
  for (i = 0; i < tamPilha; i++) { /*Desempilha cada chave */
    Desempilha(&pilha, &item);
    printf("Desempilhou: %3d \n", item.Chave);
    ImprimirPilha(pilha);
  }
  printf("Tamanho da pilha: %d\n", TamanhoPilha(pilha)); // tamanho da pilha
  printf("Pilha vazia?: %d\n", VaziaPilha(pilha)); // pilha vazia?
  system("PAUSE");
  return EXIT_SUCCESS;
    
}

