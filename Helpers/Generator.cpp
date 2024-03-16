#include "Generator.h"

int *Generator::generateRandomArray(int size, int min, int max) {
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % max + min;
    }
    return arr;
}

int *Generator::generateDescOrderedArray(int size, int min, int max) {
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        if(i >= max){
            arr[i] = max;
        } else {
            arr[i] = i;
        }
    }
    return arr;
}

int *Generator::generateAscOrderedArray(int size, int min, int max) {
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        if (size - i >= max) {
            arr[i] = max;
        } else {
            arr[i] = size - i;
        }
    }
    return arr;
}

int *Generator::generatePartlyOrderedArray(int size, int min, int max) {
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        if (i >= max) {
            arr[i] = max;
        } else {
            arr[i] = i;
        }
    }
    for (int i = 0; i < size / 3; i++) {
        arr[i] = rand() % max + min;
    }
    return arr;
}
