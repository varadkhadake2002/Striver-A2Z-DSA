#include <iostream>
#include <string>  // for to_string, stoi, etc.
using namespace std;

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num > 0){
        cout << "It is a positive number." << "\n";
    }
    else if (num < 0){
        cout << "It is a negative number." << "\n";
    }
    else{
        cout << "It is zero." << "\n";
    }

    return 0;
}
