#ifndef AIZO1_QUICKSORT_H
#define AIZO1_QUICKSORT_H

#include <iostream>
#include <algorithm>
#include "../Helpers/Counter.h"
#include "../Helpers/Checker.h"

using namespace std;

class QuickSort {
private:
    int *arr;
    int *TempArr;
    int size;
    void displayData();
public:
    QuickSort(int *arr, int size) {
        this->arr = arr;
        this->size = size;
    }

    double getAverageTime(int iterations);
    void sort();
    void quickSort(int low, int high);
    int partition(int low, int high);
};


#endif //AIZO1_QUICKSORT_H
