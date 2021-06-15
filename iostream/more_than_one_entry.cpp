#include <iostream>

// Practicing IOSteam capabilities.
int main()
{
	// Ask user to enter a number.
	std::cout << "Enter two numbers separated by a space: ";
	int x{};
	int y{};
	// Capture user input into x and y, respectively.
	std::cin >> x >> y;

	// Echo what the user entered.
	std::cout << "You entered " << x << " and " << y << '\n';
	return 0;
}