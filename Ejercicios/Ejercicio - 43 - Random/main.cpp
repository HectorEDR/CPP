#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero;

    //Inicializa el numero Random
    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
          //Inicia el numero random entre 1 y 10
            numero = rand() % 100 +1;

            cout << "Primer numero al azar: " << numero << endl;
    }
    

  
}
