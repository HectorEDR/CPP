#include <iostream>


using namespace std;


struct pacientes
{
    string codigo = "";
    string nombres = "";
    string apellidos = "";
    float cedula = 0;
    int edad = 0;
    float numero = 0;
    string email = "";
    string C_Doctor = "";

};

pacientes pax[7];
void agregarPax()
{
    for (int i = 0; i < 7; i++)
    {
      cout << "Codigo del cliente: ";
      cin >> pax[i].codigo;
      cout << "Nombres del paciente: ";
      cin >> pax[i].nombres;
      cout << "Apellidos del paciente: ";
      cin >> pax[i].apellidos;
      cout << "Identidad del paciente: ";
      cin >> pax[i].cedula;
      cout << "Edad del paciente: ";
      cin >> pax[i].edad;
      cout << "Ingrese numero de telefono: ";
      cin >> pax[i].numero;
      cout << "Ingrese correo: ";
      cin >> pax[i].email;
      cout << "Ingrese el codigo de doctor: ";
      cin >> pax[i].C_Doctor;
      cout << endl;
      cout << endl;
      
      system("pause");
    }
}