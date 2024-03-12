#include "QuickSort.h"
#include <iostream>
#include <algorithm>
using namespace std;

void QuickSort::sort() {
    quickSort(0, size - 1);
}

void QuickSort::quickSort(int low, int high) {
    if (low < high) {
        int pi = partition(low, high);
        quickSort(low, pi - 1);
        quickSort(pi + 1, high);
    }
}

int QuickSort::partition(int low, int high) {
    int pivot = TempArr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (TempArr[j] < pivot) {
            i++;
            std::swap(TempArr[i], TempArr[j]);
        }
    }
    std::swap(TempArr[i + 1], TempArr[high]);
    return i + 1;
}

double QuickSort::getAverageTime(int iterations) {
    Counter counter;
    double sum = 0;
    Checker checker;
//    displayData();

    for (int i = 0; i < iterations; i++) {
        TempArr = new int[size];
        for (int l = 0; l < size; l++) {
            TempArr[i] = arr[i];
        }

        counter.StartCounter();
        this->sort();
        sum += counter.GetCounter();
        if (!checker.IsSorted(TempArr, size)) {
            return -1;
        }
    }
    return sum / iterations;
}

void QuickSort::displayData() {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << std::endl;
}