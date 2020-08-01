#include <iostream>

using namespace std;

extern void productos(int opcion);
extern void imprimirFactura();

void menu()
{
    int opcion;

    while (true)
    {   
        system("cls");

        cout << "****";
        cout << "Menu";
        cout << "****";
        cout << endl;
        cout << endl;
        cout << endl;

        cout << "1 - Bebidas Calientes" << endl;
        cout << "2 - Bebidas Frias" << endl;
        cout << "3 - Reposteria" << endl;
        cout << "4 - Imprimr Factura" << endl;
        cout << "0 - Salir" << endl;

        cin >> opcion;

        if (opcion == 0)
        {   
            system("cls");
            break;
        }
        if (opcion == 4)
        {
            imprimirFactura();
        } else 
        {
            productos(opcion);
        }
        
    }

}