#include <stdio.h>
#include <stdlib.h>
#include <llista.h>

void main() {
  LlistaBiOrd l;
  Element e;

  printf("Creacio llista\n");
  l = LLISTABIORD_crea();

  printf("Insercio ordenada a la llista\n");
  e = 12;
  LLISTABIORD_insereixOrdenat (*l, e);

  //Element LLISTABIORD_consulta (LlistaBiOrd l);

  //void LLISTABIORD_esborra (LlistaBiOrd *l);

  //void LLISTABIORD_avanca (LlistaBiOrd *l);

  //void LLISTABIORD_retrocediex (LlistaBiOrd *l);

  //void LLISTABIORD_vesInici (LlistaBiOrd *l);

  //void LLISTABIORD_vesFi (LlistaBiOrd *l);

  //int LLISTABIORD_inici (LlistaBiOrd l);

  //int LLISTABIORD_fi (LlistaBiOrd l);

  //int LLISTABIORD_buida (LlistaBiOrd l);

  //int LLISTABIORD_destrueix (LlistaBiOrd *l);
}
