#include <iostream>
#include "buscarpacientes.h"

using namespace std;

void mostrarBusquedaCita()
{
  system("cls");
  string c_pax = "";
  
  char continuar = ' ';
  cout << endl;
  cout << " REGISTRO DE CITAS"<< endl;
  cout << "-------------------"<< endl;
  cout << endl;
  cout << endl;
  
  while (true)
  {
     cout << "Ingrese el codigo del paciente: ";
     cin >> c_pax;
     buscarPaciente(c_pax);

      cout << endl;
      cout << endl;
      cout << "Desea continuar s/n: ";
         cin >> continuar;
            if (continuar == 'n' || continuar == 'N')
            {
                return;
            }
  }
}
