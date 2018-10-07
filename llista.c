#include "llista.h"

int ELEMENT_indefinit (){
  int e;
  e = -1;
  return e;
}

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

LlistaBiOrd LLISTABIORD_insereixOrdenat (LlistaBiOrd l, int e){
  NodeBiOrd* aux;
  aux = (NodeBiOrd*) malloc (sizeof(NodeBiOrd));
  if (aux == NULL){
    printf("No s'ha pugut inserir a la llista\n");
  }else{
    aux -> e = e;
    l.pdi = l.pri;
    while (l.pdi != l.ult && l.pdi != l.pri && l.pdi -> seg -> e < e) {
      l.pdi = l.pdi -> seg;
    }
    aux -> ant = l.pdi;
    aux-> seg = l.pdi->seg;
    l.pdi-> seg -> ant = aux;
    l.pdi->seg = aux;
    printf("Element inserit\n");
  }
  return l;
}

int LLISTABIORD_consulta (LlistaBiOrd l){
  int e = ELEMENT_indefinit();
  if (l.pdi != l.pri && l.pdi != l.ult) {
    e = l.pdi -> e;
  }
  return e;
}

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

void LLISTABIORD_avanca (LlistaBiOrd *l){
  if (l -> pdi != l -> ult) {
    l -> pdi = l -> pdi -> seg;
  }
}

void LLISTABIORD_retrocediex (LlistaBiOrd *l){
  if (l -> pdi != l -> pri){
    l -> pdi = l -> pdi -> ant;
  }
}

void LLISTABIORD_vesInici (LlistaBiOrd *l){
  l -> pdi = l -> pri -> seg;
}

void LLISTABIORD_vesFi (LlistaBiOrd *l){
  l -> pdi = l -> ult -> ant;
}

int LLISTABIORD_inici (LlistaBiOrd l){
  return l.pdi == l.pri;
}

int LLISTABIORD_fi (LlistaBiOrd l){
  return l.pdi == l.ult;
}

int LLISTABIORD_buida (LlistaBiOrd l){
  return l.pri -> seg == l.ult;
}

void LLISTABIORD_destrueix (LlistaBiOrd *l){
  NodeBiOrd *aux;
  while (l -> pri != NULL) {
    aux = l -> pri;
    l -> pri = l -> pri -> seg;
    free (aux);
  }
  l -> pdi = l -> ult = l -> pri = NULL;
}
