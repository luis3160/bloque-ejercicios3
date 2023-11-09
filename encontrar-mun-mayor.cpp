// encontrar-mun-mayor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<stdlib.h>
using namespace std;

int encontrarMax(int x,int y);

int main() {
	int n1=0, n2=0, mayor;
	cout << "digite 2 numeros: ";cin >> n1;
	cout << "digite 2 numeros: ";cin >>  n2;



	mayor = encontrarMax(n1, n2);
	cout << "el numero mayor es : " << mayor << endl;
	system("pause");
	return 0;
}


int encontrarMax(int x, int y) {

	int numeromax;
	if (x > y) {
		numeromax = x;
	}
	else {
		numeromax = y;
	}
	return numeromax;
}