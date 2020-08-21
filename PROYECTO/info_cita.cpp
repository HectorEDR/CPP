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
    for (int i = 0; i < 40; i++)
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


void buscar_citas()
{
  system("cls");
  string c_pax = " ";
  cout << " REGISTRO DE CITAS"<< endl;
  cout << "-------------------"<< endl;
  cout << endl;
  cout << "Ingrese el codigo del paciente: ";
  cin >> c_pax;

  for (int x = 0; x < 40; x++)
  {  char tecla3 = ' ';
     if (c_pax == pax[x].codigo)
     {
        cout << endl;
        cout << endl;
        cout << "Nombre: " << pax[x].nombres << endl;
        cout << "Apellido: " << pax[x].apellidos << endl;
        cout << "Identidad: " << pax[x].cedula << endl;
        cout << "Edad: " << pax[x].edad << endl;
        cout << "Telefono: " << pax[x].numero << endl;
        cout << "Correo: " << pax[x].email << endl;
        cout << "Codigo del Doctor: " << pax[x].C_Doctor << endl;
        cout << "Dia: " << pax[x].dia << endl;
        cout << "Mes: " << pax[x].mes << endl;
        cout << "Hora: " << pax[x].hora << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Presione la tecla 'n' para salir, 'y' para imprimir, 'e' para enviar por correo.";
        cout << endl;
        cout << endl;
        cout << "Ingrese su opcion: ";
        cin >> tecla3;
     } else
     {
       cout << endl;
       system("cls");
       cout << "Codigo del paciente no existe";
       cout << endl;
       cout << endl;
       system("pause");
      
     }   
        if (tecla3 == 'n' || tecla3 == 'N')
      {
       return ;
      }
       if (tecla3 == 'y' || tecla3 == 'Y')
       {
         system("cls");
         cout << endl;
         cout << endl;
         cout << "Imprimiendo cita ------ ";
         cout << endl;
         cout << endl;
         system("pause");
       }
       if (tecla3 == 'e' || tecla3 == 'E')
       {
         system("cls");
         cout << endl;
         cout << endl;
         cout << "Enviar cita a: " << pax[x].email;
         cout << endl;
         cout << endl;
         system("pause");
       }
  }
}