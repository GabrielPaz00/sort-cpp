//
// Created by gabriel on 2/02/25.
//
#include <iostream>

/**
 * Imprime un arreglo de enteros en la consola.
 * @param array El arreglo de enteros a imprimir.
 * @param length La longitud del arreglo.
 */

using namespace std;

void printArray(const int* array, int length) {
    cout << "[";
    for (int i = 0; i < length; i++) {
        cout << array[i];
        if (i != length - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}