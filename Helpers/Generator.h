#include <ctime>
#include <cstdlib>

#ifndef AIZO1_GENERATOR_H
#define AIZO1_GENERATOR_H


class Generator {
public:
    Generator() {
        // inicjalizacja generatora liczb losowych
        srand(time(NULL));
    };

    // generowanie tablicy losowych liczb
    int* generateRandomArray(int size, int min, int max);
    // generowanie tablicy uporządkowanych liczb rosnąco
    int* generateDescOrderedArray(int size, int min, int max);
    // generowanie tablicy uporządkowanych liczb malejąco
    int* generateAscOrderedArray(int size, int min, int max);
    // generowanie tablicy częsciowa uporządkowanych liczb
    int* generatePartlyOrderedArray(int size, int min, int max);
};


#endif //AIZO1_GENERATOR_H
