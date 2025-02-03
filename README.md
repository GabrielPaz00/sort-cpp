# Algoritmos de ordenamiento y búsqueda en C++

Este programa implementa varios algoritmos de ordenamiento y búsqueda en C++,
divididos en archivos independientes. 
El programa principal muestra un menú donde se solicita al usuario 
ingresar un tamaño de array y los valores del array (enteros). 
Luego, el usuario selecciona un método de ordenamiento, 
el cual está ordenado de acuerdo a su complejidad en notación O.

## Algoritmos de Ordenamiento

### Complejidad O(n^2)
1. Bubble Sort (`bubble_sort.cpp`)
2. Shaker Sort (`shaker_sort.cpp`)
3. Selection Sort (`selection_sort.cpp`)
4. Insertion Sort (`insertion_sort.cpp`)
5. Binary Insertion Sort (`binary_insertion_sort.cpp`)

### Complejidad O(n log n)
6. Shell Sort (`shell_sort.cpp`)
7. Quick Sort (`quick_sort.cpp`)
8. Heap Sort (`heap_sort.cpp`)

## Algoritmos de Búsqueda

1. Linear Search (`linear_search.cpp`)
2. Binary Search (`binary_search.cpp`)

## Estructura de Archivos

- `main.cpp`: Contiene la lógica principal del programa, que incluye el menú para seleccionar el tamaño del array, ingresar los valores y seleccionar el método de ordenamiento.
- `binary_insertion_sort.cpp`: Implementación de Binary Insertion Sort.
- `bubble_sort.cpp`: Implementación de Bubble Sort.
- `shaker_sort.cpp`: Implementación de Shaker Sort.
- `heap_sort.cpp`: Implementación de Heap Sort.
- `insertion_sort.cpp`: Implementación de Insertion Sort.
- `quick_sort.cpp`: Implementación de Quick Sort.
- `selection_sort.cpp`: Implementación de Selection Sort.
- `shell_sort.cpp`: Implementación de Shell Sort.
- `linear_search.cpp`: Implementación de Linear Search.
- `binary_search.cpp`: Implementación de Binary Search.

## Uso

1. Compila el arcvhivo `main.cpp` de código fuente:
    


2. Sigue las instrucciones en el menú para ingresar el tamaño del array, los valores del array y seleccionar el método de ordenamiento.

## Complejidad de los Algoritmos de Ordenamiento

### Complejidad O(n^2)
1. **Bubble Sort**: O(n^2)
2. **Shaker Sort**: O(n^2)
3. **Selection Sort**: O(n^2)
4. **Insertion Sort**: O(n^2)
5. **Binary Insertion Sort**: O(n^2)

### Complejidad O(n log n)
6. **Shell Sort**: Varía dependiendo del incremento, generalmente entre O(n^1.5) y O(n^2)
7. **Quick Sort**: O(n log n)
8. **Heap Sort**: O(n log n)

## Complejidad de los Algoritmos de Búsqueda

1. **Linear Search**: O(n)
2. **Binary Search**: O(log n)