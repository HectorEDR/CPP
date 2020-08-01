#include <iostream>

using namespace std;

extern void agregarProductos(string descripcion, int cantidad, int precio);
void productos(int opcion)
{   
    system("cls"); 

    int opcionProductos = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "*****************" << endl;
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        
        cin >> opcionProductos;
        
            switch (opcionProductos)
            {
            case 1:
                agregarProductos("Capuccino", 1, 40);
                break;
            
                case 2:
                agregarProductos("Expresso", 1, 30);
                break;

            default:
                cout << "Opcion no valida";
                break;
            }
        break;
    }
    case 2:
    {
        cout << "*************" << endl;
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        system("pause");
        break;
    }
     case 3:
    {
        cout << "**********" << endl;
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        system("pause");
        break;
    }
    default:
        break;
    }
}