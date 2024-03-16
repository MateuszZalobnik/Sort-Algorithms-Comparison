#include <iostream>
#include "Simulator/Simulator.h"
#include "Test/Test.h"

using namespace std;
int menu();
void simulate();



int main() {
//    int choice = menu();

Test test;
test.menu();


//Simulator simulator;
//simulator.simulate();
//simulator.displayArray();
//    int choice = 1;
//    if(choice == 1){
//        simulate();
//    } else if(choice == 2){
//        cout << "Testowanie\n";
//    }

    return 0;
}


int menu ()
{
    int choice;
    cout << "1. Symulacja\n";
    cout << "2. Testowanie\n";
    cout << "3. Wyjscie\n";
    cout << "Wybierz opcje: ";
    cin >> choice;
    return choice;
}