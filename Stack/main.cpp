#include <iostream>
#include <stack>;

using namespace std;

/// <summary>
/// This is a simple code snippet to show how a stack works in C++.
/// A stack is a container that follows the FILO principle: First in, Last out.
/// </summary>
/// <returns></returns>
int main() {
	stack<int> stack;

	// Populate the stack
	for (int i = 1; i < 11; i++) {
		cout << "Pushing " << i << " into the stack\n";
		stack.push(i);
	}

	// Loop over the stack
	while (!stack.empty()) {
		cout << "The number on the stack is " << stack.top() << "\n";
		stack.pop();
	}

	return 0;
}
