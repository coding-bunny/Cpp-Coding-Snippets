#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Create a new vector containing 8 elements
	vector<int> vector = { 1, 2, 3, 4, 5, 6, 7, 8 };

	// Add 2 more elements to the vector
	vector.push_back(9);
	vector.push_back(10);

	// Loop over the vector and show its elements
	cout << "vector = { ";

	for (int n : vector)
		cout << n << ", ";

	cout << "}; \n";

	return -0;
}
