#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main() {

	vector<int> vector1;
	vector<int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);
	cout << "First element in vector1: " << vector1.at(0) << "\n";
	cout << "Second element in vector1: " << vector1.at(1) << "\n";
	cout << "There are " << vector1.size() << " elements in vector1.\n\n";
	vector2.push_back(100);
	vector2.push_back(200);
	cout << "First element in vector2: " << vector2.at(0) << "\n";
	cout << "Second element in vector2: " << vector2.at(1) << "\n";
	cout << "There are " << vector2.size() << " elements in vector2.\n\n";

	vector<vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	cout << "Elements in vector_2d:" << "\n";
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << "\n";
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << "\n\n";

	cout << "Changing first element in vector1 to 1000..." << "\n\n";
	vector1.at(0) = 1000;

	cout << "Elements in vector_2d: " << "\n";
	// the multi-dimensional vector will not reflect the
	// updated 1000 value that was assigned to the first
	// element in vector1, due to the multi-dimensional
	// vector storing copies of the original elements.
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << "\n";
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << "\n\n";

	cout << "Elements in vector1: " << "\n";
	cout << vector1.at(0) << "\n";
	cout << vector1.at(1) << "\n";
}
