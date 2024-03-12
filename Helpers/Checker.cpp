//
// Created by MateuszZalobnik on 3/8/2024.
//

#include "Checker.h"

bool Checker::IsSorted(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}
