#include <iostream>
#include "menu.h"
#include "doctores.h"
#include "info_cita.h"

using namespace std;

void menucitas()
{
    int opcion = 0;
    system("cls");

    cout << " NUEVA CITA" << endl;
    cout << "------------" << endl;
    cout << endl;

    cout << "1. CONSULTA GENERAL" << endl;
    cout << endl;
    cout << "2. CONSULTA CON ESPECIALISTA" << endl;
    cout << endl;
    cout << "3. REGRESAR AL MENU PRINCIPAL";
    cout << endl;
    cout << endl;
    cout << "Elija una opcion y presione la tecla enter --> ";
    cin >> opcion;
    
    switch (opcion)
    {
        case 1:
        {
            mostrarD_General();
            agregarPax();
            break;
        }

        case 2:
        {
            mostrarD_especial();
            agregarPax();
            break;
        }

         case 3:
        {
            return menu();
            break;
        }
        
        default:
        {   system("cls");
        cout << "Ingrese una opcion valida (1, 2, 3)" << endl << endl;
        system("pause");
        break;
        }    
              break;
        
    }
    
}

 