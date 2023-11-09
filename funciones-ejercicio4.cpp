// funciones-ejercicio4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
//prototipo de funcion

float al_cuadrado(float numero);

int main() {
	float num = 4.141523;
	float partefracion = al_cuadrado(num);

	cout << "este es el numero fraccionario: " << partefracion;



	system("pause");
	return 0;
}
float al_cuadrado(float numero) {

	float numeroentero;
	return modf(numero, &numeroentero);
}

