#include <stdio.h>
#include <stdlib.h>
#include "tad-pilha.h"

// função que cria uma nova pilha
void FPVazia(TipoPilha *Pilha)
{ // cria a célula cabeça
  Pilha->Topo = (TipoApontador) 
    malloc(sizeof(TipoCelula));
  // inicializa o topo e fundo
  Pilha->Fundo = Pilha->Topo;
  // inicializa o próximo do topo
  Pilha->Topo->Prox = NULL;
  // inicializa o tamanho
  Pilha->Tamanho = 0;
}

// função que verifica se a 
//pilha está vazia
int VaziaPilha(TipoPilha Pilha)
{ // se a célula no topo for igual 
  // a célula no fundo, ela está
  // vazia
  return (
    Pilha.Topo == Pilha.Fundo); 
}

// função que empilha um item na pilha
void Empilha(TipoItem x, TipoPilha *Pilha)
{ 
  TipoApontador Aux;  // apontador auxiliar
  // aloca o apontador auxiliar
  Aux = Pilha->Topo->Prox;
  Pilha->Topo->Prox = (TipoApontador) 
    malloc(sizeof(TipoCelula));
  // coloca o item no topo da pilha
  Pilha->Topo->Prox->Item = x;
  // topo recebe auxiliar
  Pilha->Topo->Prox->Prox = Aux;
  // incrementar o tamanho da pilha
  Pilha->Tamanho++;
  if (TamanhoPilha(*Pilha) == 1)
  {
      Pilha->Fundo = Aux;
  }
}

// função que desempilha o item no 
// topo da pilha
void Desempilha(TipoPilha *Pilha, 
  TipoItem *Item)
{ TipoApontador q;
  // se a pilha estiver vazia, 
  // mostrar uma mensagem de erro
  if (VaziaPilha(*Pilha)) { 
    printf("Erro: pilha vazia\n"); return; 
  }
  q = Pilha->Topo; // obtem a célula no topo
  // altera o apontador para 
  // apontar para o próximo
  Pilha->Topo = q->Prox;
  // obtem o item a ser removido do topo
  *Item = q->Prox->Item;
  // libera o espaço de memória alocado
  free(q); 
  // diminuir o tamanho da pilha
  Pilha->Tamanho--;
  if (TamanhoPilha(*Pilha) == 0)
  {
      Pilha->Fundo = Pilha->Topo;
  }
}

// função para obter Tamanho da pilha
int TamanhoPilha(TipoPilha Pilha)
{ 
  return (Pilha.Tamanho); 
    
}

// função para obter o elemento no topo da pilha
TipoItem TopoPilha(TipoPilha *Pilha)
{  TipoItem item; item.Chave = -1;
  if (VaziaPilha(*Pilha) == 0){
    item = Pilha->Topo->Prox->Item;
  }
  return (item);
}

void ImprimirPilha(TipoPilha Pilha)
{ // Apontador auxiliar  
  TipoApontador aux; TipoItem item;
  printf("Pilha Tamanho: %d -> ", 
    Pilha.Tamanho);
  aux = Pilha.Topo;
  printf("Topo: ");
  // enquanto houver células a serem lidas
  while (aux->Prox != NULL){  
    item = aux->Prox->Item; // ler o item
    printf(" %3d | ", item.Chave); // a chave
    aux = aux->Prox; // obter próxima celula
  }
  printf(": Fundo\n");
}
