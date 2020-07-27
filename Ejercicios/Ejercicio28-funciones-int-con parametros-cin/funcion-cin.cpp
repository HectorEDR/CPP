#include <iostream>

using namespace std;

int sumar(int a, int b)
{
     return a + b;
}
int resta(int a, int b)
{
     return a - b;
}

int main(int argc, char const *argv[])
{
    int numero1 = 0;
    int num2 = 0;
    system("cls");
    cout << "Ingrese el valor de A: ";
    cin >> numero1;
    cout << "Ingrese el valor de B: ";
    cin >> num2;

    cout << endl;

    cout << "El resultado de la suma es: " << sumar(numero1, num2) << endl;
    cout << "El resultado de la resta es: " << resta(numero1, num2);
    return 0;
}
