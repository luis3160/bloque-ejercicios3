// boque-7-ejercicio3.cpp : 
#include<iostream>
#include<stdlib.h>

#include<string.h>

using namespace std;

int main() {

	char letra[90];
	char letra2[90];



	cout << "ingresa una cadena de texto: ";cin.getline(letra, 90, '\n');
	cout << "ingresa una segunda cadena de caracteres: ";cin.getline(letra2, 90, '\n');

	if (strcmp(letra, letra2) == 0) {
		cout << "las cadenas de textos son iguales" << endl;
	}

	if (strcmp(letra, letra2) > 0) {

		cout << letra << "es mayor a de las dos cadenas";
	}

	else if (strcmp(letra, letra2) < 0) {
		cout << letra2 << "es mayor de las dos cadenas";
	}

	system("pause");
	return 0;
}