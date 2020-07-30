#include  <iostream>


using namespace std;

int sumar(int a, int b)
{
     return a + b;
}

int resta(int a, int b)
{
     return a - b;
}

int multi(int a, int b)
{
     return a * b;
}

int division(int a, int b)
{   
    if (b == 0)
    {
        throw "No se puede dividir entre 0";
    }
     return a / b;
}

int calculadora(int a, int b, char operador)
{
    switch (operador)
    {
    case '+':
        return sumar(a, b);
        break;
    case '-':
        return resta(a, b);
        break;
    case '*':
        return multi(a, b);
        break;
    case '/':
        return division(a, b);
        break;
    
    default:
        break;
    }
    throw "El operador no existe";
}

int main(int argc, char const *argv[])
{   
    
    int num1;
    int num2;
    int resultado;
    char operador;
    system("cls");
    
    cout << "Ingrese el valor de A: ";
    cin >> num1;
    cout << "Ingrese el valor de B: ";
    cin >> num2;
    
    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> operador;

    cout << endl;
    try
    {
        resultado = calculadora(num1, num2, operador);
        cout << "El Resultado de " << num1 << " " << operador << " " << num2 << " es: " ;
        cout << resultado;         
        }
    catch(const char* error)
    {
        cout << error;
    }

    return 0;
}