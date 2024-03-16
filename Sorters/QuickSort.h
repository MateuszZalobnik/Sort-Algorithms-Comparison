#ifndef AIZO1_QUICKSORT_H
#define AIZO1_QUICKSORT_H

#include <iostream>
#include "../Helpers/Counter.h"
#include "../Helpers/Checker.h"
#include <algorithm>
#include <cstdlib>
using namespace std;

class QuickSort {
public:
    enum PivotType {
        LEFT, RIGHT, RANDOM, CENTER
    };
private:
    enum PivotType pivotType;
    int *arr;
    int *TempArr;
    int size;
    int partition(int left, int right);
    void quickSort(int left, int right);
    void displayData();
public:
    QuickSort(int *arr, int size, PivotType pivotType) {
        this->pivotType = pivotType;
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


#endif //AIZO1_QUICKSORT_H
