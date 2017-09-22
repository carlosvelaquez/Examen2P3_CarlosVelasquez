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
void imprimirCiudadanos(int);
void imprimirPromedios(int);
bool guardarArchivo(Lista);
Ciudadano* anadirCiudadano(int);
void eliminarCiudadano(int, string);
bool existe(int, string);

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
        imprimirCiudadanos(1);

        cout << endl << "Ingrese el nombre del maestro que desea eliminar - ";
        cin >> nombreMaestro;

        if (existe(1, nombreMaestro)) {
          string conf;
          cout << "Está seguro de que desea despedir a " << nombreMaestro << "? [Y/N] - ";

          if (conf == "Y" || conf == "y") {
            eliminarCiudadano(1, nombreMaestro);
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
        imprimirCiudadanos(2);

        cout << endl << "Ingrese el nombre del estudiante que desea eliminar - ";
        cin >> nombreEstudiante;

        if (existe(2, nombreEstudiante)) {
          string conf;
          cout << "Está seguro de que desea expulsar a " << nombreEstudiante << "? [Y/N] - ";

          if (conf == "Y" || conf == "y") {
            eliminarCiudadano(1, nombreEstudiante);
            cout << "Estudiante expulsado exitosamente." << endl;
          }else{
            cout << "Operación abortada." << endl;
          }
        }
        break;
      }
      case 5:{
        imprimirCiudadanos(1);
        break;
      }
      case 6:{
        imprimirCiudadanos(2);
        break;
      }
      case 7:{
        imprimirPromedios(1);
        break;
      }
      case 8:{
        imprimirPromedios(2);
        break;
      }
      case 9:{
        imprimirCiudadanos(3);
        break;
      }
      case 10:{
        if (guardarArchivo(ciudadanos)) {
          cout << "Registros guardados exitosamente." << endl;
        }else{
          cout << "Ocurrió un error al guardar los Registros" << endl;
        }
        break;
      }
      case 11:{
        salir = true;

        cout << "Saliendo del sistema...";
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
