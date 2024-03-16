#include "QuickSort.h"

double QuickSort::sort() {
    Counter counter;
    counter.StartCounter();

    quickSort(0, size - 1);

    double time = counter.GetCounter();
    Checker::IsSorted(TempArr, size);
    return time;
}

void QuickSort::quickSort(int left, int right) {
    // warunek stopu
    if(left >= right) return;
    int pivot = partition(left, right);
    // wywołujemy rekurencyjnie dla lewej i prawej strony pivotu
    quickSort(left, pivot - 1);
    quickSort(pivot + 1, right);
}

int QuickSort::partition(int left, int right) {
    int pivot;
    if (pivotType == LEFT) {
        // pivot jako pierwszy element
        pivot = TempArr[left];
        std::swap(TempArr[left], TempArr[right]);
    } else if (pivotType == RIGHT) {
        // pivot jako ostatni element
        pivot = TempArr[right];
    } else if (pivotType == RANDOM) {
        // pivot jako losowy element
        int index = rand() % (right - left + 1) + left;
        pivot = TempArr[index];
        std::swap(TempArr[index], TempArr[right]);
    } else if (pivotType == CENTER) {
        // pivot jako środkowy element
        int middle = (left + right) / 2; // Initialize 'middle' here
        pivot = TempArr[middle];
        std::swap(TempArr[middle], TempArr[right]);
    }

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

void QuickSort::displayData() {
    for (int i = 0; i < size; i++) {
        cout << TempArr[i] << " ";
    }
    cout << std::endl;
}