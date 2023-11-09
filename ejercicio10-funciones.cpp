// ejercicio10-funciones.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>

using namespace std;
void cambiar(int& totalseg, int& horas, int& minutos, int& segundos);
int main() {

	int totalseg,horas, minutos, segundos;

	cout << "ingrse un numero: ";cin>>totalseg;

	cambiar(totalseg, horas, minutos, segundos);
	cout << "horas: " << horas<<endl;
	cout << "mintos: " << minutos << endl;
	cout << "segundos: " << segundos << endl;
	system("pause");
	return 0;
}
void cambiar(int& totalseg, int& horas, int& minutos, int& segundos) {
	horas = totalseg/ 3600;
	totalseg %= 3600;

	minutos =totalseg/60;
;

	segundos = totalseg % 60;

}