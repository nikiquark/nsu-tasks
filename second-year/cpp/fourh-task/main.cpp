#include "bchecker.h"
#include <iostream>
#include <string>

int main() {
	std::string s;
	std::cin >> s;
	if (BraceChecker::isBalanced(s)) {
		std::cout << "Balanced" << std::endl;
	}
	else {
		std::cout << "Not balanced" << std::endl;
	}
	return 0;
}