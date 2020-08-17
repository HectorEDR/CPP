#include <iostream>
#include "acceso.h"
#include "menu.h"
using namespace std;

int main(int argc, char const *argv[])
{
    bool acceso = login();

    if (acceso == true)
    {
        cout << "Acceso Concedido!";
        cout << endl;
        cout << endl;
        system("pause");
        system("cls");

        menu();

    }
    
    return 0;
}

