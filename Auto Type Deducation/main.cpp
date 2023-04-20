#include <iostream>
#include <string>

using namespace std;

int main() {
	auto age = 6;
	auto name = "Arne De Herdt";

	cout << "The type of age is " << typeid(age).name() << endl;
	cout << "The type of name is " << typeid(name).name() << endl;
}
