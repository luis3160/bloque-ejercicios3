#include <iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

const int MAX = 100;

void pedir_datos(int numero[], int& tam);
void enteros(int numero[], int tam, int vec[], int& tam_enteros);
void imprimir(int vec[], int tam);

int main() {
    int numero[MAX], tam, numeros_enteros[MAX], tam_enteros;

    pedir_datos(numero, tam);
    enteros(numero, tam, numeros_enteros, tam_enteros);
    imprimir(numeros_enteros, tam_enteros);

    system("pause");
    return 0;
}

void pedir_datos(int numero[], int& tam) {
    cout << "Ingrese la cantidad para el vector: "; cin >> tam;

    for (int i = 0; i < tam; i++) {
        cout << "Ingrese un numero: "; cin >> numero[i];
    }
}

void enteros(int numero[], int tam, int vec[], int& tam_enteros) {
    tam_enteros = 0;

    for (int i = 0; i < tam; i++) {
        if (numero[i] % 2 != 0) {
            vec[tam_enteros] = numero[i];
            tam_enteros++;
        }
    }
}

void imprimir(int vec[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << vec[i] << "  ";
    }
    cout << endl;
}
