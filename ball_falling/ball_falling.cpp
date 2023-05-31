#include <iostream>

double getTowerHeight() {
	double height {};
	std::cout << "Enter the height of the tower in meters: ";
	std::cin >> height;
	return height;
}

double calcHeight(double initialHeight, int seconds) {
	constexpr double GRAVITY_CONSTANT = 9.8;
	return initialHeight - (GRAVITY_CONSTANT * seconds * seconds / 2);
}

void printHeight(double currHeight, int seconds) {
	std::cout << "At " << seconds << " seconds, the ball is ";
	if (currHeight < 0) std::cout << " on the ground.\n";
	else std::cout << "at height: " << currHeight << " meters\n";
}

int main() {
	double height{ getTowerHeight() };
	printHeight(calcHeight(height, 0), 0);
	printHeight(calcHeight(height, 1), 1);
	printHeight(calcHeight(height, 2), 2);
	printHeight(calcHeight(height, 3), 3);
	printHeight(calcHeight(height, 4), 4);
	printHeight(calcHeight(height, 5), 5);
}
