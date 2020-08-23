#include <iostream>

using namespace std;

bool login()
{
    string password = "";
    int intentos = 0;

    while (intentos <= 3)
    {
        system("cls");

        if(intentos == 3)
        {
            cout << "No se ha validado su password, Por favor contacte a servicio tecnico." << endl;
            return false;
        }
        cout << "--------------------------" << endl;
        cout << " AGENDA DE CITAS MEDICAS" << endl;
        cout << "--------------------------" << endl;
        cout << endl;
        cout << "Ingrese su password: ";
        cin >> password;

        if (password == "labpass" || password == "especialista")
        {
            system("cls");
            return true;
        }
            intentos++;
    }
       
    return false;
}