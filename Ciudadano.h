#pragma once
#include <string>
#include "Quirk.h"

using namespace std;

class Ciudadano{
protected:
  string nombre;
  string fechaNacimiento;
  float altura;
  string colorPelo;
  string colorOjos;
  string likes;
  string dislikes;
  string tipoSangre;

  Quirk quirk;

public:
  Ciudadano();
  Ciudadano(string, string, float, string, string, string, string, string);

  string getNombre();
  string getFechaNacimiento();
  float getAltura();
  string getColorPelo();
  string getColorOjos();
  string getLikes();
  string getDislikes();
  string getTipoSangre();

  void setNombre(string);
  void setFechaNacimiento(string);
  void setAltura(float);
  void setColorPelo(string);
  void setColorOjos(string);
  void setLikes(string);
  void setDislikes(string);
  void setTipoSangre(string);
};
