#include<iostream>
#include<stdlib.h>

using namespace std;

struct info_direccion {
	char direccion[30];
	char ciudad[30];
	char  estado[25];

};

struct empleado {
	char nombre[40];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];

int main() {

	for (int i = 0;i < 2;i++) {
		
		
		cout << "digite su nombre: ";cin.getline(empleados[i].nombre, 40, '\n');
		cout << "digite su direccion: ";cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');
		cout << "digite su ciudad: ";cin.getline(empleados[i].dir_empleado.ciudad, 30, '\n');
		cout << "digite su estado: ";cin.getline(empleados[i].dir_empleado.estado, 25);

		cout << "digite su salario: ";cin >> empleados[i].salario;
		cout << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	}
	for (int i = 0;i < 2;i++) {
		
		cout << "nombre: " << empleados[i].nombre;
		cout << " direccion: " << empleados[i].dir_empleado.direccion;
		cout << "ciudad: " << empleados[i].dir_empleado.ciudad;
		cout << "estado: " << empleados[i].dir_empleado.estado;
		cout << "salario: " << empleados[1].salario;
		cout << "\n";
	}



	system("pause");
	return 0;
}