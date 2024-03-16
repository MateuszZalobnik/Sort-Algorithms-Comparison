#ifndef AIZO1_TEST_H
#define AIZO1_TEST_H

#include <iostream>
#include <fstream>
#include "../Helpers/Generator.h"
#include <limits>
#include "../Sorters/InsertSort.h"
#include "../Sorters/QuickSort.h"
#include "../Sorters/HeapSort.h"
#include "../Sorters/ShellSort.h"

using namespace std;

class Test {
private:
    Generator generator;
    int length;
    int *arr;
    int *TempArr;
    void generateTable();
    void tableFromFile();
    void displayTable();
    void checkIsSorted();
    void sortingMenu();
    void afterSotingMenu();
    void displayTempTable();
public:
    Test() {
    }

    void menu();
};


#endif //AIZO1_TEST_H
