#include <iostream>

/*
Write a function named sumTo() that takes an integer parameter named value, and
returns the sum of all the numbers from 1 to value.
 */

int sumTo(int value)
{
	int result{0};
	for (value; value > 0; value--)
	{
		result += value;
	}
	return result;
}

int main()
{
	int value{10};
	std::cout << "Value: " << value << "\n";
	std::cout << "Total sum: " << sumTo(value) << "\n";
	return 0;
}
