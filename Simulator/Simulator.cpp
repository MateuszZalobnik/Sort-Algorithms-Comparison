#include "Simulator.h"


void Simulator::simulate() {

    for(int i = 0; i < 7; i++) {

        int *arr = generator.generateRandomArray(sizes[i], min, max);

        ShellSort shellSortShell(arr, sizes[i], ShellSort::SHELL);
        this->avgTimeShellSortShell[i] = shellSortShell.getAverageTime(iterations);

        ShellSort shellSortHibbard(arr, sizes[i], ShellSort::HIBBARD);
        this->avgTimeShellSortHibbard[i] = shellSortHibbard.getAverageTime(iterations);

        QuickSort quickSortLeft(arr, sizes[i], QuickSort::LEFT);
        avgTimeQuickSortLeft[i] = quickSortLeft.getAverageTime(iterations);

        QuickSort quickSortRight(arr, sizes[i], QuickSort::RIGHT);
        avgTimeQuickSortRight[i] = quickSortRight.getAverageTime(iterations);

        QuickSort quickSortCenter(arr, sizes[i], QuickSort::CENTER);
        avgTimeQuickSortCenter[i] = quickSortCenter.getAverageTime(iterations);

        QuickSort quickSort(arr, sizes[i], QuickSort::RANDOM);
        avgTimeQuickSortRandom[i] = quickSort.getAverageTime(iterations);

        HeapSort heapSort(arr, sizes[i]);
        avgTimeHeapSort[i] = heapSort.getAverageTime(iterations);

        InsertSort insertSort(arr, 10);
        avgTimeInsertSort[i] = insertSort.getAverageTime(iterations);
    }
}

void Simulator::displayTable(){
    cout << setw(7) << "n |";
    cout << setw(16) << "INSERT |";
    cout << setw(16) << "HEAP |";
    cout << setw(16) << "QUICK/LEFT |";
    cout << setw(16) << "QUICK/RIGHT |";
    cout << setw(16) << "QUICK/CENTER |";
    cout << setw(16) << "QUICK/RANDOM |";
    cout << setw(16) << "SHELL/HIBBARD |";
    cout << setw(16) << "SHELL/SHELL |";

    cout << endl;
    cout << "------|";
    for (int i = 0; i <= 7; ++i) {
        cout << "---------------|";
    }
    cout << endl;
}
