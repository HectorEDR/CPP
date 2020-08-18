#include <iostream>
#include "nuevacita.h"
#include "doctores.h"


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
        cout << "2. Citas en lista." << endl;
        cout << "3. Imprimir o Enviar una cita." << endl;
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
            mostrarD_General();
            break;
        }
        case 6:
        {
            system("cls"); 
            cout << "Ha salido del sistema" << endl << endl;
            system("pause"); 
            system("cls"); 
            salir =  true;

            break;
        }
        
        default:
            break;
        }


    }

}