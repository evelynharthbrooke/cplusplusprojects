#include <iostream>

int main() {
	std::cout << "Hello there, welcome to the Cleaning Service!\n\n";

	auto small_room_count{0};
	std::cout << "Please enter the amount of small rooms you would like cleaned: ";
	std::cin >> small_room_count;
	auto large_room_count{0};
	std::cout << "Please enter the amount of large rooms you would like cleaned: ";
	std::cin >> large_room_count;

	const auto small_room_price{25.0};
	const auto large_room_price{35.0};
	const auto sales_tax{0.06};
	const auto estimate_expiry{30};
	std::cout << "\nEstimate for Cleaning Service:\n";
	std::cout << "Number of small rooms: " << small_room_count << "\n";
	std::cout << "Number of large rooms: " << large_room_count << "\n";
	std::cout << "Price per small room: $" << small_room_price << "\n";
	std::cout << "Price per large room: $" << large_room_price << "\n";

	const auto small_room_total{small_room_price * small_room_count};
	const auto large_room_total{large_room_price * large_room_count};
	const auto total_cost{small_room_total + large_room_total};
	std::cout << "Total Cost: $" << total_cost << "\n";
	
	const auto total_tax{total_cost * sales_tax};
	std::cout << "Total Tax: $" << total_tax << "\n";
	std::cout << "\n==============================================\n";
	
	const auto total_estimate{total_cost + total_tax};
	std::cout << "Total estimate: $" << total_estimate << "\n";
	std::cout << "This estimate is valid for " << estimate_expiry << " days." << "\n";

	return 0;
}
