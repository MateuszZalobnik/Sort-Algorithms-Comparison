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
    int min = INT_MIN;
    int max = INT_MAX;
    int iterations = 10;
    int tableSize = 4;
    int sizes [4] = {1000, 2500, 4000, 5500};
//    int sizes [7] = {10000, 25000, 40000, 55000, 70000, 85000, 100000};
    double avgTimeQuickSortLeft [7];
    double avgTimeQuickSortRight [7];
    double avgTimeQuickSortCenter [7];
    double avgTimeQuickSortRandom [7];
    double avgTimeHeapSort [7];
    double avgTimeInsertSort [7];
    double avgTimeShellSortShell [7];
    double avgTimeShellSortSedgewick [7];
    void resetTable();
    void simulateForAsc();
    void simulateForDesc();
    void simulateForPartlyOrdered();
    void simulateForRandom();
    void simulateForFloat();
public:
    Simulator(){
        resetTable();
    };

    void simulate();
    void displayTable();
};


#endif //AIZO1_SIMULATOR_H
