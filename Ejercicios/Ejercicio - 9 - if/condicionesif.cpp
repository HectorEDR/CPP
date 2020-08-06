#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    
    int numero = 0;
    int numerosecreto = 7;

    cout << "Ingrese el numero: ";
     cin >> numero;
     cout << endl;
    if (numero == numerosecreto) {
        cout << "Adivinaste el numero! ";
    } else {
           cout << "Lo siento no adivinaste el numero";

    }
    
    return 0;
}
