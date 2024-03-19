#include "Simulator.h"
#include "../Helpers/Generator.h"


void Simulator::simulate() {
    cout << "Symulacja dla tablic float\n";
    simulateForFloat();

    cout << "Symulacja dla tablic losowych\n";
    simulateForRandom();
    displayTable();

    cout << "Symulacja dla tablic posortowanych rosnaco\n";
    simulateForAsc();
    displayTable();

    cout << "Symulacja dla tablic posortowanych malejaco\n";
    simulateForDesc();
    displayTable();

    cout << "Symulacja dla tablic czesciowo posortowanych\n";
    simulateForPartlyOrdered();
    displayTable();
}

void Simulator::simulateForAsc() {
    for (int i = 0; i < tableSize; i++) {
        for (int j = 0; j < iterations; j++) {
            int *arr = generator.generateAscOrderedArray(sizes[i], min, max);

            InsertSort insertSort(arr, sizes[i]);
            double time = insertSort.sort();
            this->avgTimeInsertSort[i] = (time + this->avgTimeInsertSort[i]) / (j + 1);

            HeapSort heapSort(arr, sizes[i]);
            time = heapSort.sort();
            this->avgTimeHeapSort[i] = (time + this->avgTimeHeapSort[i]) / (j + 1);

            QuickSort quickSortLeft(arr, sizes[i], QuickSort::LEFT);
            time = quickSortLeft.sort();
            this->avgTimeQuickSortLeft[i] = (time + this->avgTimeQuickSortLeft[i]) / (j + 1);

            QuickSort quickSortRight(arr, sizes[i], QuickSort::RIGHT);
            time = quickSortRight.sort();
            this->avgTimeQuickSortRight[i] = (time + this->avgTimeQuickSortRight[i]) / (j + 1);

            QuickSort quickSortCenter(arr, sizes[i], QuickSort::CENTER);
            time = quickSortCenter.sort();
            this->avgTimeQuickSortCenter[i] = (time + this->avgTimeQuickSortCenter[i]) / (j + 1);

            QuickSort quickSortRandom(arr, sizes[i], QuickSort::RANDOM);
            time = quickSortRandom.sort();
            this->avgTimeQuickSortRandom[i] = (time + this->avgTimeQuickSortRandom[i]) / (j + 1);

            ShellSort shellSortHibbard(arr, sizes[i], ShellSort::SEDGEWICK);
            time = shellSortHibbard.sort();
            this->avgTimeShellSortHibbard[i] = (time + this->avgTimeShellSortHibbard[i]) / (j + 1);

            ShellSort shellSortShell(arr, sizes[i], ShellSort::SHELL);
            time = shellSortShell.sort();
            this->avgTimeShellSortShell[i] = (time + this->avgTimeShellSortShell[i]) / (j + 1);
        }
    }
}

void Simulator::simulateForDesc() {
    for (int i = 0; i < tableSize; i++) {
        for (int j = 0; j < iterations; j++) {
            int *arr = generator.generateDescOrderedArray(sizes[i], min, max);

            InsertSort insertSort(arr, sizes[i]);
            double time = insertSort.sort();
            this->avgTimeInsertSort[i] = (time + this->avgTimeInsertSort[i]) / (j + 1);

            HeapSort heapSort(arr, sizes[i]);
            time = heapSort.sort();
            this->avgTimeHeapSort[i] = (time + this->avgTimeHeapSort[i]) / (j + 1);

            QuickSort quickSortLeft(arr, sizes[i], QuickSort::LEFT);
            time = quickSortLeft.sort();
            this->avgTimeQuickSortLeft[i] = (time + this->avgTimeQuickSortLeft[i]) / (j + 1);

            QuickSort quickSortRight(arr, sizes[i], QuickSort::RIGHT);
            time = quickSortRight.sort();
            this->avgTimeQuickSortRight[i] = (time + this->avgTimeQuickSortRight[i]) / (j + 1);

            QuickSort quickSortCenter(arr, sizes[i], QuickSort::CENTER);
            time = quickSortCenter.sort();
            this->avgTimeQuickSortCenter[i] = (time + this->avgTimeQuickSortCenter[i]) / (j + 1);

            QuickSort quickSortRandom(arr, sizes[i], QuickSort::RANDOM);
            time = quickSortRandom.sort();
            this->avgTimeQuickSortRandom[i] = (time + this->avgTimeQuickSortRandom[i]) / (j + 1);

            ShellSort shellSortHibbard(arr, sizes[i], ShellSort::SEDGEWICK);
            time = shellSortHibbard.sort();
            this->avgTimeShellSortHibbard[i] = (time + this->avgTimeShellSortHibbard[i]) / (j + 1);

            ShellSort shellSortShell(arr, sizes[i], ShellSort::SHELL);
            time = shellSortShell.sort();
            this->avgTimeShellSortShell[i] = (time + this->avgTimeShellSortShell[i]) / (j + 1);
        }
    }
}

