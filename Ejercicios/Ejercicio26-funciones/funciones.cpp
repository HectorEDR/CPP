#include <iostream>

using namespace std;


int sumar()
{
    return 5 + 7;
}

string nombrecompleto()
{
    string nombre = "Juan";
    string apellido = "Perez";
    return nombre + " " + apellido;
}

int main(int argc, char const *argv[])
{
    int resultado = sumar();
    string nombreyApellido = nombrecompleto();
    cout << "El resultado es: " << resultado;

    cout << endl;

    cout << nombreyApellido;
    return 0;
}
