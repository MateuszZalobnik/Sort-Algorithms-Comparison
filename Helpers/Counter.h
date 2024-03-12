#include <windows.h>
#ifndef AIZO1_COUNTER_H
#define AIZO1_COUNTER_H


class Counter {
private:
    double PCFreq = 0.0;
    __int64 CounterStart = 0;
public:
    // metoda inicjalizuje licznik
    void StartCounter();
    // metoda zwraca czas od inicjalizacji licznika (milisekundy)
    double GetCounter();
};


#endif //AIZO1_COUNTER_H
