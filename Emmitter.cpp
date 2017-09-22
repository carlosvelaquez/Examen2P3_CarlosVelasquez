#include "Emmitter.h"

string Emmitter::getEfecto(){
  return efecto;
}

int Emmitter::getObjetosAfectados(){
  return objetosAfectados;
}

bool Emmitter::necesitaContacto(){
  return necesitaContacto;
}

void Emmitter::setEfecto(string nEfecto){
  efecto = nEfecto;
}

void Emmitter::setObjetosAfectados(int nObjetosAfectados){
  objetosAfectados = nObjetosAfectados;
}

void Emmitter::setNecesitaContacto(bool nContacto){
  necesitaContacto = nContacto;
}
