// devorver-valores-multiples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>

using namespace std;

void carcular(int, int, int&, int&);
int main() {
	int num1, num2, suma=0, producto=0;

	cout << "ingresa dos numeros: ";cin >> num1>>num2;

	carcular(num1, num2, suma, producto);
	cout << "este es la suma: " << suma<<endl;
	cout << "este es el prducto: " << producto<<endl;


	system("pause");
	return 0;
}
void carcular(int num1, int num2, int& suma, int& producto) {

	suma = num1 + num2;
	producto = num1 * num2;
}