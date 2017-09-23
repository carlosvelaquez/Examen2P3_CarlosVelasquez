#include "Transformation.h"

Transformation::Transformation(string nForma, int nImpactos, bool nAfectaOtros){
  tipo = "Transformation";
  forma = nForma;
  impactos = nImpactos;
  afectaOtros = nAfectaOtros;
}

string Transformation::getForma(){
  return forma;
}

int Transformation::getImpactos(){
  return impactos;
}

bool Transformation::getAfectaOtros(){
  return afectaOtros;
}

void Transformation::setForma(string nForma){
  forma = nForma;
}

void Transformation::setImpactos(int nImpactos){
  impactos = nImpactos;
}

void Transformation::setAfectaOtros(bool nAfectaOtros){
  afectaOtros = nAfectaOtros;
}
