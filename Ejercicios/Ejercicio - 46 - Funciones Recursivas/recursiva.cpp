#include <iostream>

using namespace std;

int numeroSecreto =  7;

void adivinarNumero(int numero)
{
    if (numero == numeroSecreto)
        {
            cout << "Adivinaste!!" << endl;
        } 
    else
    {
        cout << "Intento fallido con " << numero << endl;

        int otroNumero;
        cout << "Ingrese otro numero: ";
        cin >> otroNumero;
        adivinarNumero(otroNumero);
    }
}
int main(int argc, char const *argv[])
{
    adivinarNumero(5);
    return 0;
}
