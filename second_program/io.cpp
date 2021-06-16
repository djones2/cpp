#include <iostream>

int readNumber()
{
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

int writeAnswer(int x, int y)
{
	std::cout << "The sum of " << x << " and " << y << " is " << x+y << '\n';
	return 0;
}
