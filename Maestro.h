#pragma once
#include "Lista.h"

class Maestro : public Ciudadano{
private:
  Lista* estudiantes;
  string homeroom;
  string departamento;
  string alias;
  float sueldo;

public:
  Maestro();
  Maestro(string, string, float, string, string, string, string, string, string, string, string, float);

  Lista* getEstudiantes();
  string getHomeroom();
  string getDepartamento();
  string getAlias();
  float getSueldo();

  void setEstudiantes(Lista*);
  void setHomeroom(string);
  void setDepartamento(string);
  void setAlias(string);
  void setSueldo(float);
};
