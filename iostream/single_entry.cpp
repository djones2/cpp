#include <iostream>

// Practicing IOSteam capabilities.
int main()
{
	// Ask user to enter a number.
	std::cout << "Enter a number: ";
	int x{};
	// Capture user input into integer x.
	std::cin >> x;

	// Echo what the user entered.
	std::cout << "You entered " << x << '\n';
	return 0;
}