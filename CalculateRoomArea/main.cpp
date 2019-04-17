#include <iostream>

int main() {
	std::cout << "Enter the width of the room: ";
	auto room_width{0};
	std::cin >> room_width;

	std::cout << "Enter the length of the room: ";
	auto room_length{0};
	std::cin >> room_length;

	const auto room_area{room_width * room_length};
	std::cout << "The area of the room is " << room_area << " square feet.";

	return 0;
}
