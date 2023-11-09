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
/**
 * @brief Sorts an array of integers using the Shell Sort algorithm.
 *
 * @param array Array of integers to be sorted.
 * @param length Length of the array.
 */
void shellSort(int* array, int length) {
    int i, j, key, gap;
    for (gap = length / 2; gap > 0; gap /= 2) {
        for (i = gap; i < length; i++) {
            key = array[i];
            for (j = i; j >= gap && array[j - gap] > key; j -= gap) {
                array[j] = array[j - gap];
            }
            array[j] = key;
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
    // sort array by shell sort
    shellSort(array, length);
    //------------------------//
    cout << endl
        << "Array ordenado: ";
    printArray(array, length);
    cout << endl;
    return 0;
}