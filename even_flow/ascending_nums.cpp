#include <iostream>

/*
 * Write a program that outputs the following:
 *         1
 *       2 1
 *     3 2 1
 *   4 3 2 1
 * 5 4 3 2 1
 */

int main()
{
	int columns{1};
	while (columns <= 5)
	{
		int output{5};
		while (output >= 1)
		{
			if (output <= columns)
			{
				std::cout << output << " ";
			}
			else
			{
				std::cout << "  ";
			}
			output--;
		}
		std::cout << "\n";
		columns++;
	}
	return 0;
}