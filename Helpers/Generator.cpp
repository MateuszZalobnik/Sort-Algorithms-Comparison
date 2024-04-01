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
        if(i >= INT_MAX){
            arr[i] = INT_MAX;
        } else {
            arr[i] = i;
        }
    }
    return arr;
}

int *Generator::generateAscOrderedArray(int size) {
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        if (size - i >= INT_MAX) {
            arr[i] = INT_MAX;
        } else {
            arr[i] = size - i;
        }
    }
    return arr;
}

int *Generator::generatePartlyOrderedArray(int size) {
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        if (i >= INT_MAX) {
            arr[i] = INT_MAX;
        } else {
            arr[i] = i;
        }
    }
    for (int i = 0; i < size / 3; i++) {
        arr[i] = rand() % INT_MAX + INT_MIN;
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
