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
    float *floatArr;
    int size;
    int partition(int left, int right);
    void quickSort(int left, int right);
    void quickSortFloat(int left, int right);
    int partitionFloat(int left, int right);
    void displayData();
public:
    int *TempArr;
    float *floatTempArr;
    QuickSort(int *arr, int size, PivotType pivotType) {
        this->pivotType = pivotType;
        this->arr = arr;
        this->size = size;
        TempArr = new int[size];
        for (int l = 0; l < size; l++) {
            TempArr[l] = arr[l];
        }
    }

    QuickSort(float *arr, int size, PivotType pivotType) {
        this->pivotType = pivotType;
        this->floatArr = arr;
        this->size = size;
        floatTempArr = new float[size];
        for (int l = 0; l < size; l++) {
            floatTempArr[l] = arr[l];
        }
    }

    double sort();
    double sortFloat();
};


#endif //AIZO1_QUICKSORT_H
