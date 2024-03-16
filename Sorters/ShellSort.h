#ifndef AIZO1_SHELLSORT_H
#define AIZO1_SHELLSORT_H

#include <iostream>
#include <cmath>
#include "../Helpers/Counter.h"
#include "../Helpers/Checker.h"

using namespace std;

class ShellSort {
public:
    enum GapType {
        SHELL,
        HIBBARD,
    };
private:
    enum GapType gapType;
    int *arr;
    int *TempArr;
    int size;
    void displayData();
    void insertSortWithGap(int gap);
public:
    ShellSort(int *arr, int size, GapType gapType) {
        this->gapType = gapType;
        this->arr = arr;
        this->size = size;
        TempArr = new int[size];
        for (int l = 0; l < size; l++) {
            TempArr[l] = arr[l];
        }
    }

    double getAverageTime(int iterations);
    void sort();
};


#endif //AIZO1_SHELLSORT_H
