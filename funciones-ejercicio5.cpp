// funciones-ejercicio5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>

using namespace std;

template <class tipod>
void despliege(tipod dato);

int main() {
	int num = 40;
	float num1 = 0.50;


	despliege(num);
	despliege(num1);



	return 0;
}

template <class tipod>
void despliege(tipod dato) {

	cout << "el tipo de dato es: " << dato;
}