#include "Ciudadano.h"

Ciudadano::Ciudadano(){
  nombre = "Placeholder";
  fechaNacimiento = "Placeholder";
  altura = 0;
  colorPelo = "Placeholder";
  colorOjos = "Placeholder";
  likes = "Placeholder";
  dislikes = "Placeholder";
  tipoSangre = "Placeholder";
}

Ciudadano::Ciudadano(string nNombre, string nFecha, float nAltura, string nColorPelo, string nColorOjos, string nLikes, string nDislikes, string nTipoSangre){
  nombre = nNombre;
  fechaNacimiento = nFecha;
  altura = nAltura;
  colorPelo = nColorPelo;
  colorOjos = nColorOjos;
  likes = nLikes;
  dislikes = nDislikes;
  tipoSangre = nTipoSangre;
}

string Ciudadano::getNombre(){
  return nombre;
}

string Ciudadano::getFechaNacimiento(){
  return fechaNacimiento;
}

float Ciudadano::getAltura(){
  return altura;
}

string Ciudadano::getColorPelo(){
  return colorPelo;
}

string Ciudadano::getColorOjos(){
  return colorOjos;
}

string Ciudadano::getLikes(){
  return likes;
}

string Ciudadano::getDislikes(){
  return dislikes;
}

string Ciudadano::getTipoSangre(){
  return tipoSangre;
}

void Ciudadano::setNombre(string nNombre){
  nombre = nNombre;
}

void Ciudadano::setFechaNacimiento(string nFecha){
  fechaNacimiento = nFecha;
}

void Ciudadano::setAltura(float nAltura){
  altura = nAltura;
}

void Ciudadano::setColorPelo(string nColorPelo){
  colorPelo = nColorPelo;
}

void Ciudadano::setColorOjos(string nColorOjos){
  colorOjos = nColorOjos;
}

void Ciudadano::setLikes(string nLikes){
  likes = nLikes;
}

void Ciudadano::setDislikes(string nDislikes){
  dislikes = nDislikes;
}

void Ciudadano::setTipoSangre(string nTipoSangre){
  tipoSangre = nTipoSangre;
}
