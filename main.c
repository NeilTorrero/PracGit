#include <stdio.h>
#include <stdlib.h>
#include "llista.h"

typedef struct N{
  int e;
  struct N *seg;
  struct N *ant;
}NodeBiOrd;

typedef struct{
  NodeBiOrd *pri;
  NodeBiOrd *ult;
  NodeBiOrd *pdi;
}LlistaBiOrd;

void main() {
  LlistaBiOrd l;
  int e, boolea;
  int e_consulta;

  printf("Creacio llista\n");
  l = LLISTABIORD_crea();

  printf("Insercio ordenada a la llista\n");
  e = 12;
  LLISTABIORD_insereixOrdenat (&l, e);

  printf("Consulta valor element dins la llista\n");
  e_consulta = LLISTABIORD_consulta (l);
  printf("Valor element = %d \n", e_consulta);

  printf("Esborra el element on es situa el pdi\n");
  LLISTABIORD_esborra (&l);
  e_consulta = LLISTABIORD_consulta (l);
  printf("Valor element = %d \n", e_consulta);

  printf("Avanca el pdi al seguent element de la llista\n");
  LLISTABIORD_avanca (&l);

  printf("Retrocediex el pdi al anterior element de la llista\n");
  LLISTABIORD_retrocediex (&l);

  printf("El pdi es situa al principi de la llista\n");
  LLISTABIORD_vesInici (&l);

  printf("El pdi es situa al final de la llista\n");
  LLISTABIORD_vesFi (&l);

  printf("Retorna 1 si el pdi esta al principi de la llista\n");
  boolea = LLISTABIORD_inici (l);

  printf("Retorna 1 si el pdi esta al final de la llista\n");
  boolea = LLISTABIORD_fi (l);

  printf("Retrona 1 si la llista es buida\n");
  boolea = LLISTABIORD_buida (l);

  printf("Destruiex la llista, alliberant memoria\n");
  boolea = LLISTABIORD_destrueix (&l);
}
