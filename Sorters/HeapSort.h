#ifndef AIZO1_HEAPSORT_H
#define AIZO1_HEAPSORT_H

#include <iostream>
#include "../Helpers/Counter.h"
#include "../Helpers/Checker.h"
using namespace std;

class HeapSort {
private:
    int *arr;
    int *TempArr;
    int size;
    void displayData();
public:
    HeapSort(int *arr, int size) {
        this->arr = arr;
        this->size = size;
    }

    double getAverageTime(int iterations);
    void sort();
};


#endif //AIZO1_HEAPSORT_H
