#include <iostream>

/*
 * Solution to the Chapter 1 quiz from LearnCPP. Here is the prompt:
 *
 * Write a program that asks the user to enter a number, and then enter a
 * second number. The program should tell the user what the result of adding
 * and subtracting the two numbers are.
 * The output of the program should match the following (assuming inputs of 6
 * and 4):
 *
 * Enter an integer: 6
 * Enter another integer: 4
 * 6 + 4 is 10.
 * 6 - 4 is 2.
 */
int main()
{
	// User enters a desired value.
	std::cout << "Enter an integer: ";

	// Store user-entered value.
	int num1 {};
	std::cin >> num1;

	// User enters a second desired value.
	std::cout << "Enter another integer: ";

	// Store user-entered value.
	int num2 {};
	std::cin >> num2;

	// Output the sum and difference of the values the user entered.
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '.\n';
	std::cout << num1 << " - " << num2 << " = " << num1 - num2 << '.\n';
	return 0;
}