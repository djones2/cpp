/*
Write the following program: The user is asked to enter 2 floating point numbers (use doubles). The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. The program computes the answer on the two numbers the user entered and prints the results. If the user enters an invalid symbol, the program should print nothing.

Example of program:

Enter a double value: 6.2
Enter a double value: 5
Enter one of the following: +, -, *, or /: *
6.2 * 5 is 31
*/

#include <string>
#include <iostream>


// Retrieve number from user
double get_user_number() {
    std::cout << "Enter a double value: ";
    double num{};
    std::cin >> num;
	return num;
}

// Retrieve operator from user
char get_operator() {
	std::cout << "Enter one of the following: +, -, *, or /: ";
	char operation{};
	std::cin >> operation;
	return operation;
}

/* Calculate the result of a combination of two numbers and an operator. */
void calculate(double num_1, double num_2, char user_operator)
{
	if (user_operator == '+')
	{
		std::cout << num_1 << user_operator << num_2 << " = " << num_1 + num_2 << '\n';
	}
	else if (user_operator == '-')
	{
		std::cout << num_1 << user_operator << num_2 << " = " << num_1 - num_2 << '\n';
	}
	else if (user_operator == '*')
	{
		std::cout << num_1 << user_operator << num_2 << " = " << num_1 * num_2 << '\n';
	}
	else if (user_operator == '/')
	{
		std::cout << num_1 << user_operator << num_2 << " = " << num_1 / num_2 << '\n';
	}
}

int main()
{
	// Retrieve two numbers from user
	double num_1 { get_user_number() };
	double num_2 { get_user_number() };

	// Retrieve user_operator from user
	char user_operator { get_operator() };

	// Perform calculation
	calculate(num_1, num_2, user_operator);

    return 0;
}