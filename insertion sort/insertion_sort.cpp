#include <iostream>
#include <vector>

using namespace std;

/**
 * Sorts an array of integers using the insertion sort algorithm.
 * @param array - The array to be sorted.
 * @param length - The length of the array.
 */
void insertionSort(int* array, int length) {
    int i, j, key;
    for (i = 1; i < length; i++) {
        key = array[i];
        for (j = i - 1; j >= 0 && array[j] > key; j--) {
            array[j + 1] = array[j];
        }
        array[j + 1] = key;
    }
}