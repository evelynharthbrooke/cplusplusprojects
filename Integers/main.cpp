#include <iostream>

int main() {
	std::cout << "Hello there!\n\n";
	std::cout << "Please enter three integers, separated by spaces: ";

	auto num1 {0}, num2 {0}, num3 {0};
	std::cin >> num1 >> num2 >> num3;

	const auto total {num1 + num2 + num3};
	const auto count {3};
	const auto average = static_cast<double>(total) / count;

	std::cout << "Your chosen integers are " << num1 << ", " << num2 << ", and " << num3 << ".\n\n";
	std::cout << "The total combined value of the numbers is " << total << ".\n";
	std::cout << "The average of the integers you picked is " << average << ".\n";
	
	return 0;
}