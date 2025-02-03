#include <iostream>
#include <vector>

using namespace std;

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