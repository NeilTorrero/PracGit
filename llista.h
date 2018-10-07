/************************************
*
*@Proposit: Implementacio d'una llista
*bidirrecional ordenada.
* Interficie modul LLISTABIORD
*@Autor: Neil Torrero Salas
*
* ***********************************/
#ifndef _LLISTABIORD_H_
#define _LLISTABIORD_H_

#include <stdio.h>
#include <stdlib.h>

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

/**********************************************************
 *
 * @Finalitat: Crear informacio qualsevol per al fantasma.
 * @Parametres: ----.
 * @Retorn: Retorna el registre amb la informacio.
 *
 * *******************************************************/
int ELEMENT_indefinit ();

/**********************************************************
 *
 * @Finalitat: Crear la llista a partir del no res.
 * @Parametres: int/out: ok = Variable que actua com
 * 							boleana per els errors.
 * @Retorn: Retorna la llista amb el fantasma i el punters.
 *
 * *******************************************************/
LlistaBiOrd LLISTABIORD_crea ();

/**********************************************************
 *
 * @Finalitat: Inseriex l'element de forma ordenada.
 * @Parametres: in: l = Llista.
 * 				in: e = Element a inserir.
 * @Retorn: Retorna la llista amb l'element inserit.
 *
 * *******************************************************/
LlistaBiOrd LLISTABIORD_insereixOrdenat (LlistaBiOrd l, int e);

/**********************************************************
 *
 * @Finalitat: Consulta l'element indicat al pdi.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna l'element.
 *
 * *******************************************************/
int LLISTABIORD_consulta (LlistaBiOrd l);

/**********************************************************
 *
 * @Finalitat: Esborra l'element del pdi,
 * 			   el seguent passa a ser el pdi.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna la llista amb l'element borrat.
 *
 * *******************************************************/
void LLISTABIORD_esborra (LlistaBiOrd *l);

/**********************************************************
 *
 * @Finalitat: Avanca una casella al pdi.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna la llista amb el pdi modificat.
 *
 * *******************************************************/
void LLISTABIORD_avanca (LlistaBiOrd *l);

/**********************************************************
 *
 * @Finalitat: Retrocediex una casella al pdi.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna la llista amb el pdi modificat.
 *
 * *******************************************************/
void LLISTABIORD_retrocediex (LlistaBiOrd *l);

/**********************************************************
 *
 * @Finalitat: Posiciona el pdi al inici.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna la llista amb el pdi modificat.
 *
 * *******************************************************/
void LLISTABIORD_vesInici (LlistaBiOrd *l);

/**********************************************************
 *
 * @Finalitat: Posiciona el pdi al final.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna la llista amb el pdi modificat.
 *
 * *******************************************************/
void LLISTABIORD_vesFi (LlistaBiOrd *l);

/**********************************************************
 *
 * @Finalitat: Comprova si el pdi es al inici de la llista.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna 1 si es al inici, 0 si no.
 *
 * *******************************************************/
int LLISTABIORD_inici (LlistaBiOrd l);

/**********************************************************
 *
 * @Finalitat: Comprova si el pdi es al final de la llista.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna 1 si es al final, 0 si no.
 *
 * *******************************************************/
int LLISTABIORD_fi (LlistaBiOrd l);

/**********************************************************
 *
 * @Finalitat: Comprova si la llista es buida.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna 1 si es buida, 0 si no.
 *
 * *******************************************************/
int LLISTABIORD_buida (LlistaBiOrd l);

/**********************************************************
 *
 * @Finalitat: Allibera memoria i esborra tots els elements.
 * @Parametres: in: l = Llista.
 * @Retorn: Retorna la llista buida.
 *
 * *******************************************************/
void LLISTABIORD_destrueix (LlistaBiOrd *l);

#endif
