// ejercicio10-fucion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<cstdlib>

using namespace std;

void calc_anos(int& numd, int& anos, int& mes, int& dia);

int main() {

	int numd, anos, mes, dia;
	cout << "cantidad de dias: ";cin >> numd;

	
	calc_anos(numd, anos, mes, dia);


	cout << "ano: " << anos + 2000 << endl;
	cout << "mes: " << mes + 1 << endl;
	cout << "dia: " << dia + 1 << endl;


	return 0;
}
void calc_anos(int& numd, int& anos, int& mes, int& dia){

	anos = numd / 365;
	numd %= 365;
	mes = numd / 30;
	dia = numd % 30;

	
}