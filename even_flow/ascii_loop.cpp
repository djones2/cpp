#include <iostream>

/*
 * Write a profram that prints out the letters a through z with
 * their ASCII codes.
 */

#define ascii_a 97
#define ascii_z (ascii_a + 25)

int main() {
	int ascii{ascii_a};
	while (ascii <= ascii_z) {
		std::cout << "Letter: " << char(ascii) << "\n";
		std::cout << "ASCII value: " << ascii << "\n";
		ascii++;
	}
	return 0;
}