#include <iostream>

using namespace std;

double subtotal;

string listaProductos;


void agregarProductos(string descripcion, int cantidad, int precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
}

void imprimirFactura()
{
    system("cls");
    cout << "********" << endl;
    cout << "FACTRURA" << endl;
    cout << "********" << endl;
    cout << endl;
    
    cout << "Productos: " << endl;
    cout << listaProductos;

    cout << endl;

    cout << "Subtotal: " << subtotal;
    cout << endl;
    cout << endl;
    system("pause");
}