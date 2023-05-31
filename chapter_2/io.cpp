#include "io.h"
#include <iostream>

int readNumber() {
	int num{};
	std::cout << "Enter a number: ";
	std::cin >> num;
	return num;
}

void writeAnswer(int num) {
	std::cout << "The answer is: " << num << '\n';
	return;
}