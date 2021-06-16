#include <iostream>

/*
 * First program as described by LearnCPP that doubles and triples a
 * user-entered value.
 */
int main()
{
	// User enters a desired value.
	std::cout << "Enter an integer: ";

	// Store user-entered value.
	int num {};
	std::cin >> num;

	// Output double and triple the value the user entered.
	std::cout << "Double " << num << " is " << num * 2 << '\n';
	std::cout << "Triple " << num << " is " << num * 3 << '\n';
	return 0;
}
