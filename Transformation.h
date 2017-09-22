#pragma once
#include "Quirk.h"

class Transformation : public Quirk{
private:
  string forma;
  int impactos;
  bool afectaOtros;

public:
  Transformation();

  string getForma();
  int getImpactos();
  bool getAfectaOtros();

  void setForma(string);
  void setImpactos(int);
  void setAfectaOtros(bool);
};
