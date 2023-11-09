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
/**
 * @param array The array to search in.
 * @param low The lower index of the array.
 * @param high The upper index of the array.
 * @param key The value to search for in the array.
*/
int binarySearch(int* array, int low, int high, int key) {

    if (high <= low) {
        return (key > array[low]) ? (low + 1) : low;
    }
    int mid = (low + high) / 2;
    if (key == array[mid]) {
        return mid + 1;
    }
    if (key > array[mid]) {
        return binarySearch(array, mid + 1, high, key);
    }
    else {
        return binarySearch(array, low, mid - 1, key);
    }
}
/**
 * Sorts an array of integers using the binary insertion sort algorithm.
 * @param array The array to be sorted.
 * @param length The length of the array.
 */
void binaryInsertionSort(int* array, int length) {
    int i, j, key, location;
    for (i = 1; i < length; i++) {
        key = array[i];
        location = binarySearch(array, 0, i - 1, key);
        for (j = i - 1; j >= location; j--) {
            array[j + 1] = array[j];
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
    // sort array by binary insertion sort
    binaryInsertionSort(array, length);
    //------------------------//
    cout << endl
        << "Array ordenado: ";
    printArray(array, length);
    cout << endl;
    return 0;
}