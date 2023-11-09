#include <iostream>
#include <vector>

using namespace std;

void printArray(int* array, int length) {
    cout << "[";
    for (int i = 0; i < length; i++) {
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
void insertionSort(int* array, int length) {
    int i, j, key;
    for (i = 1; i < length; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
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
    insertionSort(array, length);
    //------------------------//
    cout << endl
        << "Array ordenado: ";
    printArray(array, length);
    cout << endl;
    return 0;
}