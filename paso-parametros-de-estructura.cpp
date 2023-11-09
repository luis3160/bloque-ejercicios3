// paso-parametros de estructura.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

struct persona {
	char nombre[30];
	int edad;
} p1;

void pedirdatos();
void mostrardatos(persona);

int main() {
	pedirdatos();
	mostrardatos(p1);
	return 0;
}

void pedirdatos() {

	cout << "ingrese su nombre: ";cin.getline(p1.nombre, 30, '\n');
	cout << "digite su edad: ";cin >> p1.edad;
}

void mostrardatos(persona p) {

	cout << "\nnombre: " << p.nombre << endl;

	cout << "edad:" << p.edad << endl;
}