#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 20;
    int b = 18;
    int c = 5;

    if (a > 8 && b > 8 && c > 8)
    {
        cout << " Todos los numeros son mayores a 8";
    }
      else if (a > 8 || b > 8 || c > 8)
      {
         cout << "Algunos de los numeros son mayores a 8";
      }
    
    return 0;
}
