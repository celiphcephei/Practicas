#include <iostream>
#include <vector>

using namespace std;

// Función para mezclar dos subarreglos ordenados
void merge(vector<int>& arr, int left, int mid, int right) {
    int left_size = mid - left + 1;
    int right_size = right - mid;

    // Crear arreglos temporales para las dos mitades
    vector<int> left_half(left_size);
    vector<int> right_half(right_size);

    // Copiar los elementos en los arreglos temporales
    for (int i = 0; i < left_size; i++) {
        left_half[i] = arr[left + i];
    }
    for (int j = 0; j < right_size; j++) {
        right_half[j] = arr[mid + 1 + j];
    }

    // Combinar los arreglos temporales en el arreglo original en orden ascendente
    int i = 0, j = 0, k = left;
    while (i < left_size && j < right_size) {
        if (left_half[i] <= right_half[j]) {
            arr[k] = left_half[i];
            i++;
        } else {
            arr[k] = right_half[j];
            j++;
        }
        k++;
    }

    // Agregar elementos restantes si hay alguno
    while (i < left_size) {
        arr[k] = left_half[i];
        i++;
        k++;
    }
    while (j < right_size) {
        arr[k] = right_half[j];
        j++;
        k++;
    }
}

// Función recursiva para aplicar Merge Sort en todo el arreglo
void merge_sort(vector<int>& arr, int left, int right) {
    if (left >= right) {
        return;
    }


    int mid = left + (right - left) / 2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();

    cout << "Arreglo original: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    merge_sort(arr, 0, n - 1);

    cout << "Arreglo ordenado: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}