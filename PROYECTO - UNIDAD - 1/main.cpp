#include <iostream>
#include <stdio.h>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    system("color 0f");
    int opcion = 0;
    bool salir = true;
while (salir == true)
{   system("cls");
    cout << endl;
    cout << "****************" << endl;
    cout << " MENU DE JUEGOS" << endl;
    cout << "****************" << endl;
    cout << endl;
    cout << "1 - StarShip" << endl;
    cout << "2 - Snake" << endl;
    cout << "0 - Salir";
    cout << endl;
    cout << endl;
    cout << "Por favor ingrese una opcion del menu: ";
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        starShip();
        break;

    case 2:
        snake();
        break;
    
    default: 
     
        break;
    }
    if (opcion == 0)
{
    salir = false;
}
} 
    return 0;
}