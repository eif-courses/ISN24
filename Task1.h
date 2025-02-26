//
// Created by mgzeg on 2/26/2025.
//

#ifndef TASK1_H
#define TASK1_H
#include <iostream>
#include <vector>
using namespace std;

struct TwoIntegers {
    int min;
    int max;
};


inline int kiekSkDalinasiIsSeptyniu(int n) {
    int temp = 0;
    cout << "1.." << n << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0) {
            temp++;
        }
    }
    return temp;
}

inline void kiekDalinasiIsSeptyniuUI() {
    cout << "Parašykite algoritmą, kuris suskaičiuoja kiek yra skaičių, dalinamų iš 7 nuo 1 iki N." << endl;
    int sk;
    cout << "Įveskite skaičių:" << endl;
    cin >> sk;
    cout << kiekSkDalinasiIsSeptyniu(sk) << " skaičiai kurie dalijasi iš 7." << endl;
}


inline int getMaxNumber(const vector<int> &numbers) {
    int max = numbers[0];

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    return max;
}

inline int getMinNumber(const vector<int> &numbers) {
    int min = numbers[0];

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    return min;
}


inline TwoIntegers didziausiasMaziausiasSkaiciusIsTrijuIvestu(const vector<int> &numbers) {
    TwoIntegers num{};
    num.min = getMinNumber(numbers);
    num.max = getMaxNumber(numbers);
    return num;
}

inline void didziausiasMaziausiasSkaiciusIsTrijuIvestuUI() {
    cout <<
            "Parašykite algoritmą, kuris suranda didžiausią ir mažiausią skaičių iš trijų įvestų skaičių iš klaviatūros."
            << endl;

    int n = 3;
    vector<int> myList(2);
    //int masyvas[3];

    cout << "Įveskite tris skaičius: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> myList[i];
    }

    TwoIntegers result = didziausiasMaziausiasSkaiciusIsTrijuIvestu(myList);
    cout << "min: " << result.min << " max:" << result.max << endl;
}


#endif //TASK1_H
