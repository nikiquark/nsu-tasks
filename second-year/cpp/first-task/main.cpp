#include "LorentzVector.h"
#include <iostream>

int main() {
	LorentzVector a = LorentzVector(1, 2, 3, 5);
	std::cout << a.norm();
	a.print();
	return 0;
}
