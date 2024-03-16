#include "InsertSort.h"

void InsertSort::sort() {
    for (int i = 1; i < size; i++) {
        int key = TempArr[i];
        int j = i - 1;
        while (j >= 0 && TempArr[j] > key) {
            TempArr[j + 1] = TempArr[j];
            j--;
        }
        TempArr[j + 1] = key;
    }
}

double InsertSort::getAverageTime(int iterations) {
    Counter counter;
    double sum = 0;
    Checker checker;
//    displayData();

    for (int i = 0; i < iterations; i++) {
        TempArr = new int[size];
        for (int l = 0; l < size; l++) {
            TempArr[l] = arr[l];
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

void InsertSort::displayData() {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << std::endl;
}