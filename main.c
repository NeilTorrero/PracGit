#include "llista.h"

void main() {
  LlistaBiOrd lbo;
  int element, boolea;
  int e_consulta;

  printf("Creacio llista\n");
  lbo = LLISTABIORD_crea();


  printf("Insercio ordenada a la llista\n");
  element = 1;
  lbo = LLISTABIORD_insereixOrdenat (lbo, element);
  element = 2;
  lbo = LLISTABIORD_insereixOrdenat (lbo, element);
  element = 3;
  lbo = LLISTABIORD_insereixOrdenat (lbo, element);


  printf("Consulta valor element dins la llista\n");
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);


  printf("Esborra el element on es situa el pdi\n");
  LLISTABIORD_esborra (&lbo);
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);


  printf("Retrocediex el pdi al anterior element de la llista\n");
  LLISTABIORD_retrocediex (&lbo);
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);


  printf("Avanca el pdi al seguent element de la llista\n");
  LLISTABIORD_avanca (&lbo);
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);


  printf("El pdi es situa al principi de la llista\n");
  LLISTABIORD_vesInici (&lbo);
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);

  printf("Retorna 1 si el pdi esta al principi de la llista\n");
  boolea = LLISTABIORD_inici (lbo);

  printf("Retorna 1 si el pdi esta al final de la llista\n");
  boolea = LLISTABIORD_fi (lbo);


  printf("El pdi es situa al final de la llista\n");
  LLISTABIORD_vesFi (&lbo);
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);

  printf("Retorna 1 si el pdi esta al principi de la llista\n");
  boolea = LLISTABIORD_inici (lbo);

  printf("Retorna 1 si el pdi esta al final de la llista\n");
  boolea = LLISTABIORD_fi (lbo);


  printf("Retrona 1 si la llista es buida\n");
  boolea = LLISTABIORD_buida (lbo);
  LLISTABIORD_vesInici (&lbo);
  LLISTABIORD_esborra (&lbo);
  LLISTABIORD_esborra (&lbo);
  boolea = LLISTABIORD_buida (lbo);

  printf("Destruiex la llista, alliberant memoria\n");
  LLISTABIORD_destrueix (&lbo);
  e_consulta = LLISTABIORD_consulta (lbo);
}
