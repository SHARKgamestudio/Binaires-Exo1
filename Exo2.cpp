#include "Exo2.h"

int Mask(int value, int mask) {
	return (value ^ mask);
}

int UnMask(int masked, int mask) {
	return (masked ^ mask);
}

void Exercice2() {
	int masked = Mask(53, 8);
	cout << "MASKED : " << masked << endl;
	cout << "UNMASKED : " << UnMask(masked, 8) << endl;
}