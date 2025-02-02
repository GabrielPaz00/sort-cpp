#include <iostream>
#include <vector>
#include  "../includes/functions.h"

using namespace std;

/**
 * Ordena un arreglo de enteros utilizando uno de los siguientes algoritmos de ordenamiento:
 * 1. Bubble sort
 * 2. Shaker sort
 * 3. Selection sort
 * 4. Insertion sort
 * 5. Binary insertion sort
 * 6. Shell sort
 * 7. Quick sort
 * 8. Heap sort
 *
 * @param array El arreglo de enteros a ordenar
 * @param length La longitud del arreglo
 * @param op El número que representa el algoritmo de ordenamiento a utilizar
 */
void sortArray(int* array, int length, int op) {
    string message;
    switch (op)
    {
    case 1:
        bubbleSort(array, length);
        message = "Bubble sort";
        break;
    case 2:
        shakerSort(array, length);
        message = "Shaker sort";
        break;
    case 3:
        selectionSort(array, length);
        message = "Selection sort";
        break;
    case 4:
        insertionSort(array, length);
        message = "Insertion sort";
        break;
    case 5:
        binaryInsertionSort(array, length);
        message = "Binary insertion sort";
        break;
    case 6:
        shellSort(array, length);
        message = "Shell sort";
        break;
    case 7:
        quickSort(array, 0, length - 1);
        message = "Quick sort";
        break;
    case 8:
        heapSort(array, length);
        message = "Heap sort";
    default:
        break;
    }
    cout << endl
        << "\t Array ordenado por " << message << " : ";
    printArray(array, length);
    cout << endl;
}

/**
 * Muestra un menú para que el usuario ingrese el tamaño de un vector y elija un método de ordenamiento.
 * Luego, muestra el vector desordenado, lo ordena según el método elegido por el usuario y busca un valor dentro del vector.
 * Si el usuario desea seguir ordenando, se muestra el menú nuevamente.
 */
void showMenu() {
    int length, value, exit, op;
    cout << "\t Ingresa el tamaño del vector: ";
    cin >> length;
    int array[length];
    cout << endl;
    for (int i = 0; i < length; i++) {
        cout << "\t Valor " << i + 1 << " : ";
        cin >> array[i];
    }
    cout << endl << "\t Elija un método de ordenamiento." << endl;
    cout << endl << "\t --- Complejidad O(n^2) ---" << endl << endl;
    cout << "\t 1.- Bubble sort" << endl;
    cout << "\t 2.- Shaker sort" << endl;
    cout << "\t 3.- Selection sort" << endl;
    cout << "\t 4.- Insertion sort" << endl;
    cout << "\t 5.- Binary insertion sort" << endl;
    cout << endl << "\t --- Complejidad O(n log n) ---" << endl << endl;
    cout << "\t 6.- Shell sort" << endl;
    cout << "\t 7.- Quick sort" << endl;
    cout << "\t 8.- Heap sort" << endl;
    cout << endl << "\t Ingresa tu opcion: ";
    cin >> op;
    while (op < 0 || op > 9) {
        cout << "\t ¡Error!" << endl;
        cout << "\t Ingrese una opción valida: ";
        cin >> op;
    }
    cout << endl
        << "\t Array desordenado: ";
    printArray(array, length);
    //
    sortArray(array, length, op);
    cout << "\t Ingrese el valor que desee encontrar dentro del array: ";
    cin >> value;
    linearSearch(value, array, length);
    cout << endl << "\t ¿Desea seguir ordenando?" << endl;
    cout << "\t Sí (1) No (0) :";
    cin >> exit;
    if (exit == 1) {
        cout << endl;
        showMenu();
    }
}
int main() {
    showMenu();
    return 0;
}