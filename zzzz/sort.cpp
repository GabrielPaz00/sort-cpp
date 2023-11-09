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
    case 4:
        insertionSort(array, length);
        message = "Insertion sort";
    default:
        break;
    }
    cout << endl
        << "\t Array ordenado por " << message << " : ";
    printArray(array, length);
    cout << endl;
}
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