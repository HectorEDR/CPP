#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    cout << " Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
    {
         cout << "Escogiste la opcion 1 " << endl;
         cout << "Segunda linea opcion 1 ";
        break;
    }
    case 2:
         cout << "Escogiste la opcion 2 ";
        break;

    case 3:
         cout << "Escogiste la opcion 3 ";
        break;           
    
    default:
        cout << "Ingrese una opcion entre 1 y 3";
        break;
    }
    return 0;
}
