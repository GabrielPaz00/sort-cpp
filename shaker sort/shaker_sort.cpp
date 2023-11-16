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
        cout << "primera etapa : ";
        cout << array[i + 1] << "<->" << array[i] << endl;
        printArray(array, length);
        cout << endl;
        isExchange = true;
      }
    }
    // right to left
    for (int i = j; i > 0; i--) {
      if (array[i] < array[i - 1]) {
        swap(array[i], array[i - 1]);
        cout << "segunda etapa : ";
        cout << array[i - 1] << "<->" << array[i] << endl;
        printArray(array, length);
        cout << endl;
        isExchange = true;
      }
    }
    if (isExchange == true) {
      cout << endl << "pasada " << i + 1 << " : ";
      printArray(array, length);
    }
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
  cout << endl;
  // sort array by shaker sort
  shakerSort(array, length);
  //------------------------//
  cout << endl
    << "Array ordenado: ";
  printArray(array, length);
  cout << endl;
  return 0;
}