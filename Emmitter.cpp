#include "Emmitter.h"

Emmitter::Emmitter(string nEfecto, int nObjetosAfectados, bool nNecesitaContacto){
  tipo = "Emmitter";
  efecto = nEfecto;
  objetosAfectados = nObjetosAfectados;
  necesitaContacto = nNecesitaContacto;
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
