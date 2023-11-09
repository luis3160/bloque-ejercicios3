// funciones-ejercicio12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<cstdlib>

using namespace std;

void pedir_datos();
void trabajo(int vec[], int);


int vec[6], numero;

int main() {

	pedir_datos();
	trabajo(vec, numero);

	system("pause");
	return 0;
}

void pedir_datos() {

	cout << "ingrese cantidad del vector: ";cin >> numero;

	for (int i = 0;i < numero;i++) {
		cout << "ingrese un numero: ";cin >> vec[i];

	}


}

void trabajo(int vec[], int numero) {
	bool valor = true;

	for (int i = 1;i < numero;i++) {


		if (vec[i] >= vec[i - 1]) {

			valor = true;
			cout << "esta ordenado" << endl;
		}

		else {
			valor = false;
			cout << "el arreglo no esta ordenado";
		}break;


	}
}