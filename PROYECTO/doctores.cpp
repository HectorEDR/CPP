#include <iostream>

using namespace std;

string docgeneral[6][4]{
    {"D001", "Hector Dubon", "General", "8:00AM - 1:00PM"},
    {"D002", "Carlos Ramirez", "General", "7:00AM - 12:00PM"},
    {"D003", "Karla Hernandez", "General", "1:00PM - 6:00PM"},
    {"D004", "Eduardo Fajardo", "General", "2:00PM - 7:00PM"},
    {"D005", "Ana Garcia Lopez", "General", "6:00PM - 11:00PM"},
    {"D006", "Andrea Fernandez", "General", "12:00AM - 6:00AM"},

};

void mostrarD_General()
{  
   system("cls");
   cout << "Codigo, nombre, especialidad y horario" << endl;
   cout << endl;
   for (int i = 0; i < 6; i++)
   {
       cout << docgeneral[i][0] << " ";
       cout << docgeneral[i][1] << " ";
       cout << docgeneral[i][2] << " ";
       cout << docgeneral[i][3] << " ";
       cout << endl;
   }
   cout << endl;
   cout << endl;

}

string especialista[19][4]
{   {"Codigo, nombre y horario", "\n"},
    {"Medicina Interna:", "\n"},
    {"E001", "Wilmer Cruz Paz", "8:00AM - 1:00PM"},
    {"E002", "Carlos Fernandez", "11:00AM - 5:00PM", "\n"},
    {"Ginecologia:", "\n"},
    {"E003", "Francis Hernandez", "7:00AM - 3:00PM"},
    {"E004", "Wilson Ramirez", "11:00AM - 5:00PM", "\n"},
    {"Pediatria:", "\n"},
    {"E005", "Lucia Garcia Paz", "6:00AM - 3:00PM"},
    {"E006", "Andrea Trochez", "10:00AM - 6:00PM", "\n"},
    {"Dermatologia:", "\n"},
    {"E007", "Ana Lucia Gurra", "8:00AM - 2:00PM"},
    {"E008", "Pedro Trochez", "12:00PM - 6:00PM", "\n"},
    {"Cirugia:", "\n"},
    {"E009", "Luis Fernandez", "6:00AM - 3:00PM"},
    {"E010", "Juan Guerra Paz", "9:00AM - 6:00PM", "\n"},
    {"Oftalmologia", "\n"},
    {"E011", "Marvin Sauceda", "8:00AM - 2:00PM"},
    {"E012", "Andres Garcia", "11:00AM - 6:00PM"},
};

void mostrarD_especial()
{
    system("cls");
   
   for (int i = 0; i < 19; i++)
   {
       cout << especialista[i][0] << " ";
       cout << especialista[i][1] << " ";
       cout << especialista[i][2] << " ";
       cout << especialista[i][3] << " ";
       
       cout << endl;
   }
   cout << endl;
   cout << endl;
  
}