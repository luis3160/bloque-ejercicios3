/*5. Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos:
nota1, nota2, nota3; y otro llamada alumno que tendrá los siguientes miembros:
nombre, sexo, edad; hacer que la estructura promedio este anidada en la
estructura alumno, luego pedir todos los datos para un alumno, luego calcular su
promedio, y por ultimo imprimir todos sus datos incluidos el promedio.*/

#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

struct promedio {
	float nota1;
	float nota2;
	float nota3;


};

struct alumno {
	char nombre[30];
	char sexo;
	int edad;
	struct promedio anidada;

};

int main() {

	int n;
	int  pos=0;
	float prom=0;
	float mayor = 0;
	


	 
	cout << "ingresa la cantidad de estudiantes: ";cin >> n;

	vector<alumno> valor(n);

	cin.ignore();
	for (int i = 0;i < n;i++) {
		cout << "ingrese su nombre: ";cin.getline(valor[i].nombre, 30, '\n');
		cout << "ingresa su sexo con (M)para mujer (M) para hombre: ";cin >> valor[i].sexo;
		cout << "ingresa tu edad: ";cin >> valor[i].edad;

		cout << "ingresa tus notas empecemos por la primera: ";cin >> valor[i].anidada.nota1;
		cout << "ingresa tus notas segunda nota: ";cin >> valor[i].anidada.nota2;
		cout << "ingresa tus notas tercera nota: ";cin >> valor[i].anidada.nota3;
		
		cin.ignore();

		prom = valor[i].anidada.nota1 + valor[i].anidada.nota2 + valor[i].anidada.nota3 /3;

		if (mayor < prom) {

			mayor = prom;
			pos=i;
		}
	}


	//inmprimir datos del estudiante con mayor promedio

	cout << "datos del estudiante con mayor  promedio"<<endl;

	cout << "nombre del estudiante: " << valor[pos].nombre<<endl;
	cout << "sexo del estudiante: " << valor[pos].sexo<<endl;
	cout << "edad del estudiante: " << valor[pos].edad << endl;

	cout << "promedio del estudiante: " << mayor;



	system("pause");
	return 0;
}