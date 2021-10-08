#include <iostream>

/*
 * Write a for loop that prints every even number from 0 to 20.
 */

int main() {
	for (int count{0}; count <= 20; count += 2) {
		std::cout << count << " ";
	}
	std::cout << "\n";
	return 0;
}