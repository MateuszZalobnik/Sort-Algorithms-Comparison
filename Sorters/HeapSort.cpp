
#include "HeapSort.h"

void HeapSort::sort() {
    int j, k, x;
    for (int i = 1; i <= size; i++) {
        j = i;
        k = j / 2;
        x = TempArr[i];
        int test = TempArr[j];
        int test2 = TempArr[k];
        while ((k > 0) && (TempArr[k] < x)) {
            TempArr[j] = TempArr[k];
            j = k;
            k = j / 2;
        }
        TempArr[j] = x;
    }
    displayData();

    int m;
    for(int i = size; i > 0; i--)
    {
        swap(TempArr[1], TempArr[i]);
        j = 1; k = 2;
        while(k < i)
        {
            if((k + 1 < i) && (TempArr[k + 1] > TempArr[k]))
                m = k + 1;
            else
                m = k;
            if(TempArr[m] <= TempArr[j]) break;
            swap(TempArr[j], TempArr[m]);
            j = m; k = j + j;
        }
    }
    displayData();
//    x = (size + 1) / 2; k = 2;
//    for(int i = 1; i <= size; i++)
//    {
//        for(j = 1; j <= x - 1; j++) cout << " ";
//        cout << TempArr[i];
//        for(j = 1; j <= x; j++) cout << " ";
//        if(i + 1 == k)
//        {
//            k += k; x /= 2; cout << endl;
//        }
//    }
}


double HeapSort::getAverageTime(int iterations) {
    Counter counter;
    double sum = 0;
    Checker checker;

    for (int i = 0; i < iterations; i++) {
        TempArr = new int[size];
        for (int l = 0; l < size; l++) {
            TempArr[l] = arr[l];
        }
        displayData();

        counter.StartCounter();
        this->sort();
        sum += counter.GetCounter();
        if (!checker.IsSorted(TempArr, size)) {
            return -1;
        }
    }
    displayData();
    return sum / iterations;
}

void HeapSort::displayData() {
    for (int i = 0; i < size; i++) {
        cout << TempArr[i] << " ";
    }
    cout << std::endl;
}