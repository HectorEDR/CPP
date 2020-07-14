#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // DATOS DE ENTRADA
    double subtotal = 0;
    double total = 0;
    double totalexe = 0;
    double impuesto = 0.15;
    int descuento = 0;
    double cdescuento = 0;
    double cimpuesto = 0;
    char factexenta;



    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;
    cout << endl;

    cout << "Ingrese el descuento (0,10,15,20,50): ";
    cin >> descuento;
    cout << endl;

    cout << "Factura es exenta S / N: ";
    cin >> factexenta;
    cout << endl;
   
    // ENTRADA
    if (factexenta == 'S' || factexenta == 's')
    {
        cdescuento = (subtotal * descuento) / 100;
        totalexe = subtotal - cdescuento;
        cout << "Total es: " << totalexe;
    }  else if (factexenta == 'N' || factexenta == 'n')
    {
       cdescuento = (subtotal * descuento) / 100;
       cimpuesto = (subtotal - cdescuento) * impuesto;
       total = subtotal - cdescuento + cimpuesto;

        cout << "El total es: " << total;
    }
 
    return 0;
}