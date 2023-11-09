#include <iostream>
#include <cstdlib> // Se usa cstdlib en lugar de stdlib.h

using namespace std;

int main() {
    int numero[] = { 1, 2, 3, 4, 5 };
    int numero2[5];
   

    for (int i = 0; i < 5; i++) {
        numero2[i] = numero[i] ;
        numero2[i] *= 2; // Multiplicar por 2 en cada iteración
    }

    for (int i = 0; i < 5; i++) {
        cout << numero2[i] << endl;
    }

    system("pause");
    return 0;
}