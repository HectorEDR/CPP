#include <iostream>
#include "menucita.h"
#include "menu.h"

using namespace std;


struct pacientes
{
    string codigo = "";
    string nombres = "";
    string apellidos = "";
    string cedula = " ";
    int edad = 0;
    string numero = " ";
    string email = "";
    string C_Doctor = "";
    string dia = " ";
    string mes = " ";
    string hora = " ";
};

pacientes pax[50];

void agregarPax()
{   
    
    char tecla = ' ';
    for (int i = 0; i < 11; i++)
    { 
      cout << endl;
      cout << endl;
      cout << "Codigo del cliente: ";
      cin >> pax[i].codigo;
      cout << "Nombre del paciente: ";
      cin >> pax[i].nombres;
      cout << "Apellido del paciente: ";
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
      cout << "Ingrese el dia de la cita [1-31]: ";
      cin >> pax[i].dia;
      cout << "Ingrese el mes de la cita [1-12]: ";
      cin >> pax[i].mes;
      cout << "Ingrese la hora de la cita: ";
      cin >> pax[i].hora;


        cout << endl;
        cout << endl;
        cout << "Cita agregada";
        cout << endl;
        cout << endl;
        cout << "Presione la tecla 'n' para salir y 's' si desea crear una nueva cita: ";
        cin >> tecla;
      
     if (tecla == 'n')
     {
       return menucitas();
     }
     if (tecla == 's')
     {
       return agregarPax();
     }
    }
}

void mostrarcitas()
{  
   system("cls");
   char tecla2 = ' ';

   for (int i = 0; i < 5; i++)
   {    cout << "*** CITA ***";
        cout << endl;
        cout << endl;
        cout << "Codigo: "<< pax[i].codigo << endl;
        cout << "Nombre: " << pax[i].nombres << endl;
        cout << "Apellido: " << pax[i].apellidos << endl;
        cout << "Identidad: " << pax[i].cedula << endl;
        cout << "Edad: " << pax[i].edad << endl;
        cout << "Telefono: " << pax[i].numero << endl;
        cout << "Correo: " << pax[i].email << endl;
        cout << "Codigo del Doctor: " << pax[i].C_Doctor << endl;
        cout << "Dia: " << pax[i].dia << endl;
        cout << "Mes: " << pax[i].mes << endl;
        cout << " Hora: " << pax[i].hora << endl;
        cout << endl;
        cout << endl;
   }
        cout << endl;
        cout << "Presione la tecla 'n' para salir: ";
        cin >> tecla2;
      
        if (tecla2 == 'n')
      {
       return menu();
      }
}
