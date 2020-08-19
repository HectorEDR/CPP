#include <iostream>

#include "doctores.h"


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
    cout << "Ingrese una opcion y presione la tecla enter --> ";
    cin >> opcion;
    
    switch (opcion)
    {
        case 1:
        {
            mostrarD_General();
            
            break;
        }

        case 2:
        {
            mostrarD_especial();
            
            break;
        }

         case 3:
        {
            return;
            break;
        }
        
        default:
        {   system("cls");
        cout << "Ingrese una opcion valida (1, 2, 3)" << endl << endl;
        system("pause");
        break;
        }    
        
    }
}

 