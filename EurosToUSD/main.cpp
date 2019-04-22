#include <iostream>

int main() {

	const auto usd_per_eur {1.12};

	std::cout << "Welcome to the EUR to USD converter.\n";
	std::cout << "Please enter the value you would like to convert to USD: ";

	auto euros {0.0};
	std::cin >> euros;
	const auto dollars {euros * usd_per_eur};
	std::cout << euros << " euros is equivalent to " << dollars << " US dollars.\n"; 

	return 0;
}