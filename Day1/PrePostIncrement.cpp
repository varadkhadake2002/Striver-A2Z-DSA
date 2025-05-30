#include <iostream>
using namespace std;

int main() {
    // ASCII values
    char ch = 'A';
    cout << "ASCII value of " << ch << " is " << int(ch) << endl; // Output: 65

    ch = 'z';
    cout << "ASCII value of " << ch << " is " << int(ch) << endl; // Output: 122

    cout << "------------------" << endl;

    // Prefix vs Postfix
    int a = 5;
    cout << "a = " << a << endl; // Output: 5

    // Postfix: value is used first, then incremented
    cout << "Postfix a++ = " << a++ << endl; // Output: 5, a becomes 6 after this line
    cout << "After postfix, a = " << a << endl; // Output: 6

    a = 5; // Resetting a for prefix test

    // Prefix: value is incremented first, then used
    cout << "Prefix ++a = " << ++a << endl; // Output: 6
    cout << "After prefix, a = " << a << endl; // Output: 6

    return 0;
}

