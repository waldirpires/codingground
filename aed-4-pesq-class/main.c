#include <stdio.h>
#include "tad-busca.h"

int main()
{
    int a[] = {9, 2, 3, 6, 7, 1};
    int tam = 6;
    int chave;
    
    printf("Busca sequencial\n");
    chave = 7;
    int r = buscaSequencial(a, tam, chave);
    printf("Busca pela chave %d \t Resultado: %d\n\n", chave, r);

    chave = 5;
    r = buscaSequencial(a, tam, chave);
    printf("Busca pela chave %d \t Resultado: %d\n\n", chave, r);
    return 0;
}

