#include <iostream>
#include <vector>

using namespace std;

/**
 * Sorts an array of integers using the binary insertion sort algorithm.
 * @param array The array to be sorted.
 * @param length The length of the array.
 */
int* binaryInsertionSort(int* array, int length) {
    int i, j, key, location;
    for (i = 1; i < length; i++) {
        key = array[i];
        location = binarySearch(array, 0, i - 1, key);
        for (j = i - 1; j >= location; j--) {
            array[j + 1] = array[j];
        }
        array[j + 1] = key;
    }
    return array;
}
