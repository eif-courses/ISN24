//
// Created by mgzeg on 2/26/2025.
//

#ifndef TASK1_H
#define TASK1_H

#include <vector>
#include <iostream>
using namespace std;

struct TwoIntegers {
    int min;
    int max;
};

int kiekSkDalinasiIsSeptyniu(int n);

void kiekDalinasiIsSeptyniuUI();

int getMaxNumber(const vector<int> &numbers);

int getMinNumber(const vector<int> &numbers);

TwoIntegers didziausiasMaziausiasSkaiciusIsTrijuIvestu(const vector<int> &numbers);

void didziausiasMaziausiasSkaiciusIsTrijuIvestuUI();


#endif //TASK1_H
