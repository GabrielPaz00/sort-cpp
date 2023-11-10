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
 * Rearranges the elements of the array in such a way that they form a max heap.
 * @param array The array to be heapified.
 * @param length The length of the array.
 * @param i The index of the element to be heapified.
 */
void heapify(int* array, int length, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < length && array[left] > array[largest])
        largest = left;

    if (right < length && array[right] > array[largest])
        largest = right;

    if (largest != i) {
        swap(array[i], array[largest]);
        heapify(array, length, largest);
    }
}
/**
 * Sorts an array of integers using the heap sort algorithm.
 *
 * @param array Pointer to the array to be sorted.
 * @param length Length of the array.
 */
void heapSort(int* array, int length) {
    for (int i = length / 2 - 1; i >= 0; i--) {
        heapify(array, length, i);
        printArray(array, length);
    }
    for (int i = length - 1; i >= 0; i--) {
        swap(array[0], array[i]);
        heapify(array, i, 0);
        printArray(array, length - i);
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
    // sort array by heap sort
    heapSort(array, length);
    //------------------------//
    cout << endl
        << "Array ordenado: ";
    printArray(array, length);
    cout << endl;
    return 0;
}