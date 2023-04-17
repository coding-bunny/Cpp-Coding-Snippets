#include <iostream>
#include <iomanip>
#include <string>
#include <bitset>

using namespace std;

/// <summary>
/// This function will perform some basic bitwise operations and output the results to the console.
/// This should explain the actual function of bitwise operators to the user.
/// Because we want to keep things as simple as possible, there will be some code here that outputs additional information to the screen
/// to help in the explanation.
/// For simplicity, we will not be be type-checking or value checking inputs.
/// This also assumes C++20 to be used for some helping functionality.
/// </summary>
/// <returns>An integer representing the result of the application</returns>
int main()
{
    unsigned int number;
    unsigned int mask = 85;
    bitset<8> y(mask);
    
    cout << "Please enter a number between 0 and 255: ";
    cin >> number;
    bitset<8> x(number);
    cout << endl;
    
    cout << endl <<  "Binary representations" << endl;
    cout << setw(3) << left << number << " : " << x << endl;
    cout << mask << "  : " << y << endl;

    bitset<8> logical_and(number & mask);
    bitset<8> logical_or(number | mask);
    bitset<8> logical_not(~number);
    bitset<8> logical_xor(number^mask);

    cout << endl << "Bitwise Operations" << endl;
    cout << "a & b (AND) : " << logical_and << endl;
    cout << setw(14) << right << "a | b (OR) : " << logical_or << endl;
    cout << setw(14) << right << "^a (XOR) : " << logical_xor << endl;
    cout << setw(14) << right << "~a (NOT) : " << logical_not << endl;
}

