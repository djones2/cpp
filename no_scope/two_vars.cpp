#include <iostream>

/*
 * Program that displays behavior of local scope through the "temp" variable in
 * the swap operation.
 */

int main()
{
	// Ask for smaller integer
	std::cout << "Enter an integer: ";
	int smaller{};
	std::cin >> smaller;

	// Ask for larger integer
	std::cout << "Enter a larger integer: ";
	int larger{};
	std::cin >> larger;

	// Compare values, swap if necessary
	if (smaller > larger)
	{
		std::cout << "Swapping the values\n";

		int temp{larger};
		larger = smaller;
		smaller = temp;
	}
	// Output values
	std::cout << "The smaller value is " << smaller << "\n";
	std::cout << "The larger value is " << larger << "\n";

	return 0;
}