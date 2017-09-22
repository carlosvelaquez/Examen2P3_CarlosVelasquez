#include "Ciudadano.h"
#include "Maestro.h"
#include "Estudiante.h"
#include "Lista.h"
#include "Quirk.h"
#include "Emmitter.h"
#include "Transformation.h"
#include "Mutant.h"
#include <string>
#include <iostream>

using namespace std;

int menu();
void imprimirCiudadanos(int, Lista*);
void imprimirPromedios(int, Lista*);
bool guardarArchivo(Lista*);
Ciudadano* anadirCiudadano(int);
void eliminarCiudadano(int, string, Lista*);
bool existe(int, string, Lista*);

int main(){
  Lista ciudadanos;
  bool salir;

  while (!salir) {
    switch (menu()) {
      case 1:{
        Maestro* nuevoMaestro = (Maestro*) anadirCiudadano(1);

        if (nuevoMaestro != NULL) {
          cout << "Maestro añadido al sistema." << endl;
          ciudadanos.anadir( (Ciudadano*) nuevoMaestro);
        }else{
          cout << "Operación abortada." << endl;
        }
        break;
      }
      case 2:{
        string nombreMaestro;
        imprimirCiudadanos(1, &ciudadanos);

        cout << endl << "Ingrese el nombre del maestro que desea eliminar - ";
        cin >> nombreMaestro;

        if (existe(1, nombreMaestro, &ciudadanos)) {
          string conf;
          cout << "Está seguro de que desea despedir a " << nombreMaestro << "? [Y/N] - ";

          if (conf == "Y" || conf == "y") {
            eliminarCiudadano(1, nombreMaestro, &ciudadanos);
            cout << "Maestro despedido exitosamente." << endl;
          }else{
            cout << "Operación abortada." << endl;
          }
        }
        break;
      }
      case 3:{
        Estudiante* nuevoEstudiante = (Estudiante*) anadirCiudadano(2);

        if (nuevoEstudiante != NULL) {
          cout << "Estudiante añadido al sistema." << endl;
          ciudadanos.anadir( (Ciudadano*) nuevoEstudiante);
        }else{
          cout << "Operación abortada." << endl;
        }
        break;
      }
      case 4:{
        string nombreEstudiante;
        imprimirCiudadanos(2, &ciudadanos);

        cout << endl << "Ingrese el nombre del estudiante que desea eliminar - ";
        cin >> nombreEstudiante;

        if (existe(2, nombreEstudiante, &ciudadanos)) {
          string conf;
          cout << "Está seguro de que desea expulsar a " << nombreEstudiante << "? [Y/N] - ";

          if (conf == "Y" || conf == "y") {
            eliminarCiudadano(1, nombreEstudiante, &ciudadanos);
            cout << "Estudiante expulsado exitosamente." << endl;
          }else{
            cout << "Operación abortada." << endl;
          }
        }
        break;
      }
      case 5:{
        imprimirCiudadanos(1, &ciudadanos);
        break;
      }
      case 6:{
        imprimirCiudadanos(2, &ciudadanos);
        break;
      }
      case 7:{
        imprimirPromedios(1, &ciudadanos);
        break;
      }
      case 8:{
        imprimirPromedios(2, &ciudadanos);
        break;
      }
      case 9:{
        imprimirCiudadanos(3, &ciudadanos);
        break;
      }
      case 10:{
        if (guardarArchivo(&ciudadanos)) {
          cout << "Registros guardados exitosamente." << endl;
        }else{
          cout << "Ocurrió un error al guardar los Registros" << endl;
        }
        break;
      }
      case 11:{
        salir = true;

        cout << "Saliendo del sistema..." << endl;
        cout << "----------------------------------" << endl;
        break;
      }
      default:{
        cout << "Opción inválida, por favor intente de nuevo.";
        break;
      }
    }
  }
  return 0;
}

int menu(){
  int op;

  cout << "----------------------------------" << endl;

  cout << "U.A. Management System" << endl << endl
  << "1. Contratar Maestro" << endl
  << "2. Despedir Maestro" << endl
  << "3. Matricular Alumno" << endl
  << "4. Expulsar Almuno" << endl
  << "5. Listar a todos los maestros" << endl
  << "6. Listar a todos los estudiantes" << endl
  << "7. Calcular el sueldo promedio de los maestros" << endl
  << "8. Calcular el promedio general de los estudiantes" << endl
  << "9. Listar alumnos por departamento" << endl
  << "10. Guardar registro en un archivo de texto" << endl
  << "11. Salir del sistema" << endl << endl
  << "Ingrese el número de la opción que desea - ";

  cin >> op;
  cout << "----------------------------------" << endl;

  return op;
}

