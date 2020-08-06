#include <iostream>
#include "productos.h"

using namespace std;


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
        cout << "3 - Cafe Americano" << endl;
        cout << "4 - Cafe Latte" << endl;
        cout << "5 - Te" << endl;
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

                case 3:
                agregarProductos("1 Cafe Americano - L. 45.00", 1, 45);
                break;

                case 4:
                agregarProductos("1 Cafe Latte - L. 55.00", 1, 55);
                break;

                case 5:
                agregarProductos("1 Te - L. 55.00", 1, 55);
                break;

            default:
                {
                    cout << endl;
                    cout << endl;
                    cout << "Opcion no valida";
                    cout << endl;
                    cout << endl;
                    system("pause");
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
        cout << endl;
        cout << "1 - Ice Coffee" << endl;
        cout << "2 - Jugo Natural" << endl;
        cout << "3 - Moccachino Supreme" << endl;
        cout << "4 - Producto Pepsi (personal)" << endl;
        cout << "5 - Agua Embotellada (personal)" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";

        cin >> opcionProductos;

        switch (opcionProductos)
        {
            case 1:
                agregarProductos("1 Ice Coffee - L. 45.00", 1, 45);
                break;

            case 2:
             agregarProductos("1 Jugo Natural - L. 55.00", 1, 55);
            break;

            case 3:
             agregarProductos("1 Moccachino Supreme - L. 75.00", 1, 75);
            break;

            case 4:
             agregarProductos("1 Producto Pepsi (personal) - L. 35.00", 1, 35);
            break;

            case 5:
             agregarProductos("1 Agua Embotellada (personal) - L. 25.00", 1, 25);
            break;
        
        default:
                {
                    cout << endl;
                    cout << endl;
                    cout << "Opcion no valida";
                    cout << endl;
                    cout << endl;
                    system("pause");
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
     case 3:
    {
        cout << "**********" << endl;
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << endl;
        cout << "1 - Lemon Pie" << endl;
        cout << "2 - Pastel de Chocolate" << endl;
        cout << "3 - Cheesecake" << endl;
        cout << "4 - Alfajor" << endl;
        cout << "5 - Tiramisu" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";

        cin >> opcionProductos;

        switch (opcionProductos)
        {
            case 1:
            agregarProductos("1 Lemon Pie - L. 95.00", 1, 95);
            break;

            case 2:
             agregarProductos("1 Pastel de Chocolate - L. 70.00", 1, 70);
            break;

            case 3:
             agregarProductos("1 Cheesecake - L. 95.00", 1, 95);
            break;

            case 4:
             agregarProductos("1 Alfajor - L. 40.00", 1, 40);
            break;

            case 5:
             agregarProductos("1 Tiramisu - L. 95.00", 1, 95);
            break;
            
        
        default:
                {
                    cout << endl;
                    cout << endl;
                    cout << "Opcion no valida";
                    cout << endl;
                    cout << endl;
                    system("pause");
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
    default:
    {   system("cls");
        cout << "Ingrese una opcion valida (1, 2, 3, 4, 0)" << endl << endl;
        system("pause");
        break;
    }    
    }
}