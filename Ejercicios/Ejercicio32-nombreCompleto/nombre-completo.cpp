#include <iostream>

using namespace std;

string nombreCompleto(string nombre, string apellido)
{
    return nombre + " " + apellido;
}

int main(int argc, char const *argv[])
{
    string nomb;
    string apell;
    
    cout << "Ingrese su primer nombre: ";
    cin >> nomb;

     cout << "Ingrese su primer apellido: ";
     cin >> apell;

     cout << "Nombre Completo: " << nombreCompleto(nomb, apell);

    return 0;
}
