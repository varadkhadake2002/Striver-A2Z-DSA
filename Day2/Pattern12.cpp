#include <bits/stdc++.h>
using namespace std;

int main() {

    //=========== Inverted Character Triangle =========

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    char ch = 'A';  // Start from A

    for (int i = rows; i >= 1; i--) {  // Decreasing rows
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}
