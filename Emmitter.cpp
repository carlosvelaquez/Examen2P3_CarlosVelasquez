#include "Emmitter.h"

Emmitter::Emmitter(){
  tipo = "Emmitter";
}

string Emmitter::getEfecto(){
  return efecto;
}

int Emmitter::getObjetosAfectados(){
  return objetosAfectados;
}

bool Emmitter::getNecesitaContacto(){
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
