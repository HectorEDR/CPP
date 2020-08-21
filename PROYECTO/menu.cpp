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
        cout << "2. Registro de Citas." << endl;
        cout << "3. Imprimir o Enviar la cita." << endl;
        cout << "4. Crear nuevo expediente." << endl;
        cout << "5. Expediente del paciente." << endl;
        cout << "6. Salir" << endl;

        cout << endl;
        cout << endl;
        cout << "Ingrese una opcion y presione enter ---> ";
        cin >> opcion;
        
        switch (opcion)
        {
        case 1:{
            menucitas();
            break;
        }
        case 2:{
            mostrarcitas();
            break;
        }
           case 3:{
            buscar_citas();
            break;
        }
        case 6:
        {
            system("cls"); 
            cout << "Ha salido del sistema" << endl << endl;
            salir =  true;

            break;
        }
        
        default:
            break;
        }
    }
}