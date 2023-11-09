// funciones-ejercicio16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>

using namespace std;
void pedirDatos();
void funcionMatriz(int m[100][100], int , int  );

int m[100][100], int filas, int columnas;
int main() {

	  pedirDatos();
	  funcionMatriz(  m, filas, columnas);


	system("pause");
	return 0;
}
void pedirDatos() {

	cout << "cual es el numero de filaS: ";cin >> filas;
	cout << "cual es el numero de columnas: "; cin >> columnas;

	for (int i = 0;i < filas;i++) {
		for (int j = 0;j < columnas;j++ ) {
			cout << "ingrese el numero [" << i << "][" << j << "]";cin >> m[i][j];
		}
	}
}

void funcionMatriz(int m[100][100], int filas, int columnas) {
	int  aux = 99999;

	for (int i = 0;i < filas;i++) {
		for (int j = 0;j < columnas;j++) {

			if (m[i][j] < aux) {

				aux = m[i][j];
			}
		}
	}

	cout << aux << "  "  ;
}