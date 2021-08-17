/*
 * Write a program that asks the user to enter their full name and their age.
 * As output, tell the user how many years they’ve lived for each letter in
 * their name (for simplicity, count spaces as a letter).
 * Sample output:
 * Enter your full name: John Doe
 * Enter your age: 46
 * You've lived 5.75 years for each letter in your name.
 */

#include <string> // For std::string and std::getline
#include <iostream>

int main()
{
	// Retrieve user's name
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

	// Retrieve user's age
    std::cout << "Enter your age: ";
    double age{};
    std::cin >> age;

    std::cout << "You've lived " << age / static_cast<double>(name.length()) << " years for each letter in your name.\n";

    return 0;
}