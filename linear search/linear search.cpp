//
// Created by gabriel on 2/02/25.
//
#include <iostream>
#include <vector>
#include "../includes/utilities.h"


using namespace std;
/**
 * @brief Busca un valor en un arreglo y muestra las posiciones donde se encuentra.
 *
 * @param value El valor a buscar.
 * @param array El arreglo donde se buscará el valor.
 * @param length La longitud del arreglo.
 */
void linearSearch(const int value, int array[], const int length) {
    bool found = false;
    vector<int> positions;
    for (int i = 0; i < length; i++) {
        if (array[i] == value) {
            positions.push_back(i);
            found = true;
        }
    }

    if (found) {
        const int n = positions.size();
        cout << "\t El valor se encuentra en la posición ";
        for (int i = 0; i < n; i++) {
            cout << positions[i];
            if (i != n - 1) {
                cout << ", ";
            }
            else {
                cout << " del array.";
                cout << endl
                    << "\t Se encontraron " << n << " coincidencia(s)." << endl;
            }
        }
    }
    else {
        cout << "\t No se encontró el valor solicitado." << endl;
    }
}