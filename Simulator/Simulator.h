#ifndef AIZO1_SIMULATOR_H
#define AIZO1_SIMULATOR_H

#include <iomanip>
#include "../Sorters/InsertSort.h"
#include "../Sorters/HeapSort.h"
#include "../Sorters/QuickSort.h"
#include "../Sorters/ShellSort.h"
#include "../Helpers/Generator.h"

class Simulator {
private:
    Generator generator;
    int min = 0;
    int max = 100;
    int iterations = 1;
    int tableSize = 3;
    int sizes [3] = {2000, 20000,40000};
//    int sizes [tableSize] = {10000, 20000, 50000, 100000, 200000, 400000, 500000};
//    int sizes [tableSize] = {100, 200, 500, 1000, 2000, 4000, 5000};
    double avgTimeQuickSortLeft [7];
    double avgTimeQuickSortRight [7];
    double avgTimeQuickSortCenter [7];
    double avgTimeQuickSortRandom [7];
    double avgTimeHeapSort [7];
    double avgTimeInsertSort [7];
    double avgTimeShellSortShell [7];
    double avgTimeShellSortHibbard [7];
    void resetTable();
public:
    Simulator(){
        resetTable();
    };

    void simulate();
    void displayTable();
};


#endif //AIZO1_SIMULATOR_H
