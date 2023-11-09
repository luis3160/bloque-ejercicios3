// ordenamiento-selecion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<stdlib.h>

using namespace std;
int main() {

	int numero[] = { 4,2,3,5,1 };
	int aux, i, j, min;

	for (i = 0;i < 5;i++) {
		min = i;
		for (j =i+ 1;j < 5;j++) {
			
			
			if (numero[j] < numero[min]) {
				min = j++;
			}
		}
		
		aux = numero[i];
		numero[i] = numero[min];
		numero[min] = aux ;
	}

	for (i = 0;i < 5;i++) {
		cout << numero[i] << "  ";
}



	return 0;
}