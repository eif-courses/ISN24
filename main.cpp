#include <iostream>
#include <windows.h>
#include "Task1.h"


using namespace std;


void printMenuText() {
    cout << "=================================MENU=======================================================" << endl;
    cout << "1. Algoritmai. Jų paskirtis ir funkcijos" << endl;
    cout << "2. Kintamieji. Pagrindinės programinės konstrukcijos. Priskyrimo sakinys. Sudėtinis sakinys" << endl;
    cout << "0. Uždaryti programą" << endl;
    cout << "============================PASIRINKITE OPCIJĄ========================================" << endl;
}


int main() {
    SetConsoleOutputCP(65001);

    int input = -1;

    printMenuText();

    while (input != 0) {
        cin >> input;
        if (input == 1) {
            kiekDalinasiIsSeptyniuUI();
            didziausiasMaziausiasSkaiciusIsTrijuIvestuUI();
        } else if (input == 2) {
            cout << "Kolkas neigyvendinta funkcija" << endl;
        }
    }
    return 0;
}
