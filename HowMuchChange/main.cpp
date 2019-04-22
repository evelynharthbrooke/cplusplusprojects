#include <iostream>

int main() {
	// Initialize base currency change values.
	const auto value_of_dollar {100};
	const auto value_of_quarter {25};
	const auto value_of_dime {10};
	const auto value_of_nickel {5};
	const auto value_of_penny {1};
	
	auto change_amount {0};
	
	std::cout << "Please enter an amount in cents: ";
	std::cin >> change_amount;
	
	// initialize change types
	auto balance {0};
	auto dollars {0};
	auto quarters {0};
	auto dimes {0};
	auto nickels {0};
	auto pennies {0};

	dollars =  change_amount / value_of_dollar ;
	
	balance = change_amount - dollars * value_of_dollar;

	quarters = balance / value_of_quarter;
	balance -= quarters * value_of_quarter;
	
	dimes = balance / value_of_dime;
	balance -= dimes * value_of_dime;
	
	nickels = balance / value_of_nickel;
	balance = nickels * value_of_nickel;

	pennies = balance / value_of_penny;

	std::cout << "\n" << "Converting " << change_amount << " cents to various currency types:" << "\n\n";
	std::cout << "Dollars: " << dollars << "\n";
	std::cout << "Quarters: " << quarters << "\n";
	std::cout << "Dimes: " << dimes << "\n";
	std::cout << "Nickels: " << nickels << "\n";
	std::cout << "Pennies: " << pennies << "\n";
}