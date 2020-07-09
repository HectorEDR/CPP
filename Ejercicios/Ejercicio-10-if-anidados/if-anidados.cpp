#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 1000;
    int b = 50000;
    int c = 9000;


    if (a > b){
        if(a > b){
          cout << "A es el mayor";

        } else {
            cout << "C es el mayor";
        }
            } else {
              if (b > c){
                    cout << "B es el mayor";
              } else {
                  cout << "C es el mayor";
              }
            }

    return 0;
}
