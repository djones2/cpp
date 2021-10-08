#include <iostream>
#include <string>
/*
 * Take two integers and a char representing a mathematical operation.
 * Perform and output operation
 */

int main() {
	std::cout << "Enter a number: ";
	int num1{};
	std::cin >> num1;

	std::cout << "Enter a second number: ";
	int num2{};
	std::cin >> num2;

	std::cout << "Enter an operator: ";
	char operation{};
	std::cin >> operation;

	int result{};
	switch (operation) {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		case '%':
			result = num1 % num2;
			break;
		default:
			std::cout << "Invalid operator\n";
			return 0;
	}

	std::cout << "Result: " << result << "\n";

	return 0;
}