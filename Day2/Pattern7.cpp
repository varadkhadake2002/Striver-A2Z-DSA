#include <bits/stdc++.h>
using namespace std;

int main() {

    //=========== Inverted Right-Aligned Triangle =========

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++){
        // Print spaces
        for(int j = 1; j < i; j++){
            cout << "  ";
        }
        // Print stars
        for(int j = i; j <= rows; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

