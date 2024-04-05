#include "Generator.h"

int *Generator::generateRandomArray(int size) {
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % INT_MAX + INT_MIN;
    }
    return arr;
}

int *Generator::generateDescOrderedArray(int size) {
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = INT_MAX - i;
    }
    return arr;
}

int *Generator::generateAscOrderedArray(int size) {
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = INT_MIN + i;
    }
    return arr;
}

int *Generator::generate66PercentOrderedArray(int size) {
    int *arr = generateAscOrderedArray(size);
    int index = size - (size/3);
    int minVal = arr[index];
    // randomize 1/3 of the array
    for (int i = index; i < size; i++) {
        arr[i] = rand() % INT_MAX + minVal;
    }
    return arr;
}

int *Generator::generate33PercentOrderedArray(int size) {
    int *arr = generateAscOrderedArray(size);
    int index = (size/3);
    int minVal = arr[index];
    // randomize 2/3 of the array
    for (int i = index; i < size; i++) {
        arr[i] = rand() % INT_MAX + minVal;
    }
    return arr;
}

float *Generator::generateRandomFloatArray(int size) {
    float *arr = new float[size];
    float test [size];
    for (int i = 0; i < size; i++) {
        arr[i] = (float)rand() / (float)RAND_MAX;
        test[i] = arr[i];
    }
    return arr;
}
