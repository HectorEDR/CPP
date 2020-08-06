#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // DATOS DE ENTRADA
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;
    cout << endl;

    // ENTRADA

    total = subtotal + (subtotal * impuesto);

    // SALIDA

    cout << "El total es: " << total;
    return 0;
}
