#include <iostream>
#include <string>  // for to_string, stoi, etc.
using namespace std;

int main() {
    // Integer to Float/Double
    int i = 42;
    float f = (float)i;
    double d = (double)i;

    // Float to Integer (truncates decimal)
    float pi = 3.14;
    int intPi = (int)pi;

    // Integer to Char (ASCII)
    char ch = (char)65;     // Output: 'A'
    int ascii = (int)'A';   // Output: 65

    // Bool to Integer and vice versa
    bool flag = true;
    int boolToInt = flag;   // 1
    bool intToBool = (bool)0; // false

    // Char to String
    char c = 'Z';
    string sc = string(1, c); // "Z"

    // Int/Float to String
    string si = to_string(i);       // "42"
    string sp = to_string(pi);      // "3.140000"

    // String to Int/Float
    string numStr = "123";
    int sToI = stoi(numStr);        // 123
    string floatStr = "3.14";
    float sToF = stof(floatStr);    // 3.14

    // Bool to String
    string boolStr = flag ? "true" : "false";  // "true"

    // String to Char (only if length is 1)
    string singleChar = "K";
    char sToC = singleChar[0];     // 'K'

    // Output examples
    cout << "int to float: " << f << endl;
    cout << "float to int: " << intPi << endl;
    cout << "int to char: " << ch << endl;
    cout << "char to int (ASCII): " << ascii << endl;
    cout << "char to string: " << sc << endl;
    cout << "int to string: " << si << endl;
    cout << "string to int: " << sToI << endl;
    cout << "bool to string: " << boolStr << endl;

    return 0;
}
