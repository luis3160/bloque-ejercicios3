// nivel10-ejercicio2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<stdlib.h>

using namespace std;
struct alumno {
	char nombre[30];
	int edad;
	float promedio;



 }estudiante[3];

 int main() {

	 float mayor = 0;
	 int aux, pos;

	 for (int i = 0;i < 3;i++) {
		 cout << "ingresar el nombre: ";cin.getline(estudiante[i].nombre, 30, '\n');

		 cout << "ingresar la edad: ";cin >> estudiante[i].edad ;

		 cout << "ingresar el promedio: ";cin >> estudiante[i].promedio;
		 cin.ignore(numeric_limits<streamsize>::max(), '\n');
		 if (estudiante[i].promedio > mayor) {
			 
			 
			 mayor = estudiante[i].promedio;
			 

				 pos = i;
		 }
		 cout << endl;
	 }
	 cout << endl;

	 cout << "este es el nombre: " << estudiante[pos].nombre<<endl;
	 cout << "este es la edad : " << estudiante[pos].edad<<endl;
	 cout << "este es el promedio mayor: " << estudiante[pos].promedio<<endl;


	 system("pause");
	 return 0;
 }