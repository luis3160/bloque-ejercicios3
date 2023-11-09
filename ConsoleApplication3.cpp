// busqueda-
// busqueda secuencial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdlib.h>

using namespace std;

int main() {


	int numero[] = { 1,2,4,5,6 };
	int dato = 4;
	char band = 'f';

	int i = 0;
	while ((band == 'f') && (i < 5)) {

		if (dato == numero[i]) {
			band = 'v';
			
		}
		i++;

	}
	if (band == 'v') { cout << "tenemos un alticulo en ep puesto  " << i-1  << endl; }

	if (band == 'f') { cout << "no hay alticulo similar en el listing"; };


	system("pause");
	return 0;
}
