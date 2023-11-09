#include <iostream>
#include <vector>

using namespace std;

void printArray(int* array, int length) {
    for (int i = 0; i < length; i++) {
        if (i == 0) {
            cout << "[";
        }
        cout << array[i];
        if (i == length - 1) {
            cout << "]";
        }
        else {
            cout << ", ";
        }
    }
    cout << endl;
}
void binaryInsertionSort(int* array, int length) {
    int i;
    int j = length - 1;
    int aux;

    for (int i = 0; i < j; i++) {
        // left
        for (int i = 0; i < j; i++) {
            if (array[i] > array[i + 1]) {
                aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
            }
        }
    }
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
    // sort array by shaker sort
    binaryInsertionSort(array, length);
    //------------------------//
    cout << endl
        << "Array ordenado: ";
    printArray(array, length);
    cout << endl;
    return 0;
}