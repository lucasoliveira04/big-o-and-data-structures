#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Busca linear O(n)
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) return i;
    }
    return -1;
}

// Busca binária O(log n)
int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    const int n = 1000000; // 1 milhão de elementos
    int* arr = new int[n];

    // Preenche array ordenado
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    int x = n; // procurar último elemento (pior caso para linear)

    // Medindo tempo da busca linear
    auto start1 = high_resolution_clock::now();
    int pos1 = linearSearch(arr, n, x);
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(end1 - start1);

    cout << "Busca linear encontrou na posicao " << pos1 
         << " em " << duration1.count() << " microssegundos.\n";

    // Medindo tempo da busca binária
    auto start2 = high_resolution_clock::now();
    int pos2 = binarySearch(arr, n, x);
    auto end2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(end2 - start2);

    cout << "Busca binaria encontrou na posicao " << pos2 
         << " em " << duration2.count() << " microssegundos.\n";

    delete[] arr;
    return 0;
}
