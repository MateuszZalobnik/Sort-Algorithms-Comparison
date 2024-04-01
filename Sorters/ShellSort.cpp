#include "ShellSort.h"

double ShellSort::sort() {
    Counter counter;
    counter.StartCounter();


    if(gapType == SHELL){
        // n/2^k
        // O(n^2)
        int gap = size / 2;
        while(gap > 0){
            // sortujemy przez wstawianie z odstępem
            insertSortWithGap(gap);
            gap /= 2;
        }
    } else if (gapType == SEDGEWICK) {
        // 4^k + 3*2^(k-1) + 1
        // O(n^(4/3))
        int distances [size];
        int k = 0;
        // tworzymy tablicę odległości
        int gap = pow(4, k) + 3 * pow(2, k - 1) + 1;
        while(gap < size){
            if(k == 0){
                distances[k] = 1;
            }else{
                distances[k] = gap;
                gap = pow(4, k) + 3 * pow(2, k - 1) + 1;
            }
            k++;
        }

        for(int i = k - 1; i >= 0; i--){
            // sortujemy przez wstawianie z odstępem
            insertSortWithGap(distances[i]);
        }
    }

    double time = counter.GetCounter();
    Checker::IsSorted(TempArr, size);
    delete(TempArr);
    return time;
}

void ShellSort::insertSortWithGap(int gap) {
    for (int i = gap; i < size; i++) {
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