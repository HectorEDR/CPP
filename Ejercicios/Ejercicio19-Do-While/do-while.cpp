#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 2;
    int b = 10;
    
    
    while(a > b)
    {
      cout << " (WHILE) a > b " << endl;
      break;
    }

    do {
         cout << " (DO WHILE) a > b " << endl;
         break;
    } while ( a > b);
    
    return 0;
}
