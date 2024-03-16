#include "Checker.h"

void Checker::IsSorted(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            throw std::runtime_error("Tablica nie jest posortowana!");
        }
    }
}
