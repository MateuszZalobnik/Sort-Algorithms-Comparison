#include "ShellSort.h"

void ShellSort::sort() {
    if(gapType == SHELL){
        // n/2^k
        // O(n^2)
        int gap = size / 2;
        while(gap > 0){
            insertSortWithGap(gap);
            gap /= 2;
        }
    } else if(gapType == HIBBARD){
        // 2^k - 1
        // O(n^(3/2))
        int k = 1;
        int gap = 1;
        while(gap < size){
            gap = std::pow(2, k) - 1;
            k++;
            insertSortWithGap(gap);
        }
    }

}

void ShellSort::insertSortWithGap(int gap) {
    for (int i = gap; i < size; i += 1) {
        int temp = TempArr[i];
        int j;
        for (j = i; j >= gap && TempArr[j - gap] > temp; j -= gap) {
            TempArr[j] = TempArr[j - gap];
        }
        TempArr[j] = temp;
    }
}

double ShellSort::getAverageTime(int iterations) {
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

void ShellSort::displayData() {
    for (int i = 0; i < size; i++) {
        cout << TempArr[i] << " ";
    }
    cout << std::endl;
}