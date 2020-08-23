#include <iostream>
#include "menucita.h"
#include "info_cita.h"
#include "buscarcitas.h"

using namespace std;

void menu()
{
    bool salir = false;

    while (salir == false)
    {
        int opcion = 0;
        system("cls");

        cout << "**************" << endl;
        cout << "MENU PRINCIPAL" << endl;
        cout << "**************" << endl;
        cout << endl;
        cout << "1. Crear una nueva cita." << endl;
        cout << "2. Registro de citas." << endl;
        cout << "3. Busqueda de cita." << endl;
        cout << "4. Salir." << endl;

        cout << endl;
        cout << endl;
        cout << "Ingrese una opcion y presione la tecla enter ---> ";
        cin >> opcion;
        
        switch (opcion)
        {
        case 1:
            menucitas();
            break;
        case 2:
            mostrarcitas();
            break;
           case 3:
            mostrarBusquedaCita();
            break;
        case 4:
        {
            system("cls"); 
            cout << "Ha salido del sistema" << endl << endl;
            salir =  true;

            break;
        }
        
        default: 
        {   system("cls");
        cout << "Ingrese una opcion valida (1, 2, 3, 4)" << endl << endl;
        system("pause");
        return menu();
        break;
        }    
            
       }
    }
}
