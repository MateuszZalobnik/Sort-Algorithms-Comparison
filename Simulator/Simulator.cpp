#include "Simulator.h"
#include "../Helpers/Generator.h"
#include "../Sorters/QuickSort2.h"


void Simulator::simulate() {
//    int tab [7] = {7, 6, 5, 4, 3, 2, 1};
//    QuickSort quickSort(tab, 7, QuickSort::RIGHT);

//    return;

    double time;
    for(int i = 0; i < tableSize; i++) {

        for (int j = 0; j < iterations; j++) {
            int *arr = generator.generateRandomArray(sizes[i], min, max);
//            int *arr = generator.generateAscOrderedArray(sizes[i], min, max);
//            int *arr = generator.generateDescOrderedArray(sizes[i], min, max);
            InsertSort insertSort(arr, sizes[i]);
            time = insertSort.sort();
            this->avgTimeInsertSort[i] = (time + this->avgTimeInsertSort[i]) / (j + 1);


            HeapSort heapSort(arr, sizes[i]);
            time = heapSort.sort();
            this->avgTimeHeapSort[i] = (time + this->avgTimeHeapSort[i]) / (j + 1);

//
//            QuickSort2 quickSort2(arr, sizes[i], QuickSort2::LEFT);
//            time = quickSort2.sort();
//            this->avgTimeQuickSortLeft[i] = (time + this->avgTimeQuickSortLeft[i]) / (j + 1);

//            QuickSort2 quickSort2Right(arr, sizes[i], QuickSort2::RIGHT);
//            time = quickSort2Right.sort();
//            this->avgTimeQuickSortRight[i] = (time + this->avgTimeQuickSortRight[i]) / (j + 1);
//
//            QuickSort2 quickSort2Center(arr, sizes[i], QuickSort2::CENTER);
//            time = quickSort2Center.sort();
//            this->avgTimeQuickSortCenter[i] = (time + this->avgTimeQuickSortCenter[i]) / (j + 1);
//
//            QuickSort2 quickSort2Random(arr, sizes[i], QuickSort2::RANDOM);
//            time = quickSort2Random.sort();
//            this->avgTimeQuickSortRandom[i] = (time + this->avgTimeQuickSortRandom[i]) / (j + 1);


            QuickSort quickSortLeft(arr, sizes[i], QuickSort::LEFT);
            time = quickSortLeft.sort();
            this->avgTimeQuickSortLeft[i] = (time + this->avgTimeQuickSortLeft[i]) / (j + 1);

            QuickSort quickSortRight(arr, sizes[i], QuickSort::RIGHT);
            time = quickSortRight.sort();
            this->avgTimeQuickSortRight[i] = (time + this->avgTimeQuickSortRight[i]) / (j + 1);
//
//            QuickSort quickSortCenter(arr, sizes[i], QuickSort::CENTER);
//            time = quickSortCenter.sort();
//            this->avgTimeQuickSortCenter[i] = (time + this->avgTimeQuickSortCenter[i]) / (j + 1);
//
//            QuickSort quickSortRandom(arr, sizes[i], QuickSort::RANDOM);
//            time = quickSortRandom.sort();
//            this->avgTimeQuickSortRandom[i] = (time + this->avgTimeQuickSortRandom[i]) / (j + 1);
//
            ShellSort shellSortHibbard(arr, sizes[i], ShellSort::HIBBARD);
            time = shellSortHibbard.sort();
            this->avgTimeShellSortHibbard[i] = (time + this->avgTimeShellSortHibbard[i]) / (j + 1);


            ShellSort shellSortShell(arr, sizes[i], ShellSort::SHELL);
            time = shellSortShell.sort();
            this->avgTimeShellSortShell[i] = (time + this->avgTimeShellSortShell[i]) / (j + 1);
        }
    }
}



void Simulator::displayTable(){
    cout << setw(9) << "n |";
    cout << setw(16) << "INSERT |";
    cout << setw(16) << "HEAP |";
    cout << setw(16) << "QUICK/LEFT |";
    cout << setw(16) << "QUICK/RIGHT |";
    cout << setw(16) << "QUICK/CENTER |";
    cout << setw(16) << "QUICK/RANDOM |";
    cout << setw(16) << "SHELL/HIBBARD |";
    cout << setw(16) << "SHELL/SHELL |";

    cout << endl;
    cout << "--------|";
    for (int i = 0; i <= 7; ++i) {
        cout << "---------------|";
    }
    cout << endl;

    for (int i = 0; i < tableSize; i++) {
        cout << setw(7) << sizes[i] << " |";
        cout << setw(14) << avgTimeInsertSort[i] << " |";
        cout << setw(14) << avgTimeHeapSort[i] << " |";
        cout << setw(14) << avgTimeQuickSortLeft[i] << " |";
        cout << setw(14) << avgTimeQuickSortRight[i] << " |";
        cout << setw(14) << avgTimeQuickSortCenter[i] << " |";
        cout << setw(14) << avgTimeQuickSortRandom[i] << " |";
        cout << setw(14) << avgTimeShellSortHibbard[i] << " |";
        cout << setw(14) << avgTimeShellSortShell[i] << " |";
        cout << endl;
    }
}

void Simulator::resetTable() {
    for (int i = 0; i < tableSize; i++) {
        this->avgTimeShellSortShell[i] = 0;
        this->avgTimeShellSortHibbard[i] = 0;
        this->avgTimeQuickSortLeft[i] = 0;
        this->avgTimeQuickSortRight[i] = 0;
        this->avgTimeQuickSortCenter[i] = 0;
        this->avgTimeQuickSortRandom[i] = 0;
        this->avgTimeHeapSort[i] = 0;
        this->avgTimeInsertSort[i] = 0;
    }
}
