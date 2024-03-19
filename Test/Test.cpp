#include "Test.h"


void Test::displayArray() {
    cout << endl;
    if(length > 20){
        cout << "Za duza tablica\n";
        return;
    }
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
}

void Test::checkIsSorted() {
    cout << endl;
    for (int i = 0; i < length - 1; i++) {
        if(TempArr[i] > TempArr[i+1]){
            cout << "Tablica nie jest posortowana\n";
            return;
        }
    }
    cout << "Tablica jest posortowana\n";
}

void Test::generateArr() {
    int min, max;
    cout << endl;
    cout << "Generowanie tablicy";
    cout << endl;
    cout << "Podaj dlugosc tablicy: ";
    cin >> length;

    cout << endl;
    cout << "Podaj minimalna wartosc: ";
    cin >> min;

    cout << endl;
    cout << "Podaj maksymalna wartosc: ";
    cin >> max;
    arr = new int[length];
    arr = generator.generateRandomArray(length, min, max);
    cout << endl;
    cout << "Tablica wygenerowana\n";
}

void Test::arrayFromFile() {
    string name;
    cout << endl;
    cout << "Podaj nazwe pliku: ";
    cin >> name;

    string num;
    ifstream file;
    file.open(name.c_str());

    if (file.is_open()) { // Sprawdzenie, czy plik został otwarty poprawnie
        int i = 0;
        while (getline (file, num)) {
            if(i == 0) {
                length = stoi(num);
                arr = new int[length];
            } else {
                arr[i-1] = stoi(num);
            }
            i++;
        }
        cout << "Tablica wczytana z pliku\n";
        file.close(); // Zamknięcie pliku
    } else {
        std::cerr << "Nie udalo sie otworzyc pliku." << std::endl;
    }
}

void Test::menu() {
    int choice;
    do {
        cout << endl;
        cout << "1. Generuj tablice\n";
        cout << "2. Wczytaj tablice z pliku\n";
        cout << "3. Wyswietl tablice\n";
        cout << "4. Sortuj\n";
        cout << "5. Wyjdz\n";
        cout << "Wybierz opcje: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Niepoprawna opcja. Wybierz ponownie." << endl;
            continue;
        }

        switch (choice) {
            case 1:
                generateArr();
                break;
            case 2:
                arrayFromFile();
                break;
            case 3:
                displayArray();
                break;
            case 4:
                sortingMenu();
                break;
            case 5:
                break;
            default:
                cout << "Nie ma takiej opcji\n";
                break;
        }
    } while (choice != 5);
}

void Test::sortingMenu() {
    TempArr = new int[length];
    for (int l = 0; l < length; l++) {
        TempArr[l] = arr[l];
    }

    int choice;
    do {
        cout << endl;
        cout << "1. Sortowanie przez wstawianie\n";
        cout << "2. Sortowanie szybkie - pivot skrajny lewy\n";
        cout << "3. Sortowanie szybkie - pivot skrajny prawy\n";
        cout << "4. Sortowanie szybkie - pivot srodkowy\n";
        cout << "5. Sortowanie szybkie - pivot losowy\n";
        cout << "6. Sortowanie przez kopcowanie\n";
        cout << "7. Sortowanie Shella - n/2^k\n";
        cout << "8. Sortowanie Shella - 4^k * 3*2^(k-1) + 1\n";
        cout << "9. Wyjdz\n";
        cout << "Wybierz opcje: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Niepoprawna opcja. Wybierz ponownie." << endl;
            continue;
        }

        if (choice == 1) {
            InsertSort insertSort(arr, length);
            insertSort.sort();
            this->TempArr = insertSort.TempArr;
            afterSortingMenu();
        } else if (choice == 2) {
            QuickSort quickSort(arr, length, QuickSort::LEFT);
            quickSort.sort();
            this->TempArr = quickSort.TempArr;
            afterSortingMenu();
        } else if (choice == 3) {
            QuickSort quickSort(arr, length, QuickSort::RIGHT);
            quickSort.sort();
            this->TempArr = quickSort.TempArr;
            afterSortingMenu();
        } else if (choice == 4) {
            QuickSort quickSort(arr, length, QuickSort::CENTER);
            quickSort.sort();
            this->TempArr = quickSort.TempArr;
            afterSortingMenu();
        } else if (choice == 5) {
            QuickSort quickSort(arr, length, QuickSort::RANDOM);
            quickSort.sort();
            this->TempArr = quickSort.TempArr;
            afterSortingMenu();
        } else if (choice == 6) {
            HeapSort heapSort(arr, length);
            heapSort.sort();
            this->TempArr = heapSort.TempArr;
            afterSortingMenu();
        } else if (choice == 7) {
            ShellSort shellSort(arr, length, ShellSort::SHELL);
            shellSort.sort();
            this->TempArr = shellSort.TempArr;
            afterSortingMenu();
        } else if (choice == 8) {
            ShellSort shellSort(arr, length, ShellSort::SEDGEWICK);
            shellSort.sort();
            this->TempArr = shellSort.TempArr;
            afterSortingMenu();
        } else if (choice == 9) {
            break;
        } else {
            cout << "Nie ma takiej opcji\n";
        }
    } while (choice != 9);

}

void Test::afterSortingMenu() {
    int choice;
    do {
        cout << endl;
        cout << "1. Wyswietl tablice\n";
        cout << "2. Sprawdz czy tablica jest posortowana\n";
        cout << "3. Wyjdz\n";
        cout << "Wybierz opcje: ";
        cin >> choice;

        if (cin.fail()) { // Sprawdź, czy wczytanie operacji się nie powiodło
            cin.clear(); // Wyczyść flagi błędu strumienia wejścia
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Odrzuć błędne wejście
            cout << "Niepoprawna opcja. Wybierz ponownie." << endl;
            continue; // Kontynuuj pętlę, aby użytkownik mógł ponownie wybrać opcję
        }

        switch (choice) {
            case 1:
                displayTempArr();
                break;
            case 2:
                checkIsSorted();
                break;
            case 3:
                break;
            default:
                cout << "Nie ma takiej opcji\n";
                break;
        }
    } while (choice != 3);
}

void Test::displayTempArr() {
    cout << endl;
    if(length > 20){
        cout << "Za duza tablica\n";
        return;
    }
    for (int i = 0; i < length; i++) {
        cout << TempArr[i] << " ";
    }
}