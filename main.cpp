#include <iostream>
//#include "Helpers/Generator.h"
//#include "Simulator.h"

using namespace std;
int menu();
void simulate();



int main() {
//    int choice = menu();

    int choice = 1;
//    if(choice == 1){
//        simulate();
//    } else if(choice == 2){
//        cout << "Testowanie\n";
//    }

    return 0;
}

void simulate(){
    // deklarujemy testowane wielkości tablic
//    int sizes [7] = {10000, 20000, 50000, 100000, 200000, 400000, 500000};
    int sizes [7] = {100, 200, 500, 1000, 2000, 4000, 5000};
    double avgTimeQuickSortArr [7];


//    Generator generator;
//    Simulator simulator;


//            for(int i = 0; i < 7; i++){
//        int* arr = generator.generateRandomArray(sizes[i], min, max);
//        ShellSort quickSort(arr, sizes[i], ShellSort::SHELL);
//        avgTimeQuickSortArr[i] = quickSort.getAverageTime(iterations);
//    }
//
//    for(int i = 0; i < 7; i++){
//        cout << "Czas dla " << sizes[i] << " elementow: " << avgTimeQuickSortArr[i] << "ms\n";
//    }

//        for(int i = 0; i < 7; i++){
//        int* arr = generator.generateRandomArray(sizes[i], min, max);
//        QuickSort quickSort(arr, sizes[i], QuickSort::RANDOM);
//        avgTimeQuickSortArr[i] = quickSort.getAverageTime(iterations);
//    }
//
//    for(int i = 0; i < 7; i++){
//        cout << "Czas dla " << sizes[i] << " elementow: " << avgTimeQuickSortArr[i] << "ms\n";
//    }

//    for(int i = 0; i < 7; i++){
//        int* arr = generator.generateRandomArray(sizes[i], min, max);
//        HeapSort heapSort(arr, sizes[i]);
//        avgTimeQuickSortArr[i] = heapSort.getAverageTime(iterations);
//    }
//
//
//    for(int i = 0; i < 7; i++){
//        cout << "Czas dla " << sizes[i] << " elementow: " << avgTimeQuickSortArr[i] << "ms\n";
//    }

//
//    for(int i = 0; i < 7; i++){
//        int* arr = generator.generateRandomArray(sizes[i], min, max);
//        InsertSort insertSort(arr, 10);
//        avgTimeQuickSortArr[i] = insertSort.getAverageTime(iterations);
//    }
//    for(int i = 0; i < 7; i++){
//        cout << "Czas dla " << sizes[i] << " elementow: " << avgTimeQuickSortArr[i] << "ms\n";
//    }
}




int menu ()
{
    char choice;

    do {
        cout << "1. Symulacja 1\n";
        cout << "2. Testowanie 2\n";
        cout << "3. Exit\n";
        cout << "Wybierz: ";

        choice = getchar();

        while (getchar() != '\n');

        switch (choice) {
            case '1':
                return 1;
                break;
            case '2':
                return 2;
                break;
            case '3':
                cout << "Wyjscie...\n";
                break;
            default:
                cout << "Zly wybor\n";
                break;
        }
    } while (choice != '3');
}