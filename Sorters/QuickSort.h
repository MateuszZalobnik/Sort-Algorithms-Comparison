#ifndef AIZO1_QUICKSORT_H
#define AIZO1_QUICKSORT_H

#include <iostream>
#include "../Helpers/Counter.h"
#include "../Helpers/Checker.h"
#include <algorithm>
using namespace std;

class QuickSort {
private:
    int *arr;
    int *TempArr;
    int size;
    int partition(int left, int right);
    int partitionByLeftPivot(int left, int right);
    void quickSortByRightPivot(int left, int right);
    void quickSortByLeftPivot(int left, int right);
    void displayData();
public:
    QuickSort(int *arr, int size) {
        this->arr = arr;
        this->size = size;
        TempArr = new int[size];
        for (int l = 0; l < size; l++) {
            TempArr[l] = arr[l];
        }
    }

    double getAverageTimeByRightPivot(int iterations);
    void sortByRightPivot();
};


#endif //AIZO1_QUICKSORT_H
