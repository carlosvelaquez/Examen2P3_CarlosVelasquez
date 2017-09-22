#pragma once
#include "Ciudadano.h"

struct nodo{
  Ciudadano* datos;
  nodo* next;
};

class Lista{
private:
  nodo* cabeza;
  nodo* cola;

public:
  Lista();
  void anadir(Ciudadano*);
  void eliminarNodo(int);
  Ciudadano* at(int);
  int size();
  void verificar();

  Ciudadano* operator[] (int indice){
    return at(indice);
  }
};
