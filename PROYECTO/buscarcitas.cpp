#include <iostream>
#include "buscarpacientes.h"

using namespace std;

void mostrarBusquedaCita()
{
  system("cls");
  string c_pax = "";
  string citaPaciente = "";
  char continuar = ' ';
  cout << endl;
  cout << " REGISTRO DE CITAS"<< endl;
  cout << "-------------------"<< endl;
  
  
  while (true)
  {
     cout << endl;
     cout << endl;
     cout << "Ingrese el codigo del paciente: ";
     cin >> c_pax;
     citaPaciente = buscarPaciente(c_pax);
      
      if (citaPaciente != "")
      {  
         cout << endl;
         cout << citaPaciente;
    
      } else {
            cout << endl;
            cout << endl;
            cout << "Desea continuar con la busqueda? s/n: ";
               cin >> continuar;
            if (continuar == 'n' || continuar == 'N')
            {
                return;
            }
      }

  }
}
