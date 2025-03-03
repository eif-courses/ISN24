#include <iostream>
#include <windows.h>
#include "Task1.h"
#include "Task2.h"
#include "Utilities.h"


using namespace std;


void printMenuText() {
    cout << "=================================MENU=======================================================" << endl;
    cout << "1. Algoritmai. Jų paskirtis ir funkcijos" << endl;
    cout << "2. Kintamieji. Pagrindinės programinės konstrukcijos. Priskyrimo sakinys. Sudėtinis sakinys" << endl;
    cout << "3. Println funkcijos testas iš Utilities.h failo" << endl;
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
            atvaizduotiKonversija();
        } else if (input == 3) {
            printLn("Tavo $2 skaicius: yra toks $1 waeawe", 777, 999);
        }
    }


    //printf("Lwaeawe %d aweawe %d", 2, 2);

    // Sukurti print funkcija kuriai perduotemem teksta kaip zinutes fragementus (zodzius)
    // ir kitanma parametru skaiciu
    // ir nurodyti zinuteje kurioje vietoje turime ideti ta parametra


    return 0;
}
