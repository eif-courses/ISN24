//
// Created by Markeris on 2/27/2025.
//

#ifndef UTILITIES_H
#define UTILITIES_H

#include <iostream>
using namespace std;


void printLn(string text, int param1, int param2, int param3, int param4) {
}

void printLn(string text, int param1, int param2, int param3) {
}

void printLn(string text, int param1) {
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == '$' && text[i + 1] == '1') {
            cout << param1;
            i++;
        } else {
            cout << text[i];
        }
    }
    cout << endl;
}

void printLn(string text, int param1, int param2) {
    int count = 0; // 2

    int param1Pos = 0;
    int param2Pos = 0;
    char whoIsFirst = '!';

    // ar pateike 2 parametrus text dalyje
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == '$' && text[i + 1] == '1') {
            param1Pos = i;
            count++;
            whoIsFirst = '1';
        }
        if (text[i] == '$' && text[i + 1] == '2') {
            param2Pos = i;
            count++;
            whoIsFirst = '2';
        }
    }


    //printLn("Tavo skaicius: yra toks $2 waeawe $1", 777, 999);

    if (count == 2) {
        if (whoIsFirst == '1') { // Cia yra dvejetas pirmas
            text.replace(param2Pos, 2, to_string(param2));
            text.replace(param1Pos + 1, 2, to_string(param1));

        } else if (whoIsFirst == '2') { // Cia yra vienetas pirmas
            text.replace(param1Pos, 2, to_string(param1));
            text.replace(param2Pos + 1, 2, to_string(param2));
        }
        cout << text << endl;
    } else {
        cout << "Perdave per mazai parametru!!!" << endl;
    }
}


#endif //UTILITIES_H
