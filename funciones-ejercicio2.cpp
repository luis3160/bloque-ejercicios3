// funciones-ejercicio2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
void pedirdatos();
void al_cuadrado(float num1);


float numero;

int main() {

	pedirdatos();
	al_cuadrado(numero);

	system("pause");
	return 0;

}

void pedirdatos() {
	cout << "ingresa el numero a elevar: ";cin >> numero;
}

void al_cuadrado(float elevar) {

	elevar = pow(numero, 2);

	cout << "la multplicacion es: " << elevar << endl;
}