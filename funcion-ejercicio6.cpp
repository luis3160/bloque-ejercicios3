// funcion-ejercicio6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
using namespace std;

template<class t>
t maximo(t num1,t num2,t num3);

int main() {

	int numero1, numero2, numero3;
	int funcion=0;
	cout << "ingrse tres numeros";cin>>numero1;
	cout << "ingrse tres numeros";cin>>numero2;
	cout << "ingrse tres numeros";cin>>numero3;
	funcion = maximo(numero1, numero2, numero3);

	cout << "el valor maximo: " << funcion;

	


	return 0;
}

template<class t>
t maximo(t num1, t num2, t num3) {
	t valor;

	if ((num1 > num2)&&(num1>num3)) {
		valor = num1;

	}
	if ((num2 > num1) && (num2 > num3)) {

		valor = num2;
	}
	else { valor = num3; }

	return valor;

}
