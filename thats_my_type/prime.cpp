/*
 * A prime number is a whole number greater than 1 that can only be divided
 * evenly by 1 and itself. Write a program that asks the user to enter a single
 * digit integer. If the user enters a single digit that is prime (2, 3, 5, or
 *  7), print “The digit is prime”. Otherwise, print “The digit is not prime”.
 */

#include <iostream>

void is_prime(int x)
{
	// Whole number greater than 1
	if (x <= 1)
	{
		std::cout << "The digit is not prime\n";
		return;
	}
	// Check for divisible values beneath the square root.
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			std::cout << "The digit is not prime\n";
			return;
		}
	}
	// True if no values leave a modulo of 0.
	std::cout << "The digit is prime\n";
	return;
}

int main()
{
	std::cout << "Enter a number: ";
	int num{};
	std::cin >> num;
	is_prime(num);
	return 0;
}
