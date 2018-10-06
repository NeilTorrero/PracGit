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
  LlistaBiOrd lbo;
  int e, boolea;
  int e_consulta;

  printf("Creacio llista\n");
  lbo = LLISTABIORD_crea();

  printf("Insercio ordenada a la llista\n");
  e = 12;
  LLISTABIORD_insereixOrdenat (&lbo, e);

  printf("Consulta valor element dins la llista\n");
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);

  printf("Esborra el element on es situa el pdi\n");
  LLISTABIORD_esborra (&lbo);
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);

  printf("Avanca el pdi al seguent element de la llista\n");
  LLISTABIORD_avanca (&lbo);

  printf("Retrocediex el pdi al anterior element de la llista\n");
  LLISTABIORD_retrocediex (&lbo);

  printf("El pdi es situa al principi de la llista\n");
  LLISTABIORD_vesInici (&lbo);

  printf("El pdi es situa al final de la llista\n");
  LLISTABIORD_vesFi (&lbo);

  printf("Retorna 1 si el pdi esta al principi de la llista\n");
  boolea = LLISTABIORD_inici (lbo);

  printf("Retorna 1 si el pdi esta al final de la llista\n");
  boolea = LLISTABIORD_fi (lbo);

  printf("Retrona 1 si la llista es buida\n");
  boolea = LLISTABIORD_buida (lbo);

  printf("Destruiex la llista, alliberant memoria\n");
  boolea = LLISTABIORD_destrueix (&lbo);
}
