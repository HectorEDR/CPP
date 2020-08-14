#include <iostream>
#include "stdlib.h"
#include "time.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int suma;

    int arreglo[5][5];

    srand(time(NULL));

    for (int filas = 0; filas < 5; filas++)
    {
        for (int columnas = 0; columnas < 5; columnas++)
        {
            arreglo[filas][columnas] = rand() %  5 +1;
            
            suma = suma + arreglo[filas][columnas];
        }  
    } cout << "El total suma: " << suma;
    
    

    return 0;
}
