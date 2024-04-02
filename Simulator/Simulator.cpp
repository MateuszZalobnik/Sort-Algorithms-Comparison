#include "Simulator.h"
#include "../Helpers/Generator.h"


void Simulator::simulate() {
    cout << "Symulacja dla tablic float\n";
    simulateForFloat();

    cout << "Symulacja dla tablic posortowanych rosnaco\n";
    simulateForAsc();
    displayTable();
    resetTable();

    cout << "Symulacja dla tablic posortowanych malejaco\n";
    simulateForDesc();
    displayTable();
    resetTable();

    cout << "Symulacja dla tablic losowych\n";
    simulateForRandom();
    displayTable();
    resetTable();

    cout << "Symulacja dla tablic czesciowo posortowanych\n";
    simulateForPartlyOrdered();
    displayTable();
    resetTable();
}

void Simulator::simulateForAsc() {
    for (int i = 0; i < tableSize; i++) {
            int *arr = generator.generateAscOrderedArray(sizes[i]);

            InsertSort insertSort(arr, sizes[i]);
            double time = insertSort.sort();
            this->avgTimeInsertSort[i] = time;

            HeapSort heapSort(arr, sizes[i]);
            time = heapSort.sort();
            this->avgTimeHeapSort[i] = time;

            QuickSort quickSortLeft(arr, sizes[i], QuickSort::LEFT);
            time = quickSortLeft.sort();
            this->avgTimeQuickSortLeft[i] = time;

            QuickSort quickSortRight(arr, sizes[i], QuickSort::RIGHT);
            time = quickSortRight.sort();
            this->avgTimeQuickSortRight[i] = time;

            QuickSort quickSortCenter(arr, sizes[i], QuickSort::CENTER);
            time = quickSortCenter.sort();
            this->avgTimeQuickSortCenter[i] = time;

            QuickSort quickSortRandom(arr, sizes[i], QuickSort::RANDOM);
            time = quickSortRandom.sort();
            this->avgTimeQuickSortRandom[i] = time;

            ShellSort shellSortSedgewick(arr, sizes[i], ShellSort::SEDGEWICK);
            time = shellSortSedgewick.sort();
            this->avgTimeShellSortSedgewick[i] = time;

            ShellSort shellSortShell(arr, sizes[i], ShellSort::SHELL);
            time = shellSortShell.sort();
            this->avgTimeShellSortShell[i] = time;
        }
}

void Simulator::simulateForDesc() {
    for (int i = 0; i < tableSize; i++) {
            int *arr = generator.generateDescOrderedArray(sizes[i]);

            InsertSort insertSort(arr, sizes[i]);
            double time = insertSort.sort();
            this->avgTimeInsertSort[i] = time;

            HeapSort heapSort(arr, sizes[i]);
            time = heapSort.sort();
            this->avgTimeHeapSort[i] = time;

            QuickSort quickSortLeft(arr, sizes[i], QuickSort::LEFT);
            time = quickSortLeft.sort();
            this->avgTimeQuickSortLeft[i] = time;

            QuickSort quickSortRight(arr, sizes[i], QuickSort::RIGHT);
            time = quickSortRight.sort();
            this->avgTimeQuickSortRight[i] = time;

            QuickSort quickSortCenter(arr, sizes[i], QuickSort::CENTER);
            time = quickSortCenter.sort();
            this->avgTimeQuickSortCenter[i] = time;

            QuickSort quickSortRandom(arr, sizes[i], QuickSort::RANDOM);
            time = quickSortRandom.sort();
            this->avgTimeQuickSortRandom[i] = time;

            ShellSort shellSortSedgewick(arr, sizes[i], ShellSort::SEDGEWICK);
            time = shellSortSedgewick.sort();
            this->avgTimeShellSortSedgewick[i] = time;

            ShellSort shellSortShell(arr, sizes[i], ShellSort::SHELL);
            time = shellSortShell.sort();
            this->avgTimeShellSortShell[i] = time;
        }
}

void Simulator::simulateForRandom() {
    for (int i = 0; i < tableSize; i++) {
        for (int j = 0; j < iterations; j++) {
            int *arr = generator.generateRandomArray(sizes[i]);

            InsertSort insertSort(arr, sizes[i]);
            double time = insertSort.sort();
            this->avgTimeInsertSort[i] += time;

            HeapSort heapSort(arr, sizes[i]);
            time = heapSort.sort();
            this->avgTimeHeapSort[i] += time;

            QuickSort quickSortLeft(arr, sizes[i], QuickSort::LEFT);
            time = quickSortLeft.sort();
            this->avgTimeQuickSortLeft[i] += time;

            QuickSort quickSortRight(arr, sizes[i], QuickSort::RIGHT);
            time = quickSortRight.sort();
            this->avgTimeQuickSortRight[i] += time;

            QuickSort quickSortCenter(arr, sizes[i], QuickSort::CENTER);
            time = quickSortCenter.sort();
            this->avgTimeQuickSortCenter[i] += time;

            QuickSort quickSortRandom(arr, sizes[i], QuickSort::RANDOM);
            time = quickSortRandom.sort();
            this->avgTimeQuickSortRandom[i] += time;

            ShellSort shellSortSedgewick(arr, sizes[i], ShellSort::SEDGEWICK);
            time = shellSortSedgewick.sort();
            this->avgTimeShellSortSedgewick[i] += time;

            ShellSort shellSortShell(arr, sizes[i], ShellSort::SHELL);
            time = shellSortShell.sort();
            this->avgTimeShellSortShell[i] += time;
        }

        this->avgTimeInsertSort[i] = this->avgTimeInsertSort[i] / iterations;
        this->avgTimeHeapSort[i] = this->avgTimeHeapSort[i] / iterations;
        this->avgTimeQuickSortLeft[i] = this->avgTimeQuickSortLeft[i] / iterations;
        this->avgTimeQuickSortRight[i] = this->avgTimeQuickSortRight[i] / iterations;
        this->avgTimeQuickSortCenter[i] = this->avgTimeQuickSortCenter[i] / iterations;
        this->avgTimeQuickSortRandom[i] = this->avgTimeQuickSortRandom[i] / iterations;
        this->avgTimeShellSortSedgewick[i] = this->avgTimeShellSortSedgewick[i] / iterations;
        this->avgTimeShellSortShell[i] = this->avgTimeShellSortShell[i] / iterations;
    }
}

