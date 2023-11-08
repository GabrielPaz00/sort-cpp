#include <iostream>
#include <vector>

using namespace std;
void printArray(int* array, int length) {
    cout << "[";
    for (int i = 0; i < length; i++) {
        cout << array[i];
        if (i != length - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}
void bubbleSort(int* array, int length) {
    int i, aux;
    int j = length - 1;

    for (int i = 0; i < j; i++) {
        for (int i = 0; i < j; i++) {
            if (array[i] > array[i + 1]) {
                aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
            }
        }
    }
}
void findValue(int value, int* array, int length) {
    bool found = false;
    vector<int> positions;
    for (int i = 0; i < length; i++) {
        if (array[i] == value) {
            positions.push_back(i);
            found = true;
        }
    }
    if (found == true) {
        int n = positions.size();
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                cout << "El valor se encuentra en la posición ";
            }
            cout << i;
            if (i != n - 1) {
                cout << ", ";
            }
            else {
                cout << " del array.";
                cout << endl
                    << "Se encontraron " << n << " coincidencias." << endl;
            }
        }
    }
    else {
        cout << "No se encontró el valor solicitado." << endl;
    }
    return;
}

int main() {
    int length, value;
    cout << "Ingresa el tamaño del vector: ";
    cin >> length;
    int array[length];
    cout << endl;
    for (int i = 0; i < length; i++) {
        cout << "Valor " << i + 1 << " : ";
        cin >> array[i];
    }
    cout << endl
        << "Array desordenado: ";
    printArray(array, length);

    bubbleSort(array, length);
    //------------------------//
    cout << endl
        << "Array ordenado: ";
    printArray(array, length);
    cout << endl;
    cout << "Ingrese el valor que desee encontrar dentro del array: ";
    cin >> value;
    findValue(value, array, length);
    return 0;
}
