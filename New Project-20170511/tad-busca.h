//tad-busca.c

#define NOT_FOUND -1

int buscaSequencial(unsigned int a[], int tam, unsigned short v)
{
  int pos = NOT_FOUND; // assumir que o elemento nao existe
  int c;
  for (c = 0; c < tam; c++){
      if (a[c] == v){
          pos = c;
          break;
      }
  }
  return pos;
}