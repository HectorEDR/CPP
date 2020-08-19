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

   for (int j = 0; j < 5; j++)
   {    cout << "*** CITA ***";
        cout << endl;
        cout << endl;
        cout << "Codigo: "<< pax[j].codigo << endl;
        cout << "Nombre: " << pax[j].nombres << endl;
        cout << "Apellido: " << pax[j].apellidos << endl;
        cout << "Identidad: " << pax[j].cedula << endl;
        cout << "Edad: " << pax[j].edad << endl;
        cout << "Telefono: " << pax[j].numero << endl;
        cout << "Correo: " << pax[j].email << endl;
        cout << "Codigo del Doctor: " << pax[j].C_Doctor << endl;
        cout << "Dia: " << pax[j].dia << endl;
        cout << "Mes: " << pax[j].mes << endl;
        cout << "Hora: " << pax[j].hora << endl;
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
