#include <iostream>
#include <string>
using namespace std;

string productos[5][3] = {
    {"001", "Iphone 11 pro", "2"},
    {"002", "Monitor Asus", "3"},
    {"003", "Laptop MSI", "1"},
    {"004", "Ipad pro 2", "1"},
    {"005", "Mouse Gamer Asus", "50"},
};

void listadoProductos()
{
      system("cls");
      cout << endl;
      cout << " Listado de productos" << endl;
      cout << "----------------------" << endl;
      cout << "Codigo, Descripcion y Existencia" << endl;
      cout << endl; 
           
           for (int i = 0; i < 5; i++)
           {
               cout << productos[i][0] << " | " << productos[i][1] << " = " << productos[i][2] << endl;
           }
}

void movimientoInventario(string codigo, int cantidad, string tipoMovimiento)
{
   for (int i = 0; i < 5; i++)
   {
       if (productos[i][0] == codigo)   
       {
           if (tipoMovimiento == "+")
           {
               productos[i][2] = to_string(stoi(productos[i][2]) + cantidad);
           }else
           {
               productos[i][2] = to_string(stoi(productos[i][2]) - cantidad);
           }
       }
   }
}

void ingresoDeInventario()
{
    string codigo = "";
    int cantidad = 0;

    system("cls");
    cout << endl;
    cout << " Ingreso de productos al inventario" << endl;
    cout << "------------------------------------" << endl;
    cout << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    cout << endl;
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    movimientoInventario(codigo, cantidad, "+");
}

void salidaDeInventario()
{
    string codigo = "";
    int cantidad = 0;

    system("cls");
    cout << endl;
    cout << " Salida de productos al inventario" << endl;
    cout << "------------------------------------" << endl;
    cout << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    cout << endl;
    cout << "Ingrese la cantidad del producto a salir: ";
    cin >> cantidad;
    cout << endl;

    movimientoInventario(codigo, cantidad, "-");
}

void AjustePositivo()
{
    string codigo = "";
    int cantidad = 0;

    system("cls");
    cout << endl;
    cout << " Ajuste Positivo de inventario" << endl;
    cout << "-------------------------------" << endl;
    cout << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    cout << endl;
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    movimientoInventario(codigo, cantidad, "+");
}

void AjusteNegativo()
{
    string codigo = "";
    int cantidad = 0;

    system("cls");
    cout << endl;
    cout << " Ajuste Negativo de inventario" << endl;
    cout << "-------------------------------" << endl;
    cout << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    cout << endl;
    cout << "Ingrese la cantidad del producto a salir: ";
    cin >> cantidad;
    cout << endl;

    movimientoInventario(codigo, cantidad, "-");
}

int main(int argc, char const *argv[])
{   
    int opcion = 0;
    
   while (true)
   {
        system("cls");

            cout << "SISTEMA DE INVENTARIO";
            cout << endl;
            cout << "---------------------";
            cout << endl;
            cout << endl;
            cout << "1 - Productos" << endl;
            cout << "2 - Ingreso de inventario" << endl;
            cout << "3 - Salida de inventario" << endl;
            cout << "4 - Ajuste Positivo" << endl;
            cout << "5 - Ajuste Negativo" << endl;
            cout << "0 - Salir" << endl;
            cout << endl;
            cout << "Por favor ingrese una opcion: ";
            cin >> opcion;
            
        switch (opcion)
        {
            case 1:
            listadoProductos();
            break;
            case 2:
            ingresoDeInventario();
            break;
            case 3:
            salidaDeInventario();
            break;
            case 4:
            AjustePositivo();
            break;
            case 5:
            AjusteNegativo();
            break;

            default:
            break;
        }

         if (opcion == 0)
            {
                break;
            }
            cout << endl;
            system("pause");
   }
   return 0;
}
