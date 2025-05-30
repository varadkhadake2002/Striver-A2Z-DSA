#include <iostream>
#include <string>  // for to_string, stoi, etc.
using namespace std;

int main() {
   
char ch = 'A';
cout << "ACII value of " << ch << " is " << int(ch) << "\n";

ch = 'z';
cout << "ACII value of " << ch << " is " << int(ch) << "\n";

cout << "------------------" << endl;

// Prefix vs Postfix
int a = 5;
cout << "a = " << a << endl;

cout << "Postfix a++ = " << a++ << endl; // uses then increments
cout << "After postfix, a = " << a << endl;

a = 5;
cout << "Prefix ++a = " << ++a << endl; // increments then uses
cout << "After prefix, a = " << a << endl;

return 0;
}
