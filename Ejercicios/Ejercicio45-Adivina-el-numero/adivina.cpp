#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;

    int numeroSecreto = 0;

    //Inicializael numero random
    srand(time(NULL));

    //Generar un numero entre 1 y 10
    numeroSecreto = rand() % 10 + 1; 
    
    do
    {
        cout << "Adivina el numero secreto (1 - 10): ";
        cin >> numero;

        if (numeroSecreto < numero)
        {
            cout << "El numero secreto puede ser menor " << endl;
        } 
        else if (numeroSecreto > numero)
        {
            cout << "El numero secreto puede ser mayor " << endl;
        }

    } while (numeroSecreto != numero);

        cout << endl;
        cout << endl;
        cout << "Adivinaste el numero";
    
    return 0;
}
