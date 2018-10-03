#ifdef _LLISTABIORD_H_
#def _LLISTABIORD_H_

typedef struct N{
  Element e;
  struct N *seg;
  struct N *ant;
}NodeBiOrd;

typedef struct{
  NodeBi *pri;
  NodeBi *ult;
  NodeBi *pdi;
}LlistaBiOrd;
