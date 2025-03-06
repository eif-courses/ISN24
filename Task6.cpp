//
// Created by mgzeg on 3/6/2025.
//

#include "Task6.h"
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void daugiausiaiPasikartojantisSkaiciusMasyve() {
    vector masyvas = {98, 11, 22, 33, 11, 22, 434,11,22,11, 65556};
    unordered_set tikrinami_skaiciai(masyvas.begin(), masyvas.end());

    // 65556 434 22 11 33 98
    int max_occurence = 0;
    int temp = 0;
    int index = 0;
    int counter = 0;
    int skaicius = 0;

    for (auto it : tikrinami_skaiciai) {
        for (int j = 0; j < masyvas.size(); j++) {
            if (it == masyvas[j]) {
                temp++;
                counter = j;
            }
        }
        if (temp > max_occurence) {
            max_occurence = temp;
            index = counter;
            skaicius = it;
        }
        temp = 0;
    }
    cout << skaicius << endl;
    cout << index << endl;
}


