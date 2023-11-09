// comparar cadenas de char.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char palabra[] = "hola";
	char palabra2[] = "hola";

	if (strcmp(palabra, palabra2) == 0) {

		cout << "ambas palabras son iguales";
	}

	else { cout<< "simplemente son iguales"; }



	return 0;
}