/************************************
*
*@Proposit: Implementacio d'una llista
*bidirrecional ordenada.
* Interficie modul LLISTABIORD
*@Autor: Neil Torrero Salas
*
* ***********************************/

#include "llista.h"


/**********************************************************
 *
 * @Finalitat: Crear informacio qualsevol per al fantasma.
 * @Parametres: ----.
 * @Retorn: Retorna el registre amb la informacio.
 *
 * *******************************************************/
int ELEMENT_indefinit (){
  int e;
  e = -1;
  return e;
}

/**********************************************************
 *
 * @Finalitat: Crear la llista a partir del no res.
 * @Parametres: int/out: ok = Variable que actua com
 * 							boleana per els errors.
 * @Retorn: Retorna la llista amb el fantasma i el punters.
 *
 * *******************************************************/
LlistaBiOrd LLISTABIORD_crea(){
  LlistaBiOrd l;
  l.pri = (NodeBiOrd*) malloc (sizeof(NodeBiOrd));
  if (l.pri == NULL){
    printf ("No s'ha pugut crear la llista.\n");
  }else{
    l.pri -> e = ELEMENT_indefinit();
    l.pri -> ant = NULL;
    l.ult = (NodeBiOrd*) malloc (sizeof(NodeBiOrd));
    if (l.ult == NULL) {
      printf ("No s'ha pugut crear la llista.\n");
      free (l.pri);
      l.pri = NULL;
    }else{
      l.ult -> e = ELEMENT_indefinit();
      l.ult -> seg = NULL;
      l.pri -> seg = l.ult;
      l.ult -> ant = l.pri;
      l.pdi = l.ult;
      printf("Llista creada\n");
    }
  }
  return l;
}

/**********************************************************
 *
 * @Finalitat: Inseriex l'element de forma ordenada.
 * @Parametres: in: l = Llista.
 * 				in: e = Element a inserir.
 * @Retorn: Retorna la llista amb l'element inserit.
 *
 * *******************************************************/
LlistaBiOrd LLISTABIORD_insereixOrdenat (LlistaBiOrd l, int e){
  NodeBiOrd* aux;
  aux = (NodeBiOrd*) malloc (sizeof(NodeBiOrd));
  if (aux == NULL){
    printf("No s'ha pugut inserir a la llista\n");
  }else{
    aux -> e = e;
    l.pdi = l.pri;
    while (l.pdi -> seg != l.ult && l.pdi -> seg -> e < e) {
      l.pdi = l.pdi -> seg;
    }
    aux -> ant = l.pdi;
    aux-> seg = l.pdi->seg;
    l.pdi-> seg -> ant = aux;
    l.pdi->seg = aux;
    l.pdi = aux;
    printf("Element inserit - %d \n", e);
  }
  return l;
}

/**********************************************************
 *
 * @Finalitat: Consulta l'element indicat al pdi.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna l'element.
 *
 * *******************************************************/
int LLISTABIORD_consulta (LlistaBiOrd l){
  int e = ELEMENT_indefinit();
  if (l.pdi != l.pri && l.pdi != l.ult) {
    e = l.pdi -> e;
  }
  return e;
}

/**********************************************************
 *
 * @Finalitat: Esborra l'element del pdi,
 * 			   el seguent passa a ser el pdi.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna la llista amb l'element borrat.
 *
 * *******************************************************/
void LLISTABIORD_esborra (LlistaBiOrd *l){
  NodeBiOrd *aux;
  if (l -> pdi != l -> pri && l -> pdi != l -> ult) {
    aux = l -> pdi;
    aux -> ant -> seg = aux -> seg;
    aux -> seg -> ant = aux -> ant;
    l -> pdi = l -> pdi -> seg;
    free (aux);
  }
}

/**********************************************************
 *
 * @Finalitat: Avanca una casella al pdi.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna la llista amb el pdi modificat.
 *
 * *******************************************************/
void LLISTABIORD_avanca (LlistaBiOrd *l){
  if (l -> pdi != l -> ult) {
    l -> pdi = l -> pdi -> seg;
  }
}

/**********************************************************
 *
 * @Finalitat: Retrocediex una casella al pdi.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna la llista amb el pdi modificat.
 *
 * *******************************************************/
void LLISTABIORD_retrocediex (LlistaBiOrd *l){
  if (l -> pdi != l -> pri){
    l -> pdi = l -> pdi -> ant;
  }
}

/**********************************************************
 *
 * @Finalitat: Posiciona el pdi al inici.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna la llista amb el pdi modificat.
 *
 * *******************************************************/
void LLISTABIORD_vesInici (LlistaBiOrd *l){
  l -> pdi = l -> pri -> seg;
}

/**********************************************************
 *
 * @Finalitat: Posiciona el pdi al final.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna la llista amb el pdi modificat.
 *
 * *******************************************************/
void LLISTABIORD_vesFi (LlistaBiOrd *l){
  l -> pdi = l -> ult -> ant;
}

/**********************************************************
 *
 * @Finalitat: Comprova si el pdi es al inici de la llista.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna 1 si es al inici, 0 si no.
 *
 * *******************************************************/
int LLISTABIORD_inici (LlistaBiOrd l){
  return l.pdi == l.pri;
}

/**********************************************************
 *
 * @Finalitat: Comprova si el pdi es al final de la llista.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna 1 si es al final, 0 si no.
 *
 * *******************************************************/
int LLISTABIORD_fi (LlistaBiOrd l){
  return l.pdi == l.ult;
}

/**********************************************************
 *
 * @Finalitat: Comprova si la llista es buida.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna 1 si es buida, 0 si no.
 *
 * *******************************************************/
int LLISTABIORD_buida (LlistaBiOrd l){
  return l.pri -> seg == l.ult;
}

/**********************************************************
 *
 * @Finalitat: Allibera memoria i esborra tots els elements.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna la llista buida.
 *
 * *******************************************************/
void LLISTABIORD_destrueix (LlistaBiOrd *l){
  NodeBiOrd *aux;
  while (l -> pri != NULL) {
    aux = l -> pri;
    l -> pri = l -> pri -> seg;
    free (aux);
  }
  l -> pdi = l -> ult = l -> pri = NULL;
}
