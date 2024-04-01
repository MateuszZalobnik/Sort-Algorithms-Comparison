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
    int* generateRandomArray(int size);
    // generowanie tablicy uporządkowanych liczb rosnąco
    int* generateDescOrderedArray(int size);
    // generowanie tablicy uporządkowanych liczb malejąco
    int* generateAscOrderedArray(int size);
    // generowanie tablicy częsciowa uporządkowanych liczb
    int* generatePartlyOrderedArray(int size);
    // generowanie tablicy losowych liczb zmiennoprzecinkowych
    float* generateRandomFloatArray(int size);
};


#endif //AIZO1_GENERATOR_H
