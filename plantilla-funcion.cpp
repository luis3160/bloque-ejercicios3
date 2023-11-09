// plantilla-funcion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<stdlib.h>

using namespace std;

//prototipo de funcion
template <class TIPOD>
void mostrarabs(TIPOD numero);

int main() {





	system("pause");
	return 0;
}
template <class TIPOD>
void mostrarabs(TIPOD numero) {

	if (numero < 0) {
		numero = numero * -1;
	}
	cout << "el valor absoludo del numero: " << numero;
}