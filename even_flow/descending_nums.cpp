#include <iostream>

/*
 * Write a program that outputs the following:
 * 5 4 3 2 1
 * 4 3 2 1
 * 3 2 1
 * 2 1
 * 1
 */

int main() {
	int start{5};
	while (start > 0) {
		int output{start};
		while (output > 0) {
			std::cout << output << " ";
			output--;
		}
		std::cout << "\n";
		start--;
	}
	return 0;
}