#include "Maestro.h"

Maestro::Maestro(){
  nombre = "Placeholder";
  fechaNacimiento = "Placeholder";
  altura = 0;
  colorPelo = "Placeholder";
  colorOjos = "Placeholder";
  likes = "Placeholder";
  dislikes = "Placeholder";
  tipoSangre = "Placeholder";
  homeroom = "Placeholder";
  departamento = "Placeholder";
  alias = "Placeholder";
  sueldo = 0;

  estudiantes = NULL;
  tipo = "Maestro";
}

Maestro::Maestro(string nNombre, string nFecha, float nAltura, string nColorPelo, string nColorOjos, string nLikes, string nDislikes, string nTipoSangre, string nHomeroom, string nDepartamento, string nAlias, float nSueldo){
  nombre = nNombre;
  fechaNacimiento = nFecha;
  altura = nAltura;
  colorPelo = nColorPelo;
  colorOjos = nColorOjos;
  likes = nLikes;
  dislikes = nDislikes;
  tipoSangre = nTipoSangre;
  homeroom = nHomeroom;
  departamento = nDepartamento;
  alias = nAlias;
  sueldo = nSueldo;

  estudiantes = NULL;
  tipo = "Maestro";
}

Lista* Maestro::getEstudiantes(){
  return estudiantes;
}

string Maestro::getHomeroom(){
  return homeroom;
}

string Maestro::getDepartamento(){
  return departamento;
}

string Maestro::getAlias(){
  return alias;
}

float Maestro::getSueldo(){
  return sueldo;
}

void Maestro::setEstudiantes(Lista* nEstudiantes){
  if (estudiantes == NULL) {
    delete estudiantes;
  }

  estudiantes = nEstudiantes;
}

void Maestro::setHomeroom(string nHomeroom){
  homeroom = nHomeroom;
}

void Maestro::setDepartamento(string nDepartamento){
  departamento = nDepartamento;
}

void Maestro::setAlias(string nAlias){
  alias = nAlias;
}

void Maestro::setSueldo(float nSueldo){
  sueldo = nSueldo;
}
