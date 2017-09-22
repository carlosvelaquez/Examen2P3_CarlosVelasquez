#pragma once
#include "Quirk.h"

class Transformation : public Quirk{
private:
  string forma;
  int impactos;
  bool afectaOtros;
public:
  Transformation();
};
