#include "ShellSort.h"

double ShellSort::sort() {
    Counter counter;
    counter.StartCounter();


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

    double time = counter.GetCounter();
    Checker::IsSorted(TempArr, size);
    return time;
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

void ShellSort::displayData() {
    for (int i = 0; i < size; i++) {
        cout << TempArr[i] << " ";
    }
    cout << std::endl;
}