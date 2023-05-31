#include <iostream>

double getDouble() {
	double num{};
	std::cout << "Enter a double value: ";
	std::cin >> num;
	return num;
}

char getOp() {
	char op{};
	std::cout << "Enter one of the following : +, -, *, or / : ";
	std::cin >> op;
	return op;
}

void printRes(double num1, double num2, char op) {
	if (op == '+') std::cout << num1 << ' ' << op << ' ' << num2 << " is " << (num1 + num2) << '\n';
	else if (op == '-') std::cout << num1 << ' ' << op << ' ' << num2 << " is " << (num1 - num2) << '\n';
	else if (op == '*') std::cout << num1 << ' ' << op << ' ' << num2 << " is " << (num1 * num2) << '\n';
	else if (op == '/') std::cout << num1 << ' ' << op << ' ' << num2 << " is " << (num1 / num2) << '\n';
}

int main() {
	double num1 = { getDouble() };
	double num2{ getDouble() };
	char op{ getOp() };
	printRes(num1, num2, op);
}