void Simulator::simulateForRandom() {
    for (int i = 0; i < tableSize; i++) {
        for (int j = 0; j < iterations; j++) {
            int *arr = generator.generateRandomArray(sizes[i], min, max);

            InsertSort insertSort(arr, sizes[i]);
            double time = insertSort.sort();
            this->avgTimeInsertSort[i] = (time + this->avgTimeInsertSort[i]) / (j + 1);

            HeapSort heapSort(arr, sizes[i]);
            time = heapSort.sort();
            this->avgTimeHeapSort[i] = (time + this->avgTimeHeapSort[i]) / (j + 1);

            QuickSort quickSortLeft(arr, sizes[i], QuickSort::LEFT);
            time = quickSortLeft.sort();
            this->avgTimeQuickSortLeft[i] = (time + this->avgTimeQuickSortLeft[i]) / (j + 1);

            QuickSort quickSortRight(arr, sizes[i], QuickSort::RIGHT);
            time = quickSortRight.sort();
            this->avgTimeQuickSortRight[i] = (time + this->avgTimeQuickSortRight[i]) / (j + 1);

            QuickSort quickSortCenter(arr, sizes[i], QuickSort::CENTER);
            time = quickSortCenter.sort();
            this->avgTimeQuickSortCenter[i] = (time + this->avgTimeQuickSortCenter[i]) / (j + 1);

            QuickSort quickSortRandom(arr, sizes[i], QuickSort::RANDOM);
            time = quickSortRandom.sort();
            this->avgTimeQuickSortRandom[i] = (time + this->avgTimeQuickSortRandom[i]) / (j + 1);

            ShellSort shellSortHibbard(arr, sizes[i], ShellSort::SEDGEWICK);
            time = shellSortHibbard.sort();
            this->avgTimeShellSortHibbard[i] = (time + this->avgTimeShellSortHibbard[i]) / (j + 1);

            ShellSort shellSortShell(arr, sizes[i], ShellSort::SHELL);
            time = shellSortShell.sort();
            this->avgTimeShellSortShell[i] = (time + this->avgTimeShellSortShell[i]) / (j + 1);
        }
    }
}

void Simulator::simulateForPartlyOrdered() {
    for (int i = 0; i < tableSize; i++) {
        for (int j = 0; j < iterations; j++) {
            int *arr = generator.generatePartlyOrderedArray(sizes[i], min, max);

            InsertSort insertSort(arr, sizes[i]);
            double time = insertSort.sort();
            this->avgTimeInsertSort[i] = (time + this->avgTimeInsertSort[i]) / (j + 1);

            HeapSort heapSort(arr, sizes[i]);
            time = heapSort.sort();
            this->avgTimeHeapSort[i] = (time + this->avgTimeHeapSort[i]) / (j + 1);

            QuickSort quickSortLeft(arr, sizes[i], QuickSort::LEFT);
            time = quickSortLeft.sort();
            this->avgTimeQuickSortLeft[i] = (time + this->avgTimeQuickSortLeft[i]) / (j + 1);

            QuickSort quickSortRight(arr, sizes[i], QuickSort::RIGHT);
            time = quickSortRight.sort();
            this->avgTimeQuickSortRight[i] = (time + this->avgTimeQuickSortRight[i]) / (j + 1);

            QuickSort quickSortCenter(arr, sizes[i], QuickSort::CENTER);
            time = quickSortCenter.sort();
            this->avgTimeQuickSortCenter[i] = (time + this->avgTimeQuickSortCenter[i]) / (j + 1);

            QuickSort quickSortRandom(arr, sizes[i], QuickSort::RANDOM);
            time = quickSortRandom.sort();
            this->avgTimeQuickSortRandom[i] = (time + this->avgTimeQuickSortRandom[i]) / (j + 1);

            ShellSort shellSortHibbard(arr, sizes[i], ShellSort::SEDGEWICK);
            time = shellSortHibbard.sort();
            this->avgTimeShellSortHibbard[i] = (time + this->avgTimeShellSortHibbard[i]) / (j + 1);

            ShellSort shellSortShell(arr, sizes[i], ShellSort::SHELL);
            time = shellSortShell.sort();
            this->avgTimeShellSortShell[i] = (time + this->avgTimeShellSortShell[i]) / (j + 1);
        }
    }
}

void Simulator::simulateForFloat() {
    double avgTimeQuickSortFloat[tableSize];
    double avgTimeQuickSort[tableSize];
    for (int i = 0; i < tableSize; i++) {
        avgTimeQuickSortFloat[i] = 0;
        avgTimeQuickSort[i] = 0;
    }

    for (int i = 0; i < tableSize; i++) {
        for (int j = 0; j < iterations; j++) {
            float *arrFloat = generator.generateRandomFloatArray(sizes[i], min, max);
            int *arrInt = generator.generateRandomArray(sizes[i], min, max);

            QuickSort quickSortRightInt(arrInt, sizes[i], QuickSort::RIGHT);
            double time = quickSortRightInt.sort();
            avgTimeQuickSort[i] = (time + avgTimeQuickSort[i]) / (j + 1);

            QuickSort quickSortRight(arrFloat, sizes[i], QuickSort::RIGHT);
            time = quickSortRight.sortFloat();
            avgTimeQuickSortFloat[i] = (time + avgTimeQuickSortFloat[i]) / (j + 1);
        }
    }

    cout << "\n";
    cout << setw(9) << "n |";
    cout << setw(16) << "FLOAT |";
    cout << setw(16) << "INT |";
    cout << endl;
    cout << "--------|";
    for (int i = 0; i <= 1; ++i) {
        cout << "---------------|";
    }
    cout << endl;

    for (int i = 0; i < tableSize; i++) {
        cout << setw(7) << sizes[i] << " |";
        cout << fixed << setprecision(3);
        cout << setw(14) << avgTimeQuickSortFloat[i] << " |";
        cout << setw(14) << avgTimeQuickSort[i] << " |";
        cout << endl;
    }

}


void Simulator::displayTable() {
    cout << "\n";
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
        cout << fixed << setprecision(3);
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
