#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 30;
    int b = 200;
    int c = 100;

    if (a > b && a > c)
    {
        cout << "A es el mayor";
    } if ( b > a && b >c)
    {
        cout << "B es el mayor";
    }
      if (c > a && c > b)
      {
          cout << "C es el mayor";
      }

     return 0;
}
