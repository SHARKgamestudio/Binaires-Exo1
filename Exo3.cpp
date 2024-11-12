#include "Exo3.h"
#include <bitset>

void WTF(int value) {
    int temp = value;
    cout << "BINARY : " << bitset<8>(value) << endl;
    cout << "LEFT SHIFT : " << (value << 3) << endl;
    cout << "RIGHT SHIFT : " << (temp >> 3) << endl;
}

void Exercice3() {
    WTF(34);
}