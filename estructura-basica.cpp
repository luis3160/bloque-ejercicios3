#include<iostream>
#include<stdlib.h>
using namespace std;

struct persona {
	char letra[30];
	int numero;

}persona1 = { "alejandro",20 },
persona2 = {"alexa",39};


int main() {
	cout << "nombre 1: " << persona1.letra << endl;
	cout << "edad: " << persona1.numero << endl;

	cout << "nombre: " << persona2.letra << endl;
	cout << "edad: " << persona2.numero << endl;

	






	system("pause");
	return 0;
}