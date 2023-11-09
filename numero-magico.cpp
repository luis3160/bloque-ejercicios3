#include<iostream>
#include<stdlib.h>

using namespace std;
int main() {

	int dato, num;

	srand(time(NULL));

	dato = 1 + rand() % 100;
	cout << " adivida el numero de el 1 al 100: ";cin >> num;
	do {
		
		

		if (num > dato) {
			cout << "ingresa un numero menor: ";cin >> num;
		}
		if (num < dato) {
			cout << "ingresa un numero mayor: ";cin >> num;
		}

		else if (num = dato) { cout << "felicidades acertaste"<<"\n"; }
	} while (num != dato);



	system("pause");
	return 0;
}