#include<iostream>
#include<stdlib.h>
using namespace std;
struct atleta {
	
	char nombre[30];
	char pais[30];
	int numero_medallas;


}jugador[];


int main() {
	
	int n,mayor=0,menor=999999;
	int M=0, nor=0;
	cout << "ingrese el numero de jugadores: ";cin >> n;
	


	for (int i = 0;i < n;i++) {
		cout << "ingresa el nombre del atleta: ";cin.getline(jugador[i].nombre, 30, '\n');
		cout << "ingresa el pais del atleta: ";cin.getline(jugador[i].pais, 30, '\n');
		cout << "ingresa el numero de medallas optenidas: ";cin >> jugador->numero_medallas;
		
		cout << endl;

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if (menor < jugador[i].numero_medallas) {
			menor = jugador[i].numero_medallas;
			nor = i;
		}


		if (mayor > jugador[i].numero_medallas) {

			mayor = jugador[i].numero_medallas;

			M = i;
		}
		cout << "\n";
	
	
	};

	cout << "\n";

	
	cout << "este es el nombre del atleta que gano mas medallas: " << jugador[M].nombre << endl;
	cout << "este es el pais del atleta con mas medallas: " << jugador[M].pais << endl;
	cout << endl;

	cout << "este es el nombre del atleta que gano menos medallas: " << jugador[nor].nombre << endl;
	cout << "este es el pais del atleta con menos medallas: " << jugador[nor].pais << endl;
	


	system("pause");
	return 0;
}