void imprimirCiudadanos(int tipo, Lista* ciudadanos){
  switch (tipo) {
    case 1:{
      cout << "Lista de Maestros" << endl;
      cout << "Nombre | FechaNacimiento | Altura | ColorPelo | ColorOjos " << endl << endl;
      bool existen = false;

      for (int i = 1; i < ciudadanos->size(); i++) {
        if (ciudadanos->at(i)->getTipo() == "Maestro") {
          cout << ciudadanos->at(i)->getNombre() << " | " << ciudadanos->at(i)->getFechaNacimiento() << " | " << ciudadanos->at(i)->getAltura() << " | " << ciudadanos->at(i)->getColorPelo() << " | " << ciudadanos->at(i)->getColorOjos() << endl;
        }
      }

      if (!existen) {
        cout << "No hay registros que mostrar." << endl;
      }
      break;
    }
    case 2:{
      cout << "Lista de Estudiantes" << endl;
      cout << "Nombre | FechaNacimiento | Altura | ColorPelo | ColorOjos " << endl << endl;
      bool existen = false;

      for (int i = 1; i < ciudadanos->size(); i++) {
        if (ciudadanos->at(i)->getTipo() == "Estudiante") {
          cout << ciudadanos->at(i)->getNombre() << " | " << ciudadanos->at(i)->getFechaNacimiento() << " | " << ciudadanos->at(i)->getAltura() << " | " << ciudadanos->at(i)->getColorPelo() << " | " << ciudadanos->at(i)->getColorOjos() << endl;
        }
      }

      if (!existen) {
        cout << "No hay registros que mostrar." << endl;
      }
      break;
    }
    case 3:{

      break;
    }
    default:{
      cout << "[ERROR] Tipo inválido especificado." << endl;
      break;
    }
  }
}

void imprimirPromedios(int tipo, Lista* ciudadanos){

}

bool guardarArchivo(Lista*){

}

Ciudadano* anadirCiudadano(int tipo, Lista* ciudadanos){
  Ciudadano* ciudadano = NULL;
  string nombre, fecha, colorPelo, colorOjos, likes, dislikes, tipoSangre;
  float altura;

  cout << "Ingrese los datos requeridos" << endl
  << "Nombre: ";
  cin >> nombre;

  cout << "Fecha de Nacimiento: ";
  cin >> fecha;

  cout << "Altura (cm): ";
  cin >> altura;

  cout << "Color de Pelo: ";
  cin >> colorPelo;

  cout << "Color de Ojos: ";
  cin >> colorOjos;

  cout << "Likes: ";
  cin >> likes;

  cout << "Dislikes: ";
  cin >> dislikes;

  cout << "Tipo de Sangre: ";
  cin >> tipoSangre;

  switch (tipo) {
    case 1:{
      string homeroom, departamento, alias;
      float sueldo;

      cout << "Homeroom Classroom: ";
      cin >> homeroom;

      cout << "Departamento: ";
      cin >> departamento;

      cout << "Alias: ";
      cin >> alias;

      cout << "Sueldo: ";
      cin >> sueldo;

      ciudadano = new Maestro(nombre, fecha, altura, colorPelo, colorOjos, likes, dislikes, tipoSangre, homeroom, departamento, alias, sueldo);
      break;
    }
    case 2:{
      string homeroom;
      float promedio;

      cout << "Homeroom: ";
      cin >> homeroom;

      cout << "Promedio: ";
      cin >> promedio;

      string nombreMaestro;
      imprimirCiudadanos(1, ciudadanos);

      cout << endl << "Ingrese el nombre del maestro guía - ";
      cin >> nombreMaestro;

      if (existe(1, nombreMaestro, ciudadanos)) {

      }else{
        cout << "[ERROR] No se ha encontrado al maestro '" << nombreMaestro << "'" << endl;
        return NULL;
      }

      ciudadano = new Maestro(nombre, fecha, altura, colorPelo, colorOjos, likes, dislikes, tipoSangre, promedio, homeroom, maestro);
      break;
    }
  }

  if (ciudadano != NULL) {
    cout << endl << "¿Desea añadir un quirk? [Y/N] - ";

  }

  return NULL;
}

void eliminarCiudadano(int tipo, string nombre, Lista* ciudadanos){
  string sTipo;

  if (tipo == 1) {
    sTipo = "Maestro";
  }else{
    sTipo = "Estudiante";
  }

  for (int i = 1; i < ciudadanos->size(); i++) {
    if (ciudadanos->at(i)->getNombre() == nombre && ciudadanos->at(i)->getTipo() == sTipo) {
      ciudadanos->eliminarNodo(i);
    }
  }
}

bool existe(int tipo, string nombre, Lista* ciudadanos){
  string sTipo;

  if (tipo == 1) {
    sTipo = "Maestro";
  }else{
    sTipo = "Estudiante";
  }

  for (int i = 1; i < ciudadanos->size(); i++) {
    if (ciudadanos->at(i)->getNombre() == nombre && ciudadanos->at(i)->getTipo() == sTipo) {
      return true;
    }
  }

  return false;
}

Ciudadano* recuperarCiudadano(int tipo, string nombre, Lista* ciudadanos){
  string sTipo;

  if (tipo == 1) {
    sTipo = "Maestro";
  }else{
    sTipo = "Estudiante";
  }

  for (int i = 1; i < ciudadanos->size(); i++) {
    if (ciudadanos->at(i)->getNombre() == nombre && ciudadanos->at(i)->getTipo() == sTipo) {
      return ciudadanos->at(i);
    }
  }

  return NULL;
}
