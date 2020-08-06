#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int resultadosuma = 0;
    int resultadoresta = 0;
    int resultadomulti = 0;
    int resultadodivi = 0;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << endl;

    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << endl;

    resultadosuma = a + b;
    resultadoresta = a - b;
    resultadomulti = a * b;
    resultadodivi = a / b;

    cout << "Resultado de la suma de a y b es: " << resultadosuma;
    cout << endl;

    cout << "Resultado de la resta de a y b es: " << resultadoresta;
    cout << endl;

    cout << "Resultado de la multiplicacion entre a y b es: " << resultadomulti;
    cout << endl;

    cout << "Resultado de la division entre a y b es: " << resultadodivi;
    
    return 0;
}
