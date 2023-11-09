// funciones-ejercicio3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>

using namespace std;

//prototipo de funciones

void pedirdatos();
void funpot(int x, int y);

int numero, exponente;

int main() {
	pedirdatos();
	funpot(numero, exponente);

	system("pause");
	return 0;
}

//funciones
void pedirdatos() {
	cout << "ingrese el numero a elevar: ";cin >> numero;
	cout << "ingrese el numero del exponente: ";cin >> exponente;
}

void funpot(int x, int y) {
	long resultado = 1;
	for (int i = 0;i < y;i++) {

		resultado *= x;
	}
	cout << "el resultado es: " << resultado;
}
