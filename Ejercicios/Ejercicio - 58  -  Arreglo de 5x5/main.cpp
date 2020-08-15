#include <iostream>
#include "stdlib.h"
#include "time.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int suma = 0;

    int arreglo[5][5];

    srand(time(NULL));
    
    cout << endl;

    for (int filas = 0; filas < 5; filas++)
    {
        for (int columnas = 0; columnas < 5; columnas++)
        {
            arreglo[filas][columnas] = rand() %  9 + 1;
            cout << "[" << arreglo[filas][columnas] << "]" << " ";
            
            suma = suma + arreglo[filas][columnas];
        }  
            cout << endl;
    } 
    cout << endl;
    cout << "El total suma: " << suma << endl;

    return 0;
}
