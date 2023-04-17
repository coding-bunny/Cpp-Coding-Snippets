#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    int a = rand();
    int* ptr = &a;
                                  

    cout << "           The value of a = " << right << setw(16) << a << endl;
    cout << "         The address of a = " << right << setw(16) << &a << endl;
    cout << "       The address of ptr = " << right << setw(16) << &ptr << endl;
    cout << "         The value of ptr = " << right << setw(16) << ptr << endl;
    cout << "The value at the address is " << right << setw(16) << *ptr << endl;
}
