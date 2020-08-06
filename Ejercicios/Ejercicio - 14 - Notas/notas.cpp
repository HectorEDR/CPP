#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;
    cout << "Ingrese su nota: ";
    cin >> nota;
    cout << endl;

    if (nota > 100 || nota < 0)
    {
        cout << "Ingrese una nota valida 0 - 100 ";
        return 0;
    }

    if (nota >= 95 && nota <= 100)
    {
        cout << "Obtuvo una A ";
    }
    if (nota >= 85 && nota <= 94)
    {
        cout << "Obtuvo una B ";
    }
     if (nota >= 75 && nota <= 84)
    {
        cout << "Obtuvo una C ";
    }
    if (nota >= 65 && nota <= 74)
    {
        cout << "Obtuvo una D ";
    }
     if (nota >= 60 && nota <= 64)
    {
        cout << "Obtuvo una E ";
    }
     if (nota < 60)
    {
        cout << "Obtuvo una F ";
    }
    return 0;
}
