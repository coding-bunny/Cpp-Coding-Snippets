# Auto Type Deducation

Auto Type Deducation is a feature that was added in the `C++11` specification for the C++ language.
It basically allows you to define variables using the `auto` keyword, and the compile will deduct the type for you.
Think of `auto` as a placeholder for the type, and the type is deduced from the initializer expression of your variable.

## Examples
```cpp
auto x = 1				// x: int

float* p;
auto x = p;				// x : float*
auto* y = p;			// y : float*

double f();
auto x = f();			// x: double
const auto& x = f();	// x: const double&
```
