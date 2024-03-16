#include "QuickSort2.h"

int QuickSort2::partition(int left, int right) {
    int pivot;
    if(pivotType == LEFT){
        pivot = TempArr[left];
    } else if(pivotType == RIGHT){
        pivot = TempArr[right];
    } else if(pivotType == RANDOM){
        int random = left + rand() % (right - left);
        pivot = TempArr[random];
    } else if(pivotType == CENTER){
        int center = (left + right) / 2;
        pivot = TempArr[center];
    }

    int i = left;
    int j = right;

    while (true) {
        while (TempArr[i] < pivot) {
            i++;
        }
        while (TempArr[j] > pivot) {
            j--;
        }
        if (i < j) {
            int temp = TempArr[i];
            TempArr[i] = TempArr[j];
            TempArr[j] = temp;
            i++;
            j--;
        } else {
            return j;
        }
    }
}

void QuickSort2::quickSort(int left, int right) {
    if(left < right){
        int pivot = partition(left, right);
        quickSort(left, pivot);
        quickSort(pivot + 1, right);
    }
}

double QuickSort2::sort() {
    Counter counter;
    counter.StartCounter();

    quickSort(0, size - 1);

    double time = counter.GetCounter();
    Checker::IsSorted(TempArr, size);
    return time;
}

void QuickSort2::displayData() {
    for (int i = 0; i < size; i++) {
        cout << TempArr[i] << " ";
    }
    cout << std::endl;
}