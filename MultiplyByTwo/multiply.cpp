#include <iostream>

int main()
{
	// Tell the user to enter an integer.
	std::cout << "Hello there!\n";
	std::cout << "Please provide a number: ";
	
	// Define the variable "number". This variable will store
	// a provided number.
	//
	// Also, to avoid the issue of unassignment, let's give the
	// variable a base value of 0. However, this will later be
	// replaced with the user's given number later on in the
	// program.
	//
	// NOTE: We are using the "auto" C++ keyword to let the compiler
	// automatically detect what the variable's type is.
	auto number{ 0 };
	
	// Retrieve the number the user provided via their
	// keyboard, and store it in the num variable.
	std::cin >> number;
	
	// Display the user's chosen integer on screen.
	std::cout << "The integer you provided was " << number << ".\n\n";
	
	// Let's now go ahead and double the given number.
	std::cout << "Let's go ahead and double that number now.\n";
	std::cout << "The doubled number of the number you gave is " << number * 2 << ".\n\n";

	// Let's now triple that number for a bit of fun!
	std::cout << "For a bit of fun, let's now go ahead and triple it!\n";
	std::cout << "The tripled number of the number you provided is " << number * 3 << ".\n";

	// Finally, return the number of 0 to the operating system,
	// to let it know that the program completed successfully.
	return 0;
}