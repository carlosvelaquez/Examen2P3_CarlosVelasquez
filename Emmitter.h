#pragma once
#include "Quirk.h"

class Emmitter : public Quirk{
private:
  string efecto;
  int objetosAfectados;
  bool necesitaContacto;

public:
  Emmitter(string, int, bool);

  string getEfecto();
  int getObjetosAfectados();
  bool getNecesitaContacto();

  void setEfecto(string);
  void setObjetosAfectados(int);
  void setNecesitaContacto(bool);
};
