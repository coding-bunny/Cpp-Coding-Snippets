#include <iostream>
#include <filesystem>
#include <fstream>
#include "RAIIResource.h"

using namespace std;

/// <summary>
/// Summer taking a single argument and returning the argument.
/// Combined with variadic templating of the same function, allows us to break a recursive loop.
/// </summary>
/// <typeparam name="T">The type of the argument and the return value</typeparam>
/// <param name="v">The value being passed</param>
/// <returns>The value being returned</returns>
template<typename T>
T summer(T v) {
	return v;
}

/// <summary>
/// Takes any kind of arguments and sums them together, by extracting the first element and
/// calling itself until all elements in the sequence are exhausted. Only works for numeric values right now.
/// </summary>
/// <typeparam name="...Args">The sequence of arguments to sum together.</typeparam>
/// <typeparam name="T">The type of the arguments to be summed together</typeparam>
/// <param name="first">The first argument being extracted, used in recursive loop to exhaust the sequence.</param>
/// <param name="...args">The sequence to be summed</param>
/// <returns>The sum of the sequence.</returns>
template<typename T, typename... Args>
T summer(T first, Args... args) {
	return first + summer(args...);
}

void demo_initialization(const bool throw_error);

int main() {
	//
	// First Challenge: Variadic Templating to sum integers
	//
	cout << "The sum of 1,2,3,4 is " << summer(1, 2, 3, 4) << endl;
	cout << "The sum of 1,2,3 is " << summer(1, 2, 3) << endl;
	cout << "The sum of 1,2 is " << summer(1, 2) << endl;
	cout << "The sum of 1 is " << summer(1) << endl;

	//
	// Second Challenge: Write strings to a file using the filesystem approach
	//
	std::filesystem::path fpath{ "text.txt" };

	if (std::filesystem::remove(fpath))
		cout << "Deleted the file " << fpath << " since it was present" << endl;
	
	std::ofstream ofs{ fpath };

	for (auto &number : { 1,2,3,4,5,6,7,8,9,10 })
		ofs << number << endl;
	
	ofs.close();

	//
	// Third Challange: Resource Acquisition Is Initialization (RAII)
	//
	try {
		demo_initialization(false);
	}
	catch (exception e) {
		cout << "Caught exception: " << e.what() << endl;
	}

	return 0;
}

void demo_initialization(const bool throw_error) {
	RAIIResource res1 = RAIIResource(1);
	RAIIResource res2 = RAIIResource(2);

	if (throw_error)
		throw exception("Banzai");

	cout << "Leaving scope, commencing resource cleanup" << endl;
}
