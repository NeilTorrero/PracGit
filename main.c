#include "llista.h"

void main() {
  LlistaBiOrd lbo;
  int element, boolea;
  int e_consulta;

  printf("Creacio llista\n");
  lbo = LLISTABIORD_crea();


  printf("\nInsercio ordenada a la llista\n");
  element = 2;
  lbo = LLISTABIORD_insereixOrdenat (lbo, element);
  element = 1;
  lbo = LLISTABIORD_insereixOrdenat (lbo, element);
  element = 3;
  lbo = LLISTABIORD_insereixOrdenat (lbo, element);
  element = 5;
  lbo = LLISTABIORD_insereixOrdenat (lbo, element);
  element = 4;
  lbo = LLISTABIORD_insereixOrdenat (lbo, element);


  printf("\nConsulta valor element dins la llista\n");
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);


  printf("Consultar tots el elemtns desde el principi\n");
  LLISTABIORD_vesInici (&lbo);
  while (LLISTABIORD_fi (lbo) != 1) {
    e_consulta = LLISTABIORD_consulta (lbo);
    printf("%d \n", e_consulta);
    LLISTABIORD_avanca (&lbo);
  }

  element = 3;
  lbo = LLISTABIORD_insereixOrdenat (lbo, element);
  printf("\nEsborra el element on es situa el pdi\n");
  LLISTABIORD_esborra (&lbo);
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);


  printf("\nAvanca el pdi al seguent element de la llista\n");
  LLISTABIORD_avanca (&lbo);
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);


  printf("\nRetrocediex el pdi al anterior element de la llista\n");
  LLISTABIORD_retrocediex (&lbo);
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);


  printf("\nEl pdi es situa al principi de la llista\n");
  LLISTABIORD_vesInici (&lbo);
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);
  LLISTABIORD_retrocediex (&lbo);

  printf("Retorna 1 si el pdi esta al principi de la llista\n");
  boolea = LLISTABIORD_inici (lbo);
  printf("Retorna = %d \n", boolea);

  printf("Retorna 1 si el pdi esta al final de la llista\n");
  boolea = LLISTABIORD_fi (lbo);
  printf("Retorna = %d \n", boolea);


  printf("\nEl pdi es situa al final de la llista\n");
  LLISTABIORD_vesFi (&lbo);
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);
  LLISTABIORD_avanca (&lbo);

  printf("Retorna 1 si el pdi esta al principi de la llista\n");
  boolea = LLISTABIORD_inici (lbo);
  printf("Retorna = %d \n", boolea);

  printf("Retorna 1 si el pdi esta al final de la llista\n");
  boolea = LLISTABIORD_fi (lbo);
  printf("Retorna = %d \n", boolea);


  printf("\nRetrona 1 si la llista es buida\n");
  boolea = LLISTABIORD_buida (lbo);
  printf("Retorna = %d \n", boolea);

  printf("Es va al inici i es borren els elements\n");
  LLISTABIORD_vesInici (&lbo);
  while (LLISTABIORD_buida (lbo) != 1) {
    LLISTABIORD_esborra (&lbo);
  }
  boolea = LLISTABIORD_buida (lbo);
  printf("Retorna = %d \n", boolea);


  printf("\nDestruiex la llista, alliberant memoria\n");
  LLISTABIORD_destrueix (&lbo);
  printf("Es consulta a la llista\n");
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Retorna (-1 en cas de no haverhi llista) = %d \n", e_consulta);
}
