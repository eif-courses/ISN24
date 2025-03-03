//
// Created by mgzeg on 3/3/2025.
//
#include "Task2.h"
#include <iostream>
using namespace std;
double centimetrusImetrus(double cm) {
    return cm / 100.0;
}
double metrusIcentimetrus(double m) {
    return m * 100.0;
}
void atvaizduotiKonversija() {
    double m = 25.0;
    double cm = 120.0;
    cout << "Kiek metrų: " << centimetrusImetrus(cm) << " m" << endl;
    cout << "Kiek centimetrų: " << metrusIcentimetrus(m) << " cm" << endl;
}


// 10 + 5
void skaiciuotuvas(string tekstas) {
    for (int i = 0; i < tekstas.size(); i++) {
        cout << tekstas[i] << " ";
    }
}




