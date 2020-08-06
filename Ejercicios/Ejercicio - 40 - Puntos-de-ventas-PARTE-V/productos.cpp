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
        cout << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << endl;
        
        cout << "Ingrese una opcion: ";
        
        cin >> opcionProductos;
        
            switch (opcionProductos)
            {
            case 1:
                agregarProductos("1 Capuccino - L. 40.00", 1, 40);
                break;
            
                case 2:
                agregarProductos("1 Expresso - L. 30.00", 1, 30);
                break;

            default:
                {
                    cout << "Opcion no valida";
                    return;
                    break;
                }    
            }
                cout << endl;
                system("cls");
                cout << "Producto Agregado" << endl << endl;
                system("pause");
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
    {   system("cls");
        cout << "Ingrese una opcion valida (1, 2, 3, 4, 0)" << endl << endl;
        system("pause");
        break;
    }    
    }
}