//
// Created by mgzeg on 3/6/2025.
//

#include <iostream>
using namespace std;

void lyginisNelyginis(int skaiciai[], int size) {
    for (int i = 0; i < size; i++) {
        if (skaiciai[i] % 2 == 0) {
            cout << "lyginis: " << skaiciai[i] << endl;
        } else {
            cout << "nelyginis: " << skaiciai[i] << endl;
        }
    }
}