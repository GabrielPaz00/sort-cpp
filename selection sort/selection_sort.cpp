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
void selectionSort(int* array, int length) {
    int i;
    int n = length - 1;
    int aux;

    for (i = 0; i < n; i++) {
        // left to right
        int min_index = i;
        for (int j = i + 1; j < length; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        aux = array[i];
        array[i] = array[min_index];
        array[min_index] = aux;
        /*
        // right to left

        }*/
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
    selectionSort(array, length);
    //------------------------//
    cout << endl
        << "Array ordenado: ";
    printArray(array, length);
    cout << endl;
    return 0;
}
