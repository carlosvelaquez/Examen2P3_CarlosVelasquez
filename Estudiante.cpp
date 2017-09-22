#include "Estudiante.h"

Estudiante::Estudiante(){
  nombre = "Placeholder";
  fechaNacimiento = "Placeholder";
  altura = 0;
  colorPelo = "Placeholder";
  colorOjos = "Placeholder";
  likes = "Placeholder";
  dislikes = "Placeholder";
  tipoSangre = "Placeholder";
  promedio = 0;
  homeroom = "Placeholder";
  maestroGuia = NULL;
  tipo = "Estudiante";
}

Estudiante::Estudiante(string nNombre, string nFecha, float nAltura, string nColorPelo, string nColorOjos, string nLikes, string nDislikes, string nTipoSangre, float nPromedio, string nHomeroom, Maestro* nMaestroGuia){
  nombre = nNombre;
  fechaNacimiento = nFecha;
  altura = nAltura;
  colorPelo = nColorPelo;
  colorOjos = nColorOjos;
  likes = nLikes;
  dislikes = nDislikes;
  tipoSangre = nTipoSangre;
  promedio = nPromedio;
  homeroom = nHomeroom;
  maestroGuia = nMaestroGuia;
  tipo = "Estudiante";
}

float Estudiante::getPromedio(){
  return promedio;
}

string Estudiante::getHomeroom(){
  return homeroom;
}

Maestro* Estudiante::getMaestroGuia(){
  return maestroGuia;
}

void Estudiante::setPromedio(float nPromedio){
  promedio = nPromedio;
}

void Estudiante::setHomeroom(string nHomeroom){
  homeroom = nHomeroom;
}

void Estudiante::setMaestroGuia(Maestro* nMaestroGuia){
  maestroGuia = nMaestroGuia;
}
