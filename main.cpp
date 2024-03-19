#include <iostream>
#include "Simulator/Simulator.h"
#include "Test/Test.h"

using namespace std;

int menu();

int main() {
    int choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Symulacja 1" << endl;
        cout << "2. Test 2" << endl;
        cout << "3. Exit" << endl;
        cout << "Wybierz: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> choice;

        if (cin.fail()) {
            cout << "Wprowadź numer." << endl;
            continue;
        }

        if (choice == 1) {
             Simulator simulator;
             simulator.simulate();
        } else if (choice == 2) {
             Test test;
             test.menu();
        } else if (choice == 3) {
            cout << "Exiting..." << endl;
        } else {
            cout << "Zły wybór." << endl;
        }

    } while (choice != 3);

    return 0;
}