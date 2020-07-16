#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;
    cout << "Ingrese su nota: ";
    cin >> nota;
    cout << endl;


    if (nota == 100)
    {
        cout << "Obtuvo una A++ ";
    }
    else if (nota >= 95 && nota <= 99)
    {
        cout << "Obtuvo una A+ ";
    }
    else if (nota >= 90 && nota <= 94)
    {
        cout << "Obtuvo una A ";
    }
    else if (nota >= 85 && nota <= 89)
    {
        cout << "Obtuvo una A- ";
    }
    else if (nota >= 80 && nota <= 84)
    {
        cout << "Obtuvo una B+ ";
    }
    else if (nota >= 75 && nota <= 79)
    {
        cout << "Obtuvo una B ";
    }
    else if (nota >= 70 && nota <= 74)
    {
        cout << "Obtuvo una B- ";
    }
    else if (nota >= 65 && nota <= 69)
    {
        cout << "Obtuvo una C+ ";
    }
    else if (nota >= 60 && nota <= 64)
    {
        cout << "Obtuvo una C ";
    }
    else if (nota >= 55 && nota <= 89)
    {
        cout << "Obtuvo una C- ";
    }
    else if (nota >= 50 && nota <= 54)
    {
        cout << "Obtuvo una D+ ";
    }
    else if (nota >= 45 && nota <= 49)
    {
        cout << "Obtuvo una D ";
    }
    else if (nota >= 40 && nota <= 44)
    {
        cout << "Obtuvo una D- ";
    }
    else if (nota >= 35 && nota <= 39)
    {
        cout << "Obtuvo una E+ ";
    }
    else if (nota >= 30 && nota <= 34)
    {
        cout << "Obtuvo una E ";
    }
    else if (nota >= 25 && nota <= 29)
    {
        cout << "Obtuvo una E- ";
    }
    else if (nota >= 20 && nota <= 24)
    {
        cout << "Obtuvo una F+ ";
    }
    else if (nota >= 10 && nota <= 19)
    {
        cout << "Obtuvo una F ";
    }
    else if (nota >= 5 && nota <= 9)
    {
        cout << "Obtuvo una F- ";
    }
    else if(nota >= 0 && nota <= 4)
    { 
        cout << "Obtuvo una F-- ";
    }
    else 
    {
        cout << "Ingrese una nota 0 - 100";
    }
    return 0;
}
