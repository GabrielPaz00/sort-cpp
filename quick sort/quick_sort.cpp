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
int partition(int* array, int low, int high) {
    int pivot = array[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (array[j] < pivot) {
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]);
    return i + 1;
}

void quickSort(int* array, int low, int high) {
    if (low < high) {
        int pivot = partition(array, low, high);
        quickSort(array, low, pivot - 1);
        quickSort(array, pivot + 1, high);
    }
}

int main() {
    int length;
    cout << "Ingresa el tamaño del vector: ";
    cin >> length;
    int array[length];
    cout << endl;
    for (int i = 0; i < length; i++) {
        cout << "Valor " << i + 1 << " : ";
        cin >> array[i];
    }
    cout << endl << "Array desordenado: ";
    printArray(array, length);
    //quick sort//
    int low = 0;
    int high = length - 1;
    quickSort(array, low, high);
    //---//
    cout << endl << "Array ordenado: ";
    printArray(array, length);
    cout << endl;
    return 0;
}