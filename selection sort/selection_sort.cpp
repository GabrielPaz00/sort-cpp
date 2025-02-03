#include <iostream>
#include <vector>

using namespace std;

/**
 * Sorts an array of integers using the selection sort algorithm.
 *
 * @param array Pointer to the first element of the array to be sorted.
 * @param length Number of elements in the array.
 */
void selectionSort(int* array, int length) {
    int i;
    int n = length - 1;
    int aux;

    for (i = 0; i < n; i++) {
        bool isExchange = false;
        int min_index = i;
        for (int j = i + 1; j < length; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
                isExchange = true;
            }
        }
        swap(array[i], array[min_index]);
        if (isExchange == true) {
            cout << endl << "pasada " << i + 1 << " : ";
            printArray(array, length);
        }
    }
}