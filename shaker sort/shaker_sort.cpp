#include <iostream>
#include <vector>

using namespace std;

/**
 * Sorts an array of integers using the shaker sort algorithm.
 *
 * @param array Pointer to the array to be sorted.
 * @param length Length of the array to be sorted.
 */
void shakerSort(int* array, int length) {
  int i;
  int j = length - 1;
  int n;

  for (int i = 0; i < j; i++, j--) {
    // left to right
    bool isExchange = false;

    for (int i = 0; i < j; i++) {
      if (array[i] > array[i + 1]) {
        swap(array[i], array[i + 1]);
        isExchange = true;
      }
    }
    // right to left
    for (int i = j; i > 0; i--) {
      if (array[i] < array[i - 1]) {
        swap(array[i], array[i - 1]);
        isExchange = true;
      }
    }
    if (isExchange == true) {
      cout << endl << "pasada " << i + 1 << " : ";
      printArray(array, length);
    }
  }
}