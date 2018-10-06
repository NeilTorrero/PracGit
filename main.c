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
  int e;
  int e_consulta;

  printf("Creacio llista\n");
  l = LLISTABIORD_crea();

  printf("Insercio ordenada a la llista\n");
  e = 12;
  LLISTABIORD_insereixOrdenat (*l, e);

  printf("Consulta valor element dins la llista\n");
  e_consulta = LLISTABIORD_consulta (l);
  printf("Valor element = %d \n", e_consulta);

  printf("Esborra el element on es situa el pdi\n");
  LLISTABIORD_esborra (*l);
  e_consulta = LLISTABIORD_consulta (l);
  printf("Valor element = %d \n", e_consulta);

  printf("Avanca el pdi al seguent element de la llista\n");
  //void LLISTABIORD_avanca (LlistaBiOrd *l);

  printf("Retrocediex el pdi al anterior element de la llista\n");
  //void LLISTABIORD_retrocediex (LlistaBiOrd *l);

  printf("El pdi es situa al principi de la llista\n");
  //void LLISTABIORD_vesInici (LlistaBiOrd *l);

  printf("El pdi es situa al final de la llista\n");
  //void LLISTABIORD_vesFi (LlistaBiOrd *l);

  printf("Retorna 1 si el pdi esta al principi de la llista\n");
  //int LLISTABIORD_inici (LlistaBiOrd l);

  printf("Retorna 1 si el pdi esta al final de la llista\n");
  //int LLISTABIORD_fi (LlistaBiOrd l);

  printf("Retrona 1 si la llista es buida\n");
  //int LLISTABIORD_buida (LlistaBiOrd l);

  printf("Destruiex la llista, alliberant memoria\n");
  //int LLISTABIORD_destrueix (LlistaBiOrd *l);
}
