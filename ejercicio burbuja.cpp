//ejercicio burbuja 100%real not fake

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {

	int numero[] = {4,2,1,3,5};
	int aux;

	for (int i = 0;i < 5;i++) {//esto es para ordenar en caracter apyacente
		for (int j = 0;j < 4;j++) {
			if (numero[j] > numero[j + 1]) {


				aux = numero[j];
				numero[j] = numero[j + 1];
				numero[j + 1] = aux;
			}
		}
	}

	//aqui vamos a mostrar la lista ordenada

	for (int i = 0;i < 5;i++) {

		cout << numero[i]<<"  ";
	}







	system("pause");
	return 0;
}