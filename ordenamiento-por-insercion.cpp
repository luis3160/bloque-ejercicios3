// ordenamiento por insercion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {

	int numero[] = { 4,2,5,1,3 };
	int aux,pos;

	for (int i = 0;i < 5;i++) {
		
		pos = i;
		aux = numero[i];
		while ((pos > 0) && (numero[pos - 1] > aux)) {
			numero[pos] = numero[pos - 1];
			pos--;
		}

		numero[pos] = aux;
	}
	for (int i = 0;i < 5;i++) {

		cout << numero[i] << "  ";
	}




	return 0;
}