void Simulator::simulateForPartlyOrdered() {
    for (int i = 0; i < tableSize; i++) {
        for (int j = 0; j < iterations; j++) {
            int *arr = generator.generatePartlyOrderedArray(sizes[i]);

            InsertSort insertSort(arr, sizes[i]);
            double time = insertSort.sort();
            this->avgTimeInsertSort[i] += time;

            HeapSort heapSort(arr, sizes[i]);
            time = heapSort.sort();
            this->avgTimeHeapSort[i] += time;

            QuickSort quickSortLeft(arr, sizes[i], QuickSort::LEFT);
            time = quickSortLeft.sort();
            this->avgTimeQuickSortLeft[i] += time;

            QuickSort quickSortRight(arr, sizes[i], QuickSort::RIGHT);
            time = quickSortRight.sort();
            this->avgTimeQuickSortRight[i] += time;

            QuickSort quickSortCenter(arr, sizes[i], QuickSort::CENTER);
            time = quickSortCenter.sort();
            this->avgTimeQuickSortCenter[i] += time;

            QuickSort quickSortRandom(arr, sizes[i], QuickSort::RANDOM);
            time = quickSortRandom.sort();
            this->avgTimeQuickSortRandom[i] += time;

            ShellSort shellSortSedgewick(arr, sizes[i], ShellSort::SEDGEWICK);
            time = shellSortSedgewick.sort();
            this->avgTimeShellSortSedgewick[i] += time;

            ShellSort shellSortShell(arr, sizes[i], ShellSort::SHELL);
            time = shellSortShell.sort();
            this->avgTimeShellSortShell[i] += time;
        }
        this->avgTimeInsertSort[i] = this->avgTimeInsertSort[i] / iterations;
        this->avgTimeHeapSort[i] = this->avgTimeHeapSort[i] / iterations;
        this->avgTimeQuickSortLeft[i] = this->avgTimeQuickSortLeft[i] / iterations;
        this->avgTimeQuickSortRight[i] = this->avgTimeQuickSortRight[i] / iterations;
        this->avgTimeQuickSortCenter[i] = this->avgTimeQuickSortCenter[i] / iterations;
        this->avgTimeQuickSortRandom[i] = this->avgTimeQuickSortRandom[i] / iterations;
        this->avgTimeShellSortSedgewick[i] = this->avgTimeShellSortSedgewick[i] / iterations;
        this->avgTimeShellSortShell[i] = this->avgTimeShellSortShell[i] / iterations;
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
            float *arrFloat = generator.generateRandomFloatArray(sizes[i]);
            int *arrInt = generator.generateRandomArray(sizes[i]);

            QuickSort quickSortRightInt(arrInt, sizes[i], QuickSort::RIGHT);
            double time = quickSortRightInt.sort();
            avgTimeQuickSort[i] += time;

            QuickSort quickSortRight(arrFloat, sizes[i], QuickSort::RIGHT);
            time = quickSortRight.sortFloat();
            avgTimeQuickSortFloat[i] += time;
        }
        avgTimeQuickSort[i] = avgTimeQuickSort[i] / iterations;
        avgTimeQuickSortFloat[i] = avgTimeQuickSortFloat[i] / iterations;
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
    cout << setw(16) << "SHELL/SEDGEWICK |";
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
        cout << setw(14) << avgTimeShellSortSedgewick[i] << " |";
        cout << setw(14) << avgTimeShellSortShell[i] << " |";
        cout << endl;
    }
}

void Simulator::resetTable() {
    for (int i = 0; i < tableSize; i++) {
        this->avgTimeShellSortShell[i] = 0;
        this->avgTimeShellSortSedgewick[i] = 0;
        this->avgTimeQuickSortLeft[i] = 0;
        this->avgTimeQuickSortRight[i] = 0;
        this->avgTimeQuickSortCenter[i] = 0;
        this->avgTimeQuickSortRandom[i] = 0;
        this->avgTimeHeapSort[i] = 0;
        this->avgTimeInsertSort[i] = 0;
    }
}
