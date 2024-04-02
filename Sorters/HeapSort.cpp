
#include <iomanip>
#include "HeapSort.h"

void HeapSort::heapify(int N, int i) {

    // sprawdzamy czy lewy i prawy element są większe od korzenia
    int largest = i;

    // lewy element ostatniego poziomu
    int l = 2 * i + 1;

    // prawy element ostatniego poziomu
    int r = 2 * i + 2;

    // jezeli nie wyszlo poza zakres i lewy element jest wiekszy od korzenia
    if (l < N && TempArr[l] > TempArr[largest])
        largest = l;

    // jezeli nie wyszlo poza zakres i prawy element jest wiekszy od korzenia
    if (r < N && TempArr[r] > TempArr[largest])
        largest = r;

    // jezel korzen nie jest najwiekszy
    if (largest != i) {
        // zamieniamy miejscami korzen z najwiekszym elementem
        swap(TempArr[i], TempArr[largest]);

        // sprawdzamy czy zamiana nie zepsuła kopca i naprawiamy
        heapify(N, largest);
    }
}

double HeapSort::sort() {
    Counter counter;
    counter.StartCounter();

    // budujemy kopiec od ostatniego elementu (zlozonego z korzenia i dwoch lisci) do pierwszego
    for (int i = size / 2 - 1; i >= 0; i--){
        heapify(size, i);
    }

    // sortujemy kopiec
    for (int i = size - 1; i > 0; i--) {
        // przesuwamy korzen na koniec
        swap(TempArr[0], TempArr[i]);
        // naprawiamy kopiec pomijajac ostatni (posortowny) element
        // naprwaiamy od korzenia co gwarantuje ze kopiec bedzie znowu kopcem
        heapify(i, 0);
    }

    double time = counter.GetCounter();
    Checker::IsSorted(TempArr, size);
    return time;
}

void HeapSort::displayData() {
    for (int i = 0; i < size; i++) {
        cout << TempArr[i] << " ";
    }
    cout << std::endl;
}
