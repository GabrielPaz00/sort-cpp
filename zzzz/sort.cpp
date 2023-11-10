#include <iostream>
#include <vector>

using namespace std;
/**
 * Imprime un arreglo de enteros en la consola.
 * @param array El arreglo de enteros a imprimir.
 * @param length La longitud del arreglo.
 */
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
 * @brief Ordena un arreglo de enteros utilizando el algoritmo Bubble Sort.
 *
 * @param array Arreglo de enteros a ordenar.
 * @param length Longitud del arreglo.
 */
void bubbleSort(int* array, int length) {
    int i, aux;
    int j = length - 1;

    for (int i = 0; i < j; i++) {
        for (int i = 0; i < j; i++) {
            if (array[i] > array[i + 1]) {
                aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
            }
        }
    }
}
/**
 * @brief Ordena un arreglo de enteros utilizando el algoritmo Shaker Sort.
 *
 * @param array Arreglo de enteros a ordenar.
 * @param length Longitud del arreglo.
 */
void shakerSort(int* array, int length) {
    int i;
    int j = length - 1;
    int aux;

    for (int i = 0; i < j; i++, j--) {
        // left to right
        for (int i = 0; i < j; i++) {
            if (array[i] > array[i + 1]) {
                aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
            }
        }
        // right to left
        for (int i = j; i > 0; i--) {
            if (array[i] < array[i - 1]) {
                aux = array[i];
                array[i] = array[i - 1];
                array[i - 1] = aux;
            }
        }
    }
}
/**
 * Ordena un arreglo de enteros utilizando el algoritmo de selección.
 *
 * @param array El arreglo a ordenar.
 * @param length La longitud del arreglo.
 */
void selectionSort(int* array, int length) {
    int i;
    int n = length - 1;
    int aux;

    for (i = 0; i < n; i++) {
        // left to right
        int min_index = i;
        for (int j = i + 1; j < length; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        aux = array[i];
        array[i] = array[min_index];
        array[min_index] = aux;
    }
}
/**
 * Ordena un arreglo de enteros utilizando el algoritmo de ordenamiento por inserción.
 * @param array El arreglo a ordenar.
 * @param length La longitud del arreglo.
 */
void insertionSort(int* array, int length) {
    int i, j, key;
    for (i = 1; i < length; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}
/**
 * @param array Arreglo ordenado en el que se realizará la búsqueda.
 * @param low Índice inferior del arreglo.
 * @param high Índice superior del arreglo.
 */
int binarySearch(int* array, int low, int high, int key) {

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
    else {
        return binarySearch(array, low, mid - 1, key);
    }
}
/**
 * Ordena un arreglo de enteros utilizando el algoritmo de ordenamiento por inserción binaria.
 * @param array El arreglo a ordenar.
 * @param length La longitud del arreglo.
 */
void binaryInsertionSort(int* array, int length) {
    int i, j, key, location;
    for (i = 1; i < length; i++) {
        key = array[i];
        location = binarySearch(array, 0, i - 1, key);
        for (j = i - 1; j >= location; j--) {
            array[j + 1] = array[j];
        }
        array[j + 1] = key;
    }
}
/**
  * @brief Ordena un arreglo de enteros utilizando el algoritmo Shell Sort.
  *
  * @param array Arreglo de enteros a ordenar.
  * @param length Longitud del arreglo.
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
/**
 * @brief Particiona un arreglo alrededor de un elemento pivote.
 *
 * @param array Puntero al arreglo que se va a particionar.
 * @param low Índice del primer elemento de la partición.
 * @param high Índice del último elemento de la partición.
 * @return Índice del elemento pivote después de la partición.
 */
int partition(int* array, int low, int high) {
    int pivot = array[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (array[j] < pivot) {
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]);
    return i + 1;
}
/**
 * Ordena un arreglo de enteros utilizando el algoritmo QuickSort.
 * @param array El arreglo a ordenar.
 * @param low El índice más bajo del arreglo a ordenar.
 * @param high El índice más alto del arreglo a ordenar.
 */
void quickSort(int* array, int low, int high) {
    if (low < high) {
        int pivot = partition(array, low, high);
        quickSort(array, low, pivot - 1);
        quickSort(array, pivot + 1, high);
    }
}
/**
 * @brief Reoarganiza los elementos de un arreglo para formar un heap.
 *
 * @param array Puntero al arreglo que se va a heapificar.
 * @param length Número de elementos en el arreglo.
 * @param i Índice de la raíz del subárbol que se va a heapificar.
 */
void heapify(int* array, int length, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < length && array[left] > array[largest])
        largest = left;

    if (right < length && array[right] > array[largest])
        largest = right;

    if (largest != i) {
        swap(array[i], array[largest]);
        heapify(array, length, largest);
    }
}
/**
 * @brief Ordena un arreglo utilizando el algoritmo Heap Sort.
 *
 * @param array Arreglo a ordenar.
 * @param length Longitud del arreglo.
 */
void heapSort(int* array, int length) {
    for (int i = length / 2 - 1; i >= 0; i--) {
        heapify(array, length, i);
    }
    for (int i = length - 1; i >= 0; i--) {
        swap(array[0], array[i]);
        heapify(array, i, 0);
    }
}
/**
 * @brief Busca un valor en un arreglo y muestra las posiciones donde se encuentra.
 *
 * @param value El valor a buscar.
 * @param array El arreglo donde se buscará el valor.
 * @param length La longitud del arreglo.
 */
void findValue(int value, int* array, int length) {
    bool found = false;
    vector<int> positions;
    for (int i = 0; i < length; i++) {
        if (array[i] == value) {
            positions.push_back(i);
            found = true;
        }
    }
    if (found == true) {
        int n = positions.size();
        cout << "\t El valor se encuentra en la posición ";
        for (int i = 0; i < n; i++) {
            cout << positions[i];
            if (i != n - 1) {
                cout << ", ";
            }
            else {
                cout << " del array.";
                cout << endl
                    << "\t Se encontraron " << n << " coincidencias." << endl;
            }
        }
    }
    else {
        cout << "\t No se encontró el valor solicitado." << endl;
    }
    return;
}
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
    findValue(value, array, length);
    cout << endl << "\t ¿Desea seguir ordenando?" << endl;
    cout << "\t Sí (1) No (0) :";
    cin >> exit;
    if (exit == 1) {
        cout << endl;
        showMenu();
    }
    return;
}
int main() {
    showMenu();
    return 0;
}