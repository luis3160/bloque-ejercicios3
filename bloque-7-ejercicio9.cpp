//este programa nos dice la cantidad de veces que aparece una vocal

#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {

	char palabra[30];
	int vocal_a=0,vocal_e=0, vocal_i=0, vocal_o=0, vocal_u=0;

	cout << "ingresa una palabra";cin.getline(palabra, 30, '\n');

	for (int i = 0;i < 30;i++) {
		switch (palabra[i]) {

		case 'a': vocal_a ++;break;
		case 'e': vocal_e++;break;
		case 'i': vocal_i++;break;
		case 'o': vocal_o++;break;
		case 'u': vocal_u++;break;
		}
	}


	cout << "vocal a" << vocal_a << endl;
	cout << "vocal e" << vocal_e << endl;
	cout << "vocal i" << vocal_i << endl;
	cout << "vocal o" << vocal_o << endl;
	cout << "vocal u" << vocal_u << endl;

	system("pause");
	return 0;
}