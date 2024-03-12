#ifndef AIZO1_INSERTSORT_H
#define AIZO1_INSERTSORT_H

#include <iostream>
#include "../Helpers/Counter.h"
#include "../Helpers/Checker.h"
using namespace std;

class InsertSort {
private:
    int *arr;
    int *TempArr;
    int size;
    void displayData();
public:
    InsertSort(int *arr, int size) {
        this->arr = arr;
        this->size = size;
    }

    double getAverageTime(int iterations);
    void sort();
};


#endif //AIZO1_INSERTSORT_H
