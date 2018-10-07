/************************************
*
*@Proposit: Implementacio d'una llista
*bidirrecional ordenada i el seu testeig.
*@Autor: Neil Torrero Salas
*
* ***********************************/
#include "llista.h"

void main() {
  LlistaBiOrd lbo;
  int element, boolea;
  int e_consulta;

  //Crea la llista
  printf("Creacio llista\n");
  lbo = LLISTABIORD_crea();

  //Inserecio elements a la llista
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

  //Es consulta el ultim element inserit
  printf("\nConsulta valor element dins la llista\n");
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);

  //Es va al inici i es fa un bucle que consulti tots els elemntes dins la llista
  printf("Consultar tots el elements desde el principi\n");
  LLISTABIORD_vesInici (&lbo);
  while (LLISTABIORD_fi (lbo) != 1) {
    e_consulta = LLISTABIORD_consulta (lbo);
    printf("%d ", e_consulta);
    LLISTABIORD_avanca (&lbo);
  }

  //Insercio de un element
  printf("\n");
  element = 3;
  lbo = LLISTABIORD_insereixOrdenat (lbo, element);

  //S'esborra el element i consulta que s'hagi esborrat
  printf("Esborra el element on es situa el pdi\n");
  LLISTABIORD_esborra (&lbo);
  LLISTABIORD_vesInici (&lbo);
  while (LLISTABIORD_fi (lbo) != 1) {
    e_consulta = LLISTABIORD_consulta (lbo);
    printf("%d ", e_consulta);
    LLISTABIORD_avanca (&lbo);
  }

  //S'avanca el pdi i es mira quin es el seguent element
  printf("\nAvanca el pdi al seguent element de la llista\n");
  LLISTABIORD_avanca (&lbo);
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);

  //Es retrocediex el pdi i es mira quin es el anterior element
  printf("\nRetrocediex el pdi al anterior element de la llista\n");
  LLISTABIORD_retrocediex (&lbo);
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);

  //Es posa el pdi al principi de la llista i es mira el element
  printf("\nEl pdi es situa al principi de la llista\n");
  LLISTABIORD_vesInici (&lbo);
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);
  //Es fa retrocedir el pdi per arribar al fantasma de inici
  LLISTABIORD_retrocediex (&lbo);

  //Es mira si esta al inici i al final
  printf("Retorna 1 si el pdi esta al principi de la llista\n");
  boolea = LLISTABIORD_inici (lbo);
  printf("Retorna = %d \n", boolea);

  printf("Retorna 1 si el pdi esta al final de la llista\n");
  boolea = LLISTABIORD_fi (lbo);
  printf("Retorna = %d \n", boolea);

  //Es posa el pdi al final de la llista i es mira el element
  printf("\nEl pdi es situa al final de la llista\n");
  LLISTABIORD_vesFi (&lbo);
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Valor element = %d \n", e_consulta);
  //Es fa avancar el pdi per arribar al fantasma de final
  LLISTABIORD_avanca (&lbo);

  //Es mira si esta al inici i final
  printf("Retorna 1 si el pdi esta al principi de la llista\n");
  boolea = LLISTABIORD_inici (lbo);
  printf("Retorna = %d \n", boolea);

  printf("Retorna 1 si el pdi esta al final de la llista\n");
  boolea = LLISTABIORD_fi (lbo);
  printf("Retorna = %d \n", boolea);

  //Es mira si la llista esta buida
  printf("\nRetorna 1 si la llista es buida\n");
  boolea = LLISTABIORD_buida (lbo);
  printf("Retorna = %d \n", boolea);
  //Es va al inici i es borra tota la llista
  printf("Es va al inici i es borren els elements\n");
  LLISTABIORD_vesInici (&lbo);
  while (LLISTABIORD_buida (lbo) != 1) {
    LLISTABIORD_esborra (&lbo);
  }
  boolea = LLISTABIORD_buida (lbo);
  printf("Retorna = %d \n", boolea);

  //S'increix un element per saber si s'ha eliminat la llista posteriorment
  element = 4;
  lbo = LLISTABIORD_insereixOrdenat (lbo, element);

  //Es destrueix la llista i es mira que no agafi cap valor al consultar
  printf("\nDestruiex la llista, alliberant memoria\n");
  LLISTABIORD_destrueix (&lbo);
  printf("Es consulta a la llista\n");
  e_consulta = LLISTABIORD_consulta (lbo);
  printf("Retorna (-1 en cas de no haverhi llista) = %d \n", e_consulta);
}
