#include <iostream>
#include <vector>

using namespace std;

/**
 * Sorts an array of integers using the bubble sort algorithm.
 *
 * @param array Pointer to the array to be sorted.
 * @param length Length of the array to be sorted.
 */
int* bubbleSort(int* array, const int length) {
  int j = length - 1;
  int aux;

  for (int i = 0; i < j; i++) {
    bool isExchange = false;
    // left
    for (int i = 0; i < j; i++) {
      if (array[i] > array[i + 1]) {
        swap(array[i], array[i + 1]);
        isExchange = true;
      }
    }
    if (isExchange == true) {
      cout << endl << "pasada " << i + 1 << " : ";
      printArray(array, length);
    }

    /*
    //right
    for (int i = j; i > 0; i--) {
      if (array[i] < array[i - 1]) {
        aux = array[i];
        array[i] = array[i - 1];
        array[i - 1] = aux;
      }
    }*/
  }
  return array;
}