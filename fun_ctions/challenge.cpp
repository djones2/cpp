#include <iostream>

/*
 * Prompt and return user input.
 */
int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;
	return input;
}

/*
 * Output double of the provided value.
 */
void printDouble(int value)
{
	// Output double and triple the value the user entered.
	std::cout << "Double " << value << " is " << value * 2 << '\n';
}


/*
 * Modifying the program that originally doubled a user's input
 * value, but making it modular using functions.
 */
int main()
{
	// Print double the input.
	printDouble(getValueFromUser());

	return 0;
}
