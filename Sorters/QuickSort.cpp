#include "QuickSort.h"

void QuickSort::sortByRightPivot() {
    quickSortByRightPivot(0, size - 1);
}

void QuickSort::quickSortByLeftPivot(int left, int right) {
    // warunek stopu
    if(left >= right) return;
    int pivot = partition(left, right);
    // wywołujemy rekurencyjnie dla lewej i prawej strony pivotu
    quickSortByRightPivot(left, pivot - 1);
    quickSortByRightPivot(pivot + 1, right);
}

void QuickSort::quickSortByRightPivot(int left, int right) {
    // warunek stopu
    if(left >= right) return;
    int pivot = partition(left, right);
    // wywołujemy rekurencyjnie dla lewej i prawej strony pivotu
    quickSortByRightPivot(left, pivot - 1);
    quickSortByRightPivot(pivot + 1, right);
}

int QuickSort::partition(int left, int right) {
    // pivot jako ostatni element
    int pivot = TempArr[right];
    int j = left;
    for (int i = left; i < right; i++) {
        if (TempArr[i] < pivot) {
            std::swap(TempArr[i], TempArr[j]);
            j++;
        }
    }
    std::swap(TempArr[j], TempArr[right]);
    // zwaracamy indeks pivotu
    return j;
}


int QuickSort::partitionByLeftPivot(int left, int right) {
    // pivot jako pierwszy element
    int pivot = TempArr[left];
    std::swap(TempArr[left], TempArr[right]);
    int j = left;
    for (int i = left; i < right; i++) {
        if (TempArr[i] < pivot) {
            std::swap(TempArr[i], TempArr[j]);
            j++;
        }
    }
    std::swap(TempArr[j], TempArr[right]);
    // zwaracamy indeks pivotu
    return j;
}

double QuickSort::getAverageTimeByRightPivot(int iterations) {
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
        this->sortByRightPivot();
        sum += counter.GetCounter();
        // sprawdzamy czy tablica jest posortowana
        if (!checker.IsSorted(TempArr, size)) {
            return -1;
        }
    }
    return sum / iterations;
}


void QuickSort::displayData() {
    for (int i = 0; i < size; i++) {
        cout << TempArr[i] << " ";
    }
    cout << std::endl;
}