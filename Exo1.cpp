#include "Exo1.h"

#include <iostream>
#include "Exo2.h"

using namespace std;

void Binary(int a, int b) {
    cout << "AND : " << (a & b) << endl;
    cout << "OR : " << (a | b) << endl;
    cout << "XOR : " << (a ^ b) << endl;

    cout << "NOT (A) : " << (~a) << endl;
}

void Exercice1() {
    Binary(5, 3);
}