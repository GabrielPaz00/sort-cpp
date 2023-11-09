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
 * Sorts an array of integers using the bubble sort algorithm.
 *
 * @param array Pointer to the array to be sorted.
 * @param length Length of the array to be sorted.
 */
void bubbleSort(int* array, int length) {
  int i;
  int j = length - 1;
  int aux;

  for (int i = 0; i < j; i++) {
    // left
    for (int i = 0; i < j; i++) {
      if (array[i] > array[i + 1]) {
        aux = array[i];
        array[i] = array[i + 1];
        array[i + 1] = aux;
      }
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
  // sort array by bubble sort
  bubbleSort(array, length);
  //------------------------//
  cout << endl
    << "Array ordenado: ";
  printArray(array, length);
  cout << endl;
  return 0;
}