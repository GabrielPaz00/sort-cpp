//
// Created by gabriel on 2/02/25.
//
#include <iostream>
#include <vector>

using namespace std;

/**
 * @param array The array to search in.
 * @param low The lower index of the array.
 * @param high The upper index of the array.
 * @param key The value to search for in the array.
*/

int binarySearch(int* array, int low, int high, const int key) {
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
    return binarySearch(array, low, mid - 1, key);
}
