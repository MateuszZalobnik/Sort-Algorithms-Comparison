#ifndef AIZO1_HEAPSORT_H
#define AIZO1_HEAPSORT_H

#include <iostream>
#include "../Helpers/Counter.h"
#include "../Helpers/Checker.h"
using namespace std;

class HeapSort {
private:
    int *arr;
    int size;
    void displayData();
    void heapify(int N, int i);
public:
    int *TempArr;
    HeapSort(int *arr, int size) {
        this->arr = arr;
        this->size = size;
        this->TempArr = new int[size];
        for (int i = 0; i < size; i++) {
            TempArr[i] = arr[i];
        }
    }

    double sort();
};


#endif //AIZO1_HEAPSORT_H
