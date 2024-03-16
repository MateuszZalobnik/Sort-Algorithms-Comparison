#include "InsertSort.h"

double InsertSort::sort() {
    Counter counter;
    counter.StartCounter();

    for (int i = 1; i < size; i++) {
        int key = TempArr[i];
        int j = i - 1;
        while (j >= 0 && TempArr[j] > key) {
            TempArr[j + 1] = TempArr[j];
            j--;
        }
        TempArr[j + 1] = key;
    }

    double time = counter.GetCounter();
    Checker::IsSorted(TempArr, size);
    return time;
}

void InsertSort::displayData() {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << std::endl;
}