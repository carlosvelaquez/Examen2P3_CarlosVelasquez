#pragma once
#include "Ciudadano.h"

class Estudiante : public Ciudadano{
private:
  float promedio;
  string homeroom;
  Maestro* maestroGuia;

public:
  Estudiante();
  Estudiante(string, string, float, string, string, string, string, string, float, string, Maestro*);

  float getPromedio();
  string getHomeroom();
  Maestro* getMaestroGuia();

  void setPromedio(float);
  void setHomeroom(string);
  void setMaestroGuia(Maestro*);
};
