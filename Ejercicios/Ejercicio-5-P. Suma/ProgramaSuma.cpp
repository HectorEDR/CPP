#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int resultado = 0;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << endl;

    cout << "Ingrese el valor de b: ";
    cin >> b;
    
    cout << endl;

    resultado = a + b;

    cout << "El resultado de a + b es: " << resultado;

    return 0;
}
