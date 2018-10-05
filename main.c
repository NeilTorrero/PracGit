#include <stdio.h>
#include <stdlib.h>
#include <llista.h>

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

  //void LLISTABIORD_avanca (LlistaBiOrd *l);

  //void LLISTABIORD_retrocediex (LlistaBiOrd *l);

  //void LLISTABIORD_vesInici (LlistaBiOrd *l);

  //void LLISTABIORD_vesFi (LlistaBiOrd *l);

  //int LLISTABIORD_inici (LlistaBiOrd l);

  //int LLISTABIORD_fi (LlistaBiOrd l);

  //int LLISTABIORD_buida (LlistaBiOrd l);

  //int LLISTABIORD_destrueix (LlistaBiOrd *l);
}
