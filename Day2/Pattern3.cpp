#include <iostream>
using namespace std;

int main() {

    //=========== Inverted Right-Angled Triangle (Star Pattern) =========

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i>=1; i--){
        for(int j = 1; j<=i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}
