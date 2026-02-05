#include <iostream>

double getNumberFromUser() {
	std::cout << "Enter a double value: ";
	double number;
	std::cin >> number;
	return number;
}

void printResult(double x, double y) {
	std::cout << "Enter +, -, *, or /: ";
	char mathOperator{};
	std::cin >> mathOperator;

	switch (mathOperator) {
	case '+':
		std::cout << x <<" " << mathOperator << " " << y << " is " << x + y << '\n';
		break;
	case '-':
		std::cout << x << " " << mathOperator << " " << y << " is " << x - y << '\n';
		break;
	case '*':
		std::cout << x << " " << mathOperator << " " << y << " is " << x * y << '\n';
		break;
	case '/':
		std::cout << x << " " << mathOperator << " " << y << " is " << x / y << '\n';
		break;
	default:
		std::cout << "Invalid choice." << '\n';
		break;
	}
}

int main() {
	double x{ getNumberFromUser() };
	double y{ getNumberFromUser() };

	printResult(x, y);
	return 0;